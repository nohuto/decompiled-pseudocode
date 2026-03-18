/*
 * XREFs of ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x140395328
 * Callers:
 *     ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x140359410 (-DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?NewTerminationTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@_K@Z @ 0x1403861A8 (-NewTerminationTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::DeleteTerminationTracker(
        struct _PAGED_LOOKASIDE_LIST *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  if ( a2 )
  {
    ExFreeToPagedLookasideList(this + 12, a2);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4935;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pTracker", 4935LL, 0LL, 0LL, 0LL, 0LL);
  }
}
