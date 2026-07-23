/*
 * XREFs of IommupFreeSystemContext @ 0x140562834
 * Callers:
 *     IommuFreeLibraryContext @ 0x140561DB4 (IommuFreeLibraryContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall IommupFreeSystemContext(__int64 a1)
{
  char v2; // si
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx

  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = 0;
    v3 = (char *)KeAbPreAcquire((__int64)&IommupSystemContextListPushLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&IommupSystemContextListPushLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&IommupSystemContextListPushLock, v3, (__int64)&IommupSystemContextListPushLock);
    if ( v5 )
      v5[10] = 1;
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
