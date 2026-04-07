/*
 * XREFs of ??0CTrackingTooltip@@QEAA@XZ @ 0x1800DC4AC
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180094250 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B6B10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     <none>
 */

CTrackingTooltip *__fastcall CTrackingTooltip::CTrackingTooltip(CTrackingTooltip *this)
{
  *(_BYTE *)this = 0;
  return this;
}
