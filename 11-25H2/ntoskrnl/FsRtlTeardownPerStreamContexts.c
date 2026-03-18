/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x14099F8D0
 * Callers:
 *     RawCleanupVcb @ 0x14099F844 (RawCleanupVcb.c)
 * Callees:
 *     FsRtlReleasePushLock @ 0x140205F3C (FsRtlReleasePushLock.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1402A2500 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1402A26A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  _FSRTL_PER_STREAM_CONTEXT *ReservedContext; // rcx
  _LIST_ENTRY *p_FilterContexts; // rdi
  unsigned __int8 v4; // al
  void *AePushLock; // rcx
  void (__stdcall **Flink)(PVOID); // rsi
  void (__stdcall *v7)(PVOID); // rax
  unsigned __int8 v8; // al
  _DWORD *v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  _DWORD *v12; // rcx

  if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) >= 0x50 )
  {
    ReservedContext = AdvancedHeader->ReservedContext;
    if ( ReservedContext )
    {
      guard_dispatch_icall_no_overrides(ReservedContext);
      AdvancedHeader->ReservedContext = 0LL;
    }
  }
  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    v4 = *((_BYTE *)AdvancedHeader + 7) >> 4;
    if ( v4 < 3u || (AePushLock = AdvancedHeader->AePushLock) == 0LL )
    {
      if ( !v4 )
        goto LABEL_24;
      goto LABEL_21;
    }
LABEL_7:
    FsRtlAcquireAutoExpandPushLockExclusive((__int64)AePushLock);
    while ( 1 )
    {
      Flink = (void (__stdcall **)(PVOID))p_FilterContexts->Flink;
      if ( p_FilterContexts->Flink == p_FilterContexts )
        break;
      v7 = *Flink;
      if ( (char *)Flink[1] != (char *)p_FilterContexts || *((void (__stdcall ***)(PVOID))v7 + 1) != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = (struct _LIST_ENTRY *)v7;
      *((_QWORD *)v7 + 1) = p_FilterContexts;
      v8 = *((_BYTE *)AdvancedHeader + 7) >> 4;
      if ( v8 >= 3u && (v9 = AdvancedHeader->AePushLock) != 0LL )
      {
        FsRtlReleaseAutoExpandPushLockExclusive(v9);
      }
      else if ( v8 )
      {
        FsRtlReleasePushLock((signed __int64 *)&AdvancedHeader->PushLock);
      }
      else
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      if ( Flink[4] == ExFreePool )
        ExFreePool(Flink);
      else
        guard_dispatch_icall_no_overrides(Flink);
      v10 = *((_BYTE *)AdvancedHeader + 7) >> 4;
      if ( v10 >= 3u )
      {
        AePushLock = AdvancedHeader->AePushLock;
        if ( AePushLock )
          goto LABEL_7;
      }
      if ( v10 )
LABEL_21:
        FsRtlAcquirePushLockExclusive((unsigned __int64 *)&AdvancedHeader->PushLock);
      else
LABEL_24:
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
    }
    v11 = *((_BYTE *)AdvancedHeader + 7) >> 4;
    if ( v11 >= 3u && (v12 = AdvancedHeader->AePushLock) != 0LL )
    {
      FsRtlReleaseAutoExpandPushLockExclusive(v12);
    }
    else if ( v11 )
    {
      FsRtlReleasePushLock((signed __int64 *)&AdvancedHeader->PushLock);
    }
    else
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
  }
}
