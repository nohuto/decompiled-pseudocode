/*
 * XREFs of MmStoreIsVirtualAddressPoisoned @ 0x14068D980
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x14060ADB8 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiStoreGetVadForAddress @ 0x1402F5754 (MiStoreGetVadForAddress.c)
 */

__int64 __fastcall MmStoreIsVirtualAddressPoisoned(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  __int64 VadForAddress; // rbx
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // bp
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned int v14; // ebx

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  VadForAddress = MiStoreGetVadForAddress(a1, a2, a3, a4);
  v7 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = MiLockWorkingSetShared((__int64)p_Blink, v8, v9, v10);
  MiMakeSystemAddressValid((ULONG_PTR)v7, (*(_DWORD *)(VadForAddress + 48) >> 12) & 0x7F, v11, 2);
  v14 = 0;
  if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*v7) )
    LOBYTE(v14) = ((v12 >> 5) & 0x1F) == 24;
  MiUnlockPageTableInternal((__int64)p_Blink, v13);
  MiUnlockWorkingSetShared((__int64)p_Blink, v11);
  return v14;
}
