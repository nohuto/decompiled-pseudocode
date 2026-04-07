/*
 * XREFs of ??1CLivePreviewTimeline@@UEAA@XZ @ 0x18007C9AC
 * Callers:
 *     ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x18007C960 (--_ECLivePreviewTimeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLivePreviewTimeline::~CLivePreviewTimeline(CLivePreviewTimeline *this)
{
  *(_QWORD *)this = &CLivePreviewTimeline::`vftable';
  CTimelineBase::~CTimelineBase(this);
}
