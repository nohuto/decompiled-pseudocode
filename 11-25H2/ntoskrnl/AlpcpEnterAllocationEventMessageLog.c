/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x1408B09DC
 * Callers:
 *     AlpcpAllocateMessage @ 0x1408B07D0 (AlpcpAllocateMessage.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14098D31C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcpAllocateMessageLog @ 0x1406E9EF4 (AlpcpAllocateMessageLog.c)
 */

__int64 __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1)
{
  __int64 *v2; // rax
  signed __int8 v3; // cf
  __int64 *v4; // rbx
  __int64 MessageLog; // rax
  __int64 *v6; // rcx
  char *v7; // rdx
  char *v8; // rcx
  char **v9; // rax

  v2 = KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (__int64)&AlpcpMessageLogLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  MessageLog = AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *(_QWORD *)(MessageLog + 32) = a1;
    *(_DWORD *)(MessageLog + 40) = *(_DWORD *)(a1 + 264);
    *(_DWORD *)(MessageLog + 44) = 1;
    v6 = (__int64 *)qword_140F0EB88;
    if ( *(__int64 **)qword_140F0EB88 != &AlpcpMessageLogListHead
      || (*(_QWORD *)(MessageLog + 8) = qword_140F0EB88,
          *(_QWORD *)MessageLog = &AlpcpMessageLogListHead,
          v7 = (char *)(MessageLog + 16),
          *v6 = MessageLog,
          qword_140F0EB88 = MessageLog,
          v8 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(MessageLog + 40) >> 2) & 0x3FF),
          v9 = (char **)*((_QWORD *)v8 + 1),
          *v9 != v8) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v7 = v8;
    *((_QWORD *)v7 + 1) = v9;
    *v9 = v7;
    *((_QWORD *)v8 + 1) = v7;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
