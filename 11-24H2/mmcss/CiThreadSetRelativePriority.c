/*
 * XREFs of CiThreadSetRelativePriority @ 0x14000EBB0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x14000DEF0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSchedulerCommitPriority @ 0x140001790 (CiSchedulerCommitPriority.c)
 *     CiThreadUpdatePriorities @ 0x14000F370 (CiThreadUpdatePriorities.c)
 *     CiSystemAcquirePushLock @ 0x14000F6C0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiThreadSetRelativePriority(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  PEPROCESS ThreadProcess; // rdi
  __int64 v7; // rcx

  v4 = -1073741811;
  if ( (unsigned __int8)(a2 + 2) <= 4u )
  {
    v5 = *(_QWORD *)(a1 + 64);
    CiSystemAcquirePushLock(a1 + 16);
    if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
    {
      ThreadProcess = PsGetThreadProcess(*(PETHREAD *)(a1 + 96));
      if ( ThreadProcess == (PEPROCESS)PsGetCurrentProcess() )
      {
        CiThreadUpdatePriorities(a1, v5, a2);
        CiSchedulerCommitPriority(v7);
        v4 = 0;
      }
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
  }
  return v4;
}
