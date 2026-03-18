/*
 * XREFs of MiDirtyPte @ 0x1404516E0
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 */

void __fastcall MiDirtyPte(__int64 a1, __int64 *a2, __int16 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v9 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      v6 = MiLockWorkingSetOptimal(a1, (unsigned __int64)a2, &v9, a4);
      v7 = *a2;
      v8 = v6;
      if ( (*a2 & 1) != 0 && (v7 & 0x42) == 0 && (v7 & 0x800) != 0 )
        MiWriteValidPteNewProtection((ULONG_PTR)a2, v7 | 0x62);
      MiUnlockWorkingSetOptimal(a1, v8, v9);
    }
  }
}
