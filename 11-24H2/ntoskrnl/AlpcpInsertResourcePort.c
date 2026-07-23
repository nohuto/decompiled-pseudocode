/*
 * XREFs of AlpcpInsertResourcePort @ 0x1408966E0
 * Callers:
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A839EC (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD *v4; // rsi
  char *v5; // rax
  char *v6; // rdi
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v4 = (_QWORD *)(a2 - 48);
  v5 = (char *)KeAbPreAcquire(a1 + 328, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    v6[10] = 1;
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
