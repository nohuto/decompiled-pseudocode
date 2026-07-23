/*
 * XREFs of ObpLockChildDirectory @ 0x1409AF090
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall ObpLockChildDirectory(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int64 *v5; // rdi
  char *v7; // rsi
  __int64 v8; // rdi
  char *v9; // rax

  v5 = (unsigned __int64 *)(a2 + 296);
  if ( a3 )
  {
    v9 = (char *)KeAbPreAcquire((__int64)v5, 0LL);
    v7 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
    if ( v7 )
      goto LABEL_5;
  }
  else
  {
    v7 = (char *)KeAbPreAcquire((__int64)v5, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v5, 0, v7, (__int64)v5);
    if ( v7 )
LABEL_5:
      v7[10] = 1;
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
