/*
 * XREFs of AlpcpEnterStateChangeEventMessageLog @ 0x1408A161C
 * Callers:
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     AlpcpAllocateSnapshotMessageLog @ 0x140740A50 (AlpcpAllocateSnapshotMessageLog.c)
 *     AlpcpLocateMessageLog @ 0x140AAF41C (AlpcpLocateMessageLog.c)
 */

__int64 __fastcall AlpcpEnterStateChangeEventMessageLog(__int64 a1)
{
  char *v2; // rax
  signed __int8 v3; // cf
  char *v4; // rdi
  __int64 MessageLog; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // r8
  __int64 SnapshotMessageLog; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpMessageLogLock, v2, (__int64)&AlpcpMessageLogLock);
  if ( v4 )
    v4[10] = 1;
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 264));
  v6 = MessageLog;
  if ( MessageLog )
  {
    v7 = (_QWORD *)(MessageLog + 48);
    if ( (_QWORD *)*v7 == v7
      || (v8 = *(_QWORD *)(MessageLog + 56)) == 0
      || *(_DWORD *)(v8 + 16) != *(_DWORD *)(a1 + 40)
      || *(_QWORD *)(v8 + 24) != *(_QWORD *)(a1 + 24)
      || *(_QWORD *)(v8 + 32) != *(_QWORD *)(a1 + 16)
      || *(_QWORD *)(v8 + 48) != *(_QWORD *)(a1 + 32)
      || *(_QWORD *)(v8 + 40) != *(_QWORD *)(a1 + 64)
      || *(_QWORD *)(v8 + 56) != *(_QWORD *)(a1 + 104)
      || *(_QWORD *)(v8 + 64) != *(_QWORD *)(a1 + 112)
      || memcmp((const void *)(v8 + 80), (const void *)(a1 + 240), 0x28uLL) )
    {
      SnapshotMessageLog = AlpcpAllocateSnapshotMessageLog();
      v10 = SnapshotMessageLog;
      if ( !*(_DWORD *)(v6 + 44) )
      {
        v11 = (__int64 *)qword_140F0F558;
        if ( *(__int64 **)qword_140F0F558 == &AlpcpFreeMessageSnapshotListHead )
        {
          *(_QWORD *)v10 = &AlpcpFreeMessageSnapshotListHead;
          *(_QWORD *)(v10 + 8) = v11;
          *v11 = v10;
          qword_140F0F558 = v10;
          goto LABEL_22;
        }
LABEL_20:
        __fastfail(3u);
      }
      *(_DWORD *)(SnapshotMessageLog + 16) = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(SnapshotMessageLog + 24) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(SnapshotMessageLog + 32) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(SnapshotMessageLog + 40) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(SnapshotMessageLog + 48) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(SnapshotMessageLog + 56) = *(_QWORD *)(a1 + 104);
      v12 = *(_QWORD *)(a1 + 112);
      *(_DWORD *)(v10 + 20) = 0;
      *(_QWORD *)(v10 + 64) = v12;
      *(_QWORD *)(v10 + 72) = retaddr;
      *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 240);
      *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 256);
      *(_QWORD *)(v10 + 112) = *(_QWORD *)(a1 + 272);
      v13 = (__int64 *)v7[1];
      if ( (_QWORD *)*v13 != v7 )
        goto LABEL_20;
      *(_QWORD *)v10 = v7;
      *(_QWORD *)(v10 + 8) = v13;
      *v13 = v10;
      v7[1] = v10;
    }
  }
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
