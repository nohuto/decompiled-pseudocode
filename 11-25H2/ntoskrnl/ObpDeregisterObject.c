/*
 * XREFs of ObpDeregisterObject @ 0x1409CF758
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     PfSnGetFileInformation @ 0x140302AF0 (PfSnGetFileInformation.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     ObpDereferenceNamedObject @ 0x140370914 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x140371CB0 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041E430 (IopFreeWaitCompletionPacket.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409CF320 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwTraceObject @ 0x14079A4F4 (EtwTraceObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1)
{
  char v2; // al
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rbp
  __int64 *v5; // rax
  signed __int8 v6; // cf
  __int64 *v7; // rdi
  __int64 v8; // rdx
  _QWORD *i; // rdi
  __int64 v10; // rax

  if ( (xmmword_140FC5B10 & 0x80u) != 0LL )
    EtwTraceObject(0x1131u, a1);
  v2 = *(_BYTE *)(a1 + 25);
  if ( (v2 & 1) != 0 && (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v5 = KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v5, (__int64)&ObpStackTraceLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( (ObpTraceFlags & 0x73) != 0 )
    {
      v8 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      for ( i = (_QWORD *)*((_QWORD *)ObpObjectTable + v8); i; i = (_QWORD *)i[1] )
      {
        if ( *i == a1 )
        {
          v10 = i[1];
          if ( v4 )
            v4[1] = v10;
          else
            *((_QWORD *)ObpObjectTable + v8) = v10;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
          KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
          KeLeaveGuardedRegion();
          ExFreePoolWithTag(i, 0x7452624Fu);
          return;
        }
        v4 = i;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KeLeaveGuardedRegion();
  }
}
