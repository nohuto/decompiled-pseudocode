/*
 * XREFs of ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x180012E40
 * Callers:
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18000E020 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180012DB0 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180012E64 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 * Callees:
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180011FE0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

void __fastcall CContactStationaryVisual::Stop(CTimelineBase **this)
{
  CContactStationaryVisual::StopTimer(this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
}
