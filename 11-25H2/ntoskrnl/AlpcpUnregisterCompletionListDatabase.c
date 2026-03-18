/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x140A0835C
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140A07CC8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A08300 (AlpcpFreeCompletionList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpUnregisterCompletionListDatabase(_QWORD *a1)
{
  __int64 *v2; // rax
  signed __int8 v3; // cf
  __int64 *v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = KeAbPreAcquire((__int64)&AlpcpCompletionListDatabase, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, v2, (__int64)&AlpcpCompletionListDatabase);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --dword_140F0EBE8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  return KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
}
