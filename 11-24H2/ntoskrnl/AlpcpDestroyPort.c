/*
 * XREFs of AlpcpDestroyPort @ 0x14088BB1C
 * Callers:
 *     AlpcpDeletePort @ 0x14088B9B0 (AlpcpDeletePort.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1)
{
  _QWORD *v2; // rax
  signed __int8 v3; // cf
  _QWORD *v4; // rdi
  __int64 *v5; // rdx
  __int64 **v6; // rax
  void *v7; // rdx

  if ( *a1 )
  {
    v2 = KeAbPreAcquire((__int64)&AlpcpPortListLock, 0LL);
    v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
    v4 = v2;
    if ( v3 )
      ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, (__int64)v2, (__int64)&AlpcpPortListLock);
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
