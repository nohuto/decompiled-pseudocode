/*
 * XREFs of AlpcpInsertResourcePort @ 0x140893BB8
 * Callers:
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x14093EF54 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A874FC (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v4 = (_QWORD *)(a2 - 48);
  v5 = KeAbPreAcquire(a1 + 328, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v5, (__int64)v2);
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
