/*
 * XREFs of AlpcpDestroyPort @ 0x14098BB5C
 * Callers:
 *     AlpcpDeletePort @ 0x14098B9F0 (AlpcpDeletePort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1)
{
  __int64 *v2; // rax
  signed __int8 v3; // cf
  __int64 *v4; // rdi
  __int64 *v5; // rdx
  __int64 **v6; // rax
  void *v7; // rdx

  if ( *a1 )
  {
    v2 = KeAbPreAcquire((__int64)&AlpcpPortListLock, 0LL);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
    v4 = v2;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v2, (__int64)&AlpcpPortListLock);
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
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
