/*
 * XREFs of ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800B6780
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180094250 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B6B10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTrackingTooltip@@QEAA@XZ @ 0x1800DC4BC (--1CTrackingTooltip@@QEAA@XZ.c)
 */

CTrackingTooltip *__fastcall CTrackingTooltip::`scalar deleting destructor'(CTrackingTooltip *this)
{
  const struct std::nothrow_t *v2; // rdx

  CTrackingTooltip::~CTrackingTooltip(this);
  CDisplayBlackCurtainAnimatedVisual::operator delete(this, v2);
  return this;
}
