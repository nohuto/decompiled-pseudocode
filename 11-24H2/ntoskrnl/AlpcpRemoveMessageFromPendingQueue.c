/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x140892D70
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x140892910 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409EC9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A2413C (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = KeAbPreAcquire(v1 + 176, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 176), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 176), (__int64)v3, v1 + 176);
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
