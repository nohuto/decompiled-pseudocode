/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1409FF0A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1402A2500 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1402A26A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExCleanupAutoExpandPushLock @ 0x14036D350 (ExCleanupAutoExpandPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 **v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rax

  v1 = _InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 32);
    if ( v2 )
    {
      guard_dispatch_icall_no_overrides(v2);
      *(_QWORD *)(v1 + 32) = 0LL;
    }
    v3 = (__int64 **)(v1 + 16);
    if ( *v3 != (__int64 *)v3 )
    {
      FsRtlAcquireAutoExpandPushLockExclusive(v1);
      while ( 1 )
      {
        v4 = *v3;
        if ( *v3 == (__int64 *)v3 )
          break;
        v5 = *v4;
        if ( (__int64 **)v4[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
          __fastfail(3u);
        *v3 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v3;
        FsRtlReleaseAutoExpandPushLockExclusive((_DWORD *)v1);
        guard_dispatch_icall_no_overrides(v4);
        FsRtlAcquireAutoExpandPushLockExclusive(v1);
      }
      FsRtlReleaseAutoExpandPushLockExclusive((_DWORD *)v1);
    }
    ExCleanupAutoExpandPushLock(v1);
    ExFreePoolWithTag((PVOID)v1, 0x63665346u);
  }
}
