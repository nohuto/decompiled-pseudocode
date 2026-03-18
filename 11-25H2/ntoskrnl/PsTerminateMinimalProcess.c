/*
 * XREFs of PsTerminateMinimalProcess @ 0x140768FA8
 * Callers:
 *     SmTerminateStoreProcess @ 0x140600ADC (SmTerminateStoreProcess.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     PspTeardownPartition @ 0x14076B4B0 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x14078FB40 (VmTerminateMemoryProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 */

__int64 __fastcall PsTerminateMinimalProcess(PRKPROCESS PROCESS, int a2)
{
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v6; // r14d
  char v7; // bp
  __int64 result; // rax
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v4 = 8;
  CurrentThread = KeGetCurrentThread();
  PspLockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread);
  if ( !LODWORD(PROCESS[1].CpuPartitionList.Blink) )
  {
    v4 = 33554440;
    if ( HIDWORD(PROCESS[2].AvailableCpuState) == 259 )
      HIDWORD(PROCESS[2].AvailableCpuState) = a2;
  }
  _m_prefetchw((char *)&PROCESS[1].DirectoryTableBase + 4);
  v6 = _InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, v4);
  _m_prefetchw((char *)&PROCESS[4].IdealProcessorAssignmentBlock + 4);
  v7 = _InterlockedOr((volatile signed __int32 *)&PROCESS[4].IdealProcessorAssignmentBlock + 1, 2u);
  result = PspUnlockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread);
  if ( (v6 & 0x2000000) == 0 && (v4 & 0x2000000) != 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      PspExitLastThread(0LL, 0LL, PROCESS, 0LL, -1073741749);
      PspExitLastThread(1LL, 0LL, PROCESS, 0LL, -1073741749);
      PspExitLastThread(2LL, 0LL, PROCESS, 0LL, 0);
      PspExitLastThread(3LL, 0LL, PROCESS, 0LL, 0);
      return KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    }
    else
    {
      return PspRundownSingleProcess(PROCESS);
    }
  }
  return result;
}
