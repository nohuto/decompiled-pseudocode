/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x140A2413C
 * Callers:
 *     AlpcpReceiveMessage @ 0x140899160 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140892D70 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpExposeContextAttribute @ 0x1409B76E0 (AlpcpExposeContextAttribute.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x140A24230 (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140A562D4 (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  signed __int64 *v3; // rdi
  _QWORD *v7; // rbp
  int v8; // eax

  v3 = (signed __int64 *)(a1 + 352);
  *a3 = 0LL;
  a3[1] = 0LL;
  v7 = KeAbPreAcquire(a1 + 352, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v7, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = *(_DWORD *)(a1 + 416) & 0x40;
  if ( a2[8] == a1 )
  {
    if ( v8 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      AlpcpInsertMessageCanceledQueue(a1, a2);
    }
LABEL_10:
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    AlpcpExposeContextAttribute(a1, (__int64)a2, (__int64)a3, 0LL);
    return 3221225507LL;
  }
  if ( !v8 )
  {
    if ( a2[2] )
      AlpcpRemoveMessageFromPendingQueue((__int64)a2);
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_10;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return 3221227264LL;
}
