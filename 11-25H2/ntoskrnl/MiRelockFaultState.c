/*
 * XREFs of MiRelockFaultState @ 0x14043A310
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiKernelWriteToExecutableMemory @ 0x140439960 (MiKernelWriteToExecutableMemory.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
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
      MiUnlockPageTable(v2, result);
      MiUnlockWorkingSetShared(v2, v6);
      v3 = 0LL;
    }
  }
  *(_BYTE *)(a1 + 13) |= 1u;
  result = MiLockWorkingSetExclusive(v2);
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
