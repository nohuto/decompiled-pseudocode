/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1409FD780
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403C576C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403C58E4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExCleanupAutoExpandPushLock @ 0x14043A400 (ExCleanupAutoExpandPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 **v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = _InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 32);
    if ( v5 )
    {
      guard_dispatch_icall_no_overrides(v5, v1, v2, v3);
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    v6 = (__int64 **)(v4 + 16);
    if ( *v6 != (__int64 *)v6 )
    {
      FsRtlAcquireAutoExpandPushLockExclusive(v4);
      while ( 1 )
      {
        v7 = *v6;
        if ( *v6 == (__int64 *)v6 )
          break;
        v8 = *v7;
        if ( (__int64 **)v7[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
          __fastfail(3u);
        *v6 = (__int64 *)v8;
        *(_QWORD *)(v8 + 8) = v6;
        FsRtlReleaseAutoExpandPushLockExclusive((_DWORD *)v4);
        guard_dispatch_icall_no_overrides(v7, v9, v10, v11);
        FsRtlAcquireAutoExpandPushLockExclusive(v4);
      }
      FsRtlReleaseAutoExpandPushLockExclusive((_DWORD *)v4);
    }
    ExCleanupAutoExpandPushLock(v4);
    ExFreePoolWithTag((PVOID)v4, 0x63665346u);
  }
}
