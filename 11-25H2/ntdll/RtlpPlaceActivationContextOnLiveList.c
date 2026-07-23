/*
 * XREFs of RtlpPlaceActivationContextOnLiveList @ 0x18011E8E4
 * Callers:
 *     RtlCreateActivationContext @ 0x1800E1EF0 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlAcquirePebLock @ 0x1800E1E40 (RtlAcquirePebLock.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011E940 (RtlpEnsureLiveDeadListsInitialized.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __fastcall RtlpPlaceActivationContextOnLiveList(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  RtlpEnsureLiveDeadListsInitialized();
  RtlAcquirePebLock();
  v2 = (_QWORD *)(a1 + 8);
  v3 = g_SxsLiveActivationContexts;
  if ( *(__int64 **)(g_SxsLiveActivationContexts + 8) != &g_SxsLiveActivationContexts )
    __fastfail(3u);
  *v2 = g_SxsLiveActivationContexts;
  *(_QWORD *)(a1 + 16) = &g_SxsLiveActivationContexts;
  *(_QWORD *)(v3 + 8) = v2;
  g_SxsLiveActivationContexts = a1 + 8;
  return RtlReleasePebLock();
}
