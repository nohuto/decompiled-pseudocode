/*
 * XREFs of MmStoreIsVirtualAddressPoisoned @ 0x14068C850
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x140284E70 (MmStoreProbeAndLockPages.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x14060C7F8 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiStoreGetVadForAddress @ 0x14039788C (MiStoreGetVadForAddress.c)
 */

__int64 __fastcall MmStoreIsVirtualAddressPoisoned(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *VadForAddress; // rbx
  unsigned __int64 *v6; // rdi
  unsigned __int8 v7; // bp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned int v10; // ebx

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  VadForAddress = MiStoreGetVadForAddress(a1, a2, a3);
  v6 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = MiLockWorkingSetShared((__int64)p_Blink);
  MiMakeSystemAddressValid((ULONG_PTR)v6, (LODWORD(VadForAddress[3].Flink) >> 12) & 0x7F, v7, 2);
  v10 = 0;
  if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*v6) )
    LOBYTE(v10) = ((v8 >> 5) & 0x1F) == 24;
  MiUnlockPageTableInternal((__int64)p_Blink, v9);
  MiUnlockWorkingSetShared((__int64)p_Blink, v7);
  return v10;
}
