/*
 * XREFs of ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800120E0
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18000E380 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x1800120B0 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180095048 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x18001213C (-StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180012170 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800121B8 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180012240 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::StopTimer(CDirectTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  CDirectTouchVisual::StopDownTimeline(this);
  CDirectTouchVisual::StopFadeTimeline(this);
  CDirectTouchVisual::StopDownDelayTimeline(this);
  v2 = CTouchVisual::StopTimer(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x179u, 0LL);
  return v3;
}
