/*
 * XREFs of ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1402ECC9C
 * Callers:
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1401C6440 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1402EC03C (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::TimeInterval::Start(LARGE_INTEGER *this)
{
  if ( !LOBYTE(this->LowPart) )
  {
    this[1] = KeQueryPerformanceCounter(0LL);
    LOBYTE(this->LowPart) = 1;
  }
}
