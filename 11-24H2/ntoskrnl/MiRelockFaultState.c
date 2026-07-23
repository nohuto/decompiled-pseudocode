/*
 * XREFs of MiRelockFaultState @ 0x140427570
 * Callers:
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x140426B40 (MiKernelWriteToExecutableMemory.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 */

unsigned __int64 __fastcall MiRelockFaultState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int8 v8; // r14
  unsigned __int64 result; // rax
  ULONG_PTR v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  if ( a2 )
  {
    v8 = MiLockWorkingSetShared(*(_QWORD *)a1, a2, a3, a4);
    result = MiLockLowestValidPageTableEx(v4, a2 << 25 >> 16, &v10, 0);
    v5 = result;
    if ( result == a2 )
    {
      if ( result )
      {
        *(_QWORD *)(a1 + 16) = result;
        return result;
      }
    }
    else
    {
      MiUnlockPageTableInternal(v4, result);
      MiUnlockWorkingSetShared(v4, v8);
      v5 = 0LL;
    }
  }
  *(_BYTE *)(a1 + 13) |= 1u;
  result = MiLockWorkingSetExclusive(v4);
  *(_QWORD *)(a1 + 16) = v5;
  return result;
}
