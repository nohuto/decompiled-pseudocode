/*
 * XREFs of MmStoreIsVirtualAddressPoisoned @ 0x140680FC0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x140600778 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 * Callees:
 *     MiStoreGetVadForAddress @ 0x140207B58 (MiStoreGetVadForAddress.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 */

__int64 __fastcall MmStoreIsVirtualAddressPoisoned(unsigned __int64 a1)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  __int64 VadForAddress; // rbx
  unsigned __int64 *v4; // rdi
  unsigned __int8 v5; // bp
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int v8; // ebx

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  VadForAddress = MiStoreGetVadForAddress(a1);
  v4 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = MiLockWorkingSetShared((__int64)p_Blink);
  MiMakeSystemAddressValid((ULONG_PTR)v4, (*(_DWORD *)(VadForAddress + 48) >> 12) & 0x7F, v5, 2);
  v8 = 0;
  if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*v4) )
    LOBYTE(v8) = ((v6 >> 5) & 0x1F) == 24;
  MiUnlockPageTable((__int64)p_Blink, v7);
  MiUnlockWorkingSetShared((__int64)p_Blink, v5);
  return v8;
}
