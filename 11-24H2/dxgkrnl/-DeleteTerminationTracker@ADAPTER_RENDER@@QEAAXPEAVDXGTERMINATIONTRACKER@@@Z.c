/*
 * XREFs of ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14038B360
 * Callers:
 *     ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x14034ED20 (-DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?NewTerminationTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@_K@Z @ 0x140371594 (-NewTerminationTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
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
    WdLogGlobalForLineNumber = 4934;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pTracker", 4934LL, 0LL, 0LL, 0LL, 0LL);
  }
}
