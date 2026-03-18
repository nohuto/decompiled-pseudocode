/*
 * XREFs of AlpcpEnterFreeEventMessageLog @ 0x140AAF420
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcpLocateMessageLog @ 0x140AAF4BC (AlpcpLocateMessageLog.c)
 */

__int64 __fastcall AlpcpEnterFreeEventMessageLog(__int64 a1)
{
  __int64 *v2; // rax
  signed __int8 v3; // cf
  __int64 *v4; // rbx
  __int64 MessageLog; // rax

  v2 = KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (__int64)&AlpcpMessageLogLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 264));
  if ( MessageLog )
  {
    *(_DWORD *)(MessageLog + 44) = 0;
    *(_QWORD *)(MessageLog + 32) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
