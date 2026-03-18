/*
 * XREFs of ObpDeregisterObject @ 0x1409D2A68
 * Callers:
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ObpDereferenceNamedObject @ 0x1403C1AC8 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403C1E18 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403C2E70 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041BD10 (IopFreeWaitCompletionPacket.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409D2630 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwTraceObject @ 0x1407A98C4 (EtwTraceObject.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1)
{
  char v2; // al
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  _QWORD *i; // rdi
  __int64 v10; // rax

  if ( (xmmword_140FC5B10 & 0x80u) != 0LL )
    EtwTraceObject(4401, a1);
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
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, (__int64)v5, (__int64)&ObpStackTraceLock);
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
