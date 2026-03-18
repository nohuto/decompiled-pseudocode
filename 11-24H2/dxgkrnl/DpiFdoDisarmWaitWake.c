/*
 * XREFs of DpiFdoDisarmWaitWake @ 0x14025428C
 * Callers:
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoDisarmWaitWake(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(v1 + 2727) = 0;
  _m_prefetchw((const void *)(v1 + 2752));
  if ( _InterlockedOr((volatile signed __int32 *)(v1 + 2752), 1u) == 4 )
  {
    IoCancelIrp(*(PIRP *)(v1 + 2760));
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 2752), 4, 5) == 7 )
      IofCompleteRequest(*(PIRP *)(v1 + 2760), 0);
  }
}
