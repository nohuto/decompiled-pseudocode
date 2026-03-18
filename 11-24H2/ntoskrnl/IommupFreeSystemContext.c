/*
 * XREFs of IommupFreeSystemContext @ 0x140564C04
 * Callers:
 *     IommuFreeLibraryContext @ 0x140564184 (IommuFreeLibraryContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 */

void __fastcall IommupFreeSystemContext(__int64 a1)
{
  char v2; // si
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx

  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = 0;
    v3 = KeAbPreAcquire((__int64)&IommupSystemContextListPushLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupSystemContextListPushLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(
        &IommupSystemContextListPushLock,
        (__int64)v3,
        (__int64)&IommupSystemContextListPushLock);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    if ( *(_QWORD *)(a1 + 32) == a1 + 32 && *(_QWORD *)(a1 + 48) == a1 + 48 )
    {
      v6 = *(_QWORD *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = *(_QWORD **)(a1 + 8), *v7 != a1) )
        __fastfail(3u);
      *v7 = v6;
      v2 = 1;
      *(_QWORD *)(v6 + 8) = v7;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupSystemContextListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommupSystemContextListPushLock);
    KeAbPostRelease((ULONG_PTR)&IommupSystemContextListPushLock);
    if ( v2 )
      HalpMmAllocCtxFree(v8, a1);
  }
}
