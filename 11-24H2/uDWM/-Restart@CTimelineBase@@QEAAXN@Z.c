/*
 * XREFs of ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180015AEC
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180015798 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180015A64 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x18001DE54 (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180079720 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTimelineBase::Restart(CTimelineBase *this, double a2)
{
  *((_QWORD *)this + 6) = *((_QWORD *)this + 4);
  *((double *)this + 3) = a2;
  *((_WORD *)this + 36) = 256;
  CDesktopManager::SetTimelineDirty();
}
