/*
 * XREFs of PsTerminateMinimalProcess @ 0x140778D58
 * Callers:
 *     SmTerminateStoreProcess @ 0x14060B0C8 (SmTerminateStoreProcess.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     PspTeardownPartition @ 0x14077AF00 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x14079F010 (VmTerminateMemoryProcess.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 */

__int64 __fastcall PsTerminateMinimalProcess(PRKPROCESS PROCESS, int a2)
{
  unsigned int v4; // edi
  signed __int32 v5; // r14d
  char v6; // bp
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
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
      return KiUnstackDetachProcess((__int64)&ApcState, 0, v8, v9);
    }
    else
    {
      return PspRundownSingleProcess(PROCESS);
    }
  }
  return result;
}
