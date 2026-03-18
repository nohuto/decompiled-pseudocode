/*
 * XREFs of ObpLockChildDirectory @ 0x1409B7950
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1406F8670 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

void __fastcall ObpLockChildDirectory(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int64 *v5; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rax

  v5 = (unsigned __int64 *)(a2 + 296);
  if ( a3 )
  {
    v9 = KeAbPreAcquire((__int64)v5, 0LL);
    v7 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, (__int64)v9, (__int64)v5);
    if ( v7 )
      goto LABEL_5;
  }
  else
  {
    v7 = KeAbPreAcquire((__int64)v5, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v5, 0, v7, (__int64)v5);
    if ( v7 )
LABEL_5:
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = *a1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*a1 + 296), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v8 + 296));
  KeAbPostRelease(v8 + 296);
  if ( *((_BYTE *)a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag((PVOID)*a1, 0x554C624Fu);
    *((_BYTE *)a1 + 22) = 0;
  }
  *((_BYTE *)a1 + 21) = a3;
  *a1 = a2;
}
