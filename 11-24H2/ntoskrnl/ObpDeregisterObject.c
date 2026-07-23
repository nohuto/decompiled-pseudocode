/*
 * XREFs of ObpDeregisterObject @ 0x1409C2898
 * Callers:
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     ObpDereferenceNamedObject @ 0x1403B0688 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403B09D8 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403B1A30 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14040F850 (IopFreeWaitCompletionPacket.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409C2460 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     EtwTraceObject @ 0x1407A9A04 (EtwTraceObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1)
{
  char v2; // al
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rbp
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rdi
  __int64 v8; // rdx
  _QWORD *i; // rdi
  __int64 v10; // rax

  if ( (xmmword_140FC6B50 & 0x80u) != 0LL )
    EtwTraceObject(4401, a1);
  v2 = *(_BYTE *)(a1 + 25);
  if ( (v2 & 1) != 0 && (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v5 = (char *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v5, (__int64)&ObpStackTraceLock);
    if ( v7 )
      v7[10] = 1;
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
