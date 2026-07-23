/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1409F64C0
 * Callers:
 *     <none>
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402B9C50 (ExCleanupAutoExpandPushLock.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403B432C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403B44A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 **v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = _InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 32);
    if ( v3 )
    {
      guard_dispatch_icall_no_overrides(v3, v1);
      *(_QWORD *)(v2 + 32) = 0LL;
    }
    v4 = (__int64 **)(v2 + 16);
    if ( *v4 != (__int64 *)v4 )
    {
      FsRtlAcquireAutoExpandPushLockExclusive(v2);
      while ( 1 )
      {
        v5 = *v4;
        if ( *v4 == (__int64 *)v4 )
          break;
        v6 = *v5;
        if ( (__int64 **)v5[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
          __fastfail(3u);
        *v4 = (__int64 *)v6;
        *(_QWORD *)(v6 + 8) = v4;
        FsRtlReleaseAutoExpandPushLockExclusive((_DWORD *)v2);
        guard_dispatch_icall_no_overrides(v5, v7);
        FsRtlAcquireAutoExpandPushLockExclusive(v2);
      }
      FsRtlReleaseAutoExpandPushLockExclusive((_DWORD *)v2);
    }
    ExCleanupAutoExpandPushLock(v2);
    ExFreePoolWithTag((PVOID)v2, 0x63665346u);
  }
}
