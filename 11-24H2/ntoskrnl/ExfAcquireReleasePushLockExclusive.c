/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140418A5C
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x140418978 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x1404189B8 (EtwpLockUnlockBufferList.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14088DE30 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcReferenceBlobByHandle @ 0x1408938D0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408949C0 (AlpcpCaptureSecurityAttributeInternal.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PspThreadFromTicket @ 0x140912E70 (PspThreadFromTicket.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14093B8E4 (PsSynchronizeWithThreadInsertion.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 *     PfpRpCHashDeleteEntries @ 0x140A289F4 (PfpRpCHashDeleteEntries.c)
 *     ObpDeleteDirectoryObject @ 0x140A5D800 (ObpDeleteDirectoryObject.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A9290C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfReleasePushLockExclusive @ 0x14025E290 (ExfReleasePushLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax

  v2 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, (__int64)v2, (__int64)BugCheckParameter2);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
