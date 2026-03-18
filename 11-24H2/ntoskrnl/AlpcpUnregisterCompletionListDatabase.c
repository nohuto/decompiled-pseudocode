/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x140A0B2E8
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A0B28C (AlpcpFreeCompletionList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall AlpcpUnregisterCompletionListDatabase(_QWORD *a1)
{
  _QWORD *v2; // rax
  signed __int8 v3; // cf
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = KeAbPreAcquire((__int64)&AlpcpCompletionListDatabase, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, (__int64)v2, (__int64)&AlpcpCompletionListDatabase);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --dword_140F0F2C8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  return KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
}
