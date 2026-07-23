/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x1408AE450
 * Callers:
 *     RawCleanupVcb @ 0x1408AE3C4 (RawCleanupVcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403B432C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403B44A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlReleasePushLock @ 0x1403B4708 (FsRtlReleasePushLock.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  __int64 v1; // rdx
  _FSRTL_PER_STREAM_CONTEXT *ReservedContext; // rcx
  _LIST_ENTRY *p_FilterContexts; // rdi
  unsigned __int8 v5; // al
  void *AePushLock; // rcx
  void (__stdcall **Flink)(PVOID); // rsi
  void (__stdcall *v8)(PVOID); // rax
  unsigned __int8 v9; // al
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  _DWORD *v14; // rcx

  if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) >= 0x50 )
  {
    ReservedContext = AdvancedHeader->ReservedContext;
    if ( ReservedContext )
    {
      guard_dispatch_icall_no_overrides(ReservedContext, v1);
      AdvancedHeader->ReservedContext = 0LL;
    }
  }
  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    v5 = *((_BYTE *)AdvancedHeader + 7) >> 4;
    if ( v5 < 3u || (AePushLock = AdvancedHeader->AePushLock) == 0LL )
    {
      if ( !v5 )
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
      v8 = *Flink;
      if ( (char *)Flink[1] != (char *)p_FilterContexts || *((void (__stdcall ***)(PVOID))v8 + 1) != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = (struct _LIST_ENTRY *)v8;
      *((_QWORD *)v8 + 1) = p_FilterContexts;
      v9 = *((_BYTE *)AdvancedHeader + 7) >> 4;
      if ( v9 >= 3u && (v10 = AdvancedHeader->AePushLock) != 0LL )
      {
        FsRtlReleaseAutoExpandPushLockExclusive(v10);
      }
      else if ( v9 )
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
        guard_dispatch_icall_no_overrides(Flink, v11);
      v12 = *((_BYTE *)AdvancedHeader + 7) >> 4;
      if ( v12 >= 3u )
      {
        AePushLock = AdvancedHeader->AePushLock;
        if ( AePushLock )
          goto LABEL_7;
      }
      if ( v12 )
LABEL_21:
        FsRtlAcquirePushLockExclusive((unsigned __int64 *)&AdvancedHeader->PushLock);
      else
LABEL_24:
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
    }
    v13 = *((_BYTE *)AdvancedHeader + 7) >> 4;
    if ( v13 >= 3u && (v14 = AdvancedHeader->AePushLock) != 0LL )
    {
      FsRtlReleaseAutoExpandPushLockExclusive(v14);
    }
    else if ( v13 )
    {
      FsRtlReleasePushLock((signed __int64 *)&AdvancedHeader->PushLock);
    }
    else
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
  }
}
