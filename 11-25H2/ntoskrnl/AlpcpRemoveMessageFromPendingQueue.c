/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x1408AD160
 * Callers:
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1409CD560 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = KeAbPreAcquire(v1 + 176, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 176), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 176), v3, v1 + 176);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 176));
  result = KeAbPostRelease(v1 + 176);
  --*(_WORD *)(a1 - 30);
  return result;
}
