/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BE930
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BE9A8 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  unsigned int v2; // ebx
  CTimelineBase *v3; // rcx
  int v4; // eax

  v2 = 0;
  v3 = (CTimelineBase *)*((_QWORD *)this + 57);
  if ( v3 )
  {
    if ( *((_BYTE *)v3 + 72) )
    {
      *((_QWORD *)this + 57) = 0LL;
      CTimelineBase::Release(v3);
      v4 = CDisplayDuplicateToExtendAnimatedVisual::ScheduleEntranceAnimations(this);
      v2 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x130u, 0LL);
        CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      }
    }
  }
  return v2;
}
