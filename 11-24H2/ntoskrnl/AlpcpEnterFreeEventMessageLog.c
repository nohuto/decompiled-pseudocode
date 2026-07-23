/*
 * XREFs of AlpcpEnterFreeEventMessageLog @ 0x140AAF380
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpLocateMessageLog @ 0x140AAF41C (AlpcpLocateMessageLog.c)
 */

__int64 __fastcall AlpcpEnterFreeEventMessageLog(__int64 a1)
{
  char *v2; // rax
  signed __int8 v3; // cf
  char *v4; // rbx
  __int64 MessageLog; // rax

  v2 = (char *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (__int64)&AlpcpMessageLogLock);
  if ( v4 )
    v4[10] = 1;
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
