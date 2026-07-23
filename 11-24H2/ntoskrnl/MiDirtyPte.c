/*
 * XREFs of MiDirtyPte @ 0x1402092D4
 * Callers:
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 */

void __fastcall MiDirtyPte(__int64 a1, __int64 *a2, __int16 a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rsi
  char v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v9 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      v5 = MiLockWorkingSetOptimal(a1, a2, &v9);
      v7 = *a2;
      v8 = v5;
      if ( (*a2 & 1) != 0 && (v7 & 0x42) == 0 && (v7 & 0x800) != 0 )
        MiWriteValidPteNewProtection((ULONG_PTR)a2);
      LOBYTE(v6) = v9;
      MiUnlockWorkingSetOptimal(a1, v8, v6);
    }
  }
}
