/*
 * XREFs of AlpcpEnterFreeEventMessageLog @ 0x140AB4410
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     AlpcpLocateMessageLog @ 0x140AB44AC (AlpcpLocateMessageLog.c)
 */

__int64 __fastcall AlpcpEnterFreeEventMessageLog(__int64 a1)
{
  _QWORD *v2; // rax
  signed __int8 v3; // cf
  _QWORD *v4; // rbx
  __int64 MessageLog; // rax

  v2 = KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, (__int64)v2, (__int64)&AlpcpMessageLogLock);
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
