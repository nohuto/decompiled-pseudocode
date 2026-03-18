/*
 * XREFs of ObpLockChildDirectory @ 0x1409CD9D0
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x140AC15D4 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall ObpLockChildDirectory(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int64 *v3; // r14
  __int64 *v7; // rdi
  __int64 v8; // rdi
  __int64 *v9; // rax

  v3 = (unsigned __int64 *)(a2 + 296);
  if ( a3 )
  {
    v9 = KeAbPreAcquire((__int64)v3, 0LL);
    v7 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v9, (__int64)v3);
  }
  else
  {
    v7 = KeAbPreAcquire((__int64)v3, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v3, 0, v7, (unsigned __int64)v3);
  }
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
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
