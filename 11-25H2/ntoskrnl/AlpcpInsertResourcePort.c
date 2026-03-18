/*
 * XREFs of AlpcpInsertResourcePort @ 0x1408B4A38
 * Callers:
 *     AlpcpCreateSection @ 0x1408AE108 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A82DE8 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD *v4; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rdi
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v4 = (_QWORD *)(a2 - 48);
  v5 = KeAbPreAcquire(a1 + 328, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_QWORD **)(a1 + 344);
  if ( *v7 != a1 + 336 )
    __fastfail(3u);
  *v4 = a1 + 336;
  v4[1] = v7;
  *v7 = v4;
  *(_QWORD *)(a1 + 344) = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
