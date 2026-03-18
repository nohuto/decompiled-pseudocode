/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x14041D30C
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x14041D224 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x14041D264 (EtwpLockUnlockBufferList.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     AlpcReferenceBlobByHandle @ 0x1408AF5B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408AFA20 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1408B0460 (AlpcpCaptureSecurityAttribute.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409BA844 (PsSynchronizeWithThreadInsertion.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1F018 (PfpRpCHashDeleteEntries.c)
 *     ObpDeleteDirectoryObject @ 0x140A5BEE0 (ObpDeleteDirectoryObject.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A8DE24 (EtwpUpdateLoggerSecurityDescriptor.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLockExclusive @ 0x1402BCAB0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (__int64)BugCheckParameter2);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
