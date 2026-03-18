/*
 * XREFs of PsTerminateMinimalProcess @ 0x140778C58
 * Callers:
 *     SmTerminateStoreProcess @ 0x14060CB08 (SmTerminateStoreProcess.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     PspTeardownPartition @ 0x14077B050 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x14079EF00 (VmTerminateMemoryProcess.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 */

__int64 __fastcall PsTerminateMinimalProcess(PRKPROCESS PROCESS, int a2)
{
  unsigned int v4; // edi
  signed __int32 v5; // r14d
  char v6; // bp
  __int64 result; // rax
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v4 = 8;
  PspLockProcessExclusive((__int64)PROCESS, (__int64)KeGetCurrentThread());
  if ( !LODWORD(PROCESS[1].CpuPartitionList.Blink) )
  {
    v4 = 33554440;
    if ( HIDWORD(PROCESS[2].AvailableCpuState) == 259 )
      HIDWORD(PROCESS[2].AvailableCpuState) = a2;
  }
  _m_prefetchw((char *)&PROCESS[1].DirectoryTableBase + 4);
  v5 = _InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, v4);
  _m_prefetchw((char *)&PROCESS[4].IdealProcessorAssignmentBlock + 4);
  v6 = _InterlockedOr((volatile signed __int32 *)&PROCESS[4].IdealProcessorAssignmentBlock + 1, 2u);
  result = PspUnlockProcessExclusive((__int64)PROCESS);
  if ( (v5 & 0x2000000) == 0 && (v4 & 0x2000000) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      PspExitLastThread(0LL, 0LL, PROCESS, 0LL, -1073741749);
      PspExitLastThread(1LL, 0LL, PROCESS, 0LL, -1073741749);
      PspExitLastThread(2LL, 0LL, PROCESS, 0LL, 0);
      PspExitLastThread(3LL, 0LL, PROCESS, 0LL, 0);
      return KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    else
    {
      return PspRundownSingleProcess(PROCESS);
    }
  }
  return result;
}
