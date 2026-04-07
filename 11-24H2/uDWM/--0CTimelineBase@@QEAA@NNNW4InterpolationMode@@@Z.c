/*
 * XREFs of ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180015A64
 * Callers:
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800123F8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x180015A04 (--0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x180015C08 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18008B20C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x180094B48 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1800EC858 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 * Callees:
 *     ?RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z @ 0x180015AC4 (-RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180015AEC (-Restart@CTimelineBase@@QEAAXN@Z.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

__int64 __fastcall CTimelineBase::CTimelineBase(CBaseObject *a1, double a2, double a3, double a4, int a5)
{
  __int64 v5; // r8
  struct CTimelineBase *v6; // rcx
  __int64 v7; // r8

  CBaseObject::CBaseObject(a1);
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)v5 = &CTimelineBase::`vftable';
  *(_DWORD *)(v5 + 56) = a5;
  *(double *)(v5 + 32) = a3;
  *(double *)(v5 + 40) = a4;
  CTimelineBase::Restart((CTimelineBase *)v5, a2);
  CDesktopManager::RegisterTimeline(v6);
  return v7;
}
