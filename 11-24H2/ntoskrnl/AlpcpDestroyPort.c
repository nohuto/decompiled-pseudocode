/*
 * XREFs of AlpcpDestroyPort @ 0x14088EB0C
 * Callers:
 *     AlpcpDeletePort @ 0x14088E9A0 (AlpcpDeletePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1)
{
  char *v2; // rax
  signed __int8 v3; // cf
  char *v4; // rdi
  __int64 *v5; // rdx
  __int64 **v6; // rax
  void *v7; // rdx

  if ( *a1 )
  {
    v2 = (char *)KeAbPreAcquire((__int64)&AlpcpPortListLock, 0LL);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
    v4 = v2;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v2, (__int64)&AlpcpPortListLock);
    if ( v4 )
      v4[10] = 1;
    v5 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = (__int64)v6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
    KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v7 = (void *)a1[31];
    if ( v7 )
      ExFreeToNPagedLookasideList(&AlpcpNPLookasides, v7);
  }
}
