/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x14098B1CC
 * Callers:
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1409CD560 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  __int64 *v5; // rax
  __int64 *v6; // rdi

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = KeAbPreAcquire(a1 + 136, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a2 + 80) = a1 + 384;
  **(_QWORD **)(a1 + 392) = a2 + 80;
  *(_QWORD *)(a1 + 392) = a2 + 80;
  *(_DWORD *)(a2 + 40) |= 0x20000u;
  ++*(_DWORD *)(a1 + 464);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
