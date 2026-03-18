/*
 * XREFs of MiRelockFaultState @ 0x1403967A0
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiKernelWriteToExecutableMemory @ 0x1404CE618 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

unsigned __int64 __fastcall MiRelockFaultState(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int8 v6; // r14
  unsigned __int64 result; // rax
  ULONG_PTR v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  if ( a2 )
  {
    v6 = MiLockWorkingSetShared(*(_QWORD *)a1);
    result = MiLockLowestValidPageTableEx(v2, a2 << 25 >> 16, &v8, 0);
    v3 = result;
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
      MiUnlockPageTableInternal(v2, result);
      MiUnlockWorkingSetShared(v2, v6);
      v3 = 0LL;
    }
  }
  *(_BYTE *)(a1 + 13) |= 1u;
  result = MiLockWorkingSetExclusive(v2);
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
