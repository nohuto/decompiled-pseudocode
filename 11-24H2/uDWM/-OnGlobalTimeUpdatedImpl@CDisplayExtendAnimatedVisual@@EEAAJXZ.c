/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x180084900
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF3F4 (-CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF6A4 (-ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(CTimelineBase **this)
{
  int v2; // edi
  int v3; // eax
  CTimelineBase *v4; // rcx
  int v5; // r9d
  unsigned int v6; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 460) )
  {
    v3 = CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay((CDisplayExtendAnimatedVisual *)this);
    v2 = v3;
    if ( v3 < 0 )
    {
      v5 = v3;
      v6 = 219;
      goto LABEL_8;
    }
    *((_BYTE *)this + 460) = 1;
  }
  v4 = this[54];
  if ( v4 )
  {
    if ( *((_BYTE *)v4 + 72) )
    {
      this[54] = 0LL;
      CTimelineBase::Release(v4);
      v2 = CDisplayExtendAnimatedVisual::ScheduleEntranceAnimations((CDisplayExtendAnimatedVisual *)this);
      v5 = v2;
      if ( v2 < 0 )
      {
        v6 = 227;
LABEL_8:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v6, 0LL);
        CDisplayAnimatedVisual::Stop(this, 0LL);
      }
    }
  }
  return (unsigned int)v2;
}
