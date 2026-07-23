/*
 * XREFs of RtlpMoveActCtxToFreeList @ 0x1800E1D40
 * Callers:
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlAcquirePebLock @ 0x1800E1E40 (RtlAcquirePebLock.c)
 *     RtlReleasePebLock @ 0x1800E1E60 (RtlReleasePebLock.c)
 *     RtlpFreeActivationContext @ 0x1800E1E78 (RtlpFreeActivationContext.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011E940 (RtlpEnsureLiveDeadListsInitialized.c)
 */

NTSTATUS __fastcall RtlpMoveActCtxToFreeList(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  unsigned int i; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rcx

  RtlpEnsureLiveDeadListsInitialized();
  RtlAcquirePebLock();
  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || (_QWORD *)*v4 != v2 )
    goto LABEL_14;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  for ( i = g_SxsCurrentDeadActivationContexts;
        i && i >= g_SxsMaxDeadActivationContexts;
        i = --g_SxsCurrentDeadActivationContexts )
  {
    v6 = g_SxsFreeActivationContexts;
    v7 = *(_QWORD *)g_SxsFreeActivationContexts;
    if ( *(__int64 **)(g_SxsFreeActivationContexts + 8) != &g_SxsFreeActivationContexts
      || *(_QWORD *)(v7 + 8) != g_SxsFreeActivationContexts )
    {
      goto LABEL_14;
    }
    g_SxsFreeActivationContexts = *(_QWORD *)g_SxsFreeActivationContexts;
    *(_QWORD *)(v7 + 8) = &g_SxsFreeActivationContexts;
    RtlpFreeActivationContext(v6 - 8);
  }
  if ( !g_SxsMaxDeadActivationContexts )
  {
    RtlpFreeActivationContext(a1);
    return RtlReleasePebLock();
  }
  v8 = (_QWORD *)qword_1801CFE10;
  if ( *(__int64 **)qword_1801CFE10 != &g_SxsFreeActivationContexts )
LABEL_14:
    __fastfail(3u);
  *v2 = &g_SxsFreeActivationContexts;
  *(_QWORD *)(a1 + 16) = v8;
  *v8 = v2;
  qword_1801CFE10 = a1 + 8;
  g_SxsCurrentDeadActivationContexts = i + 1;
  return RtlReleasePebLock();
}
