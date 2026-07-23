/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x14040880C
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x140408728 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x140408768 (EtwpLockUnlockBufferList.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14089CE60 (AlpcpCaptureSecurityAttributeInternal.c)
 *     PspThreadFromTicket @ 0x1408EA5C0 (PspThreadFromTicket.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1409C12C0 (AlpcpCaptureSecurityAttribute.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140A1A6F4 (PsSynchronizeWithThreadInsertion.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1D3B8 (PfpRpCHashDeleteEntries.c)
 *     ObpDeleteDirectoryObject @ 0x140A55C20 (ObpDeleteDirectoryObject.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A8F0BC (EtwpUpdateLoggerSecurityDescriptor.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfReleasePushLockExclusive @ 0x14028E8A0 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  char *v2; // rdi
  __int64 result; // rax

  v2 = (char *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (__int64)BugCheckParameter2);
  if ( v2 )
    v2[10] = 1;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
