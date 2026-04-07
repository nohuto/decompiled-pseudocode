/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x180084D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x180089828 (-CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ScheduleEntranceAnimations@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800C19D8 (-ScheduleEntranceAnimations@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::OnGlobalTimeUpdatedImpl(CTimelineBase **this)
{
  int v2; // edi
  int v3; // eax
  int v4; // r9d
  unsigned int v5; // eax
  CTimelineBase *v6; // rcx

  v2 = 0;
  if ( !this[49] )
  {
    v3 = CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay((CDisplaySecondaryOnlyAnimatedVisual *)this);
    v2 = v3;
    if ( v3 < 0 )
    {
      v4 = v3;
      v5 = 134;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v5, 0LL);
      CDisplayAnimatedVisual::Stop(this, 0LL);
      return (unsigned int)v2;
    }
  }
  v6 = this[50];
  if ( v6 )
  {
    if ( *((_BYTE *)v6 + 72) )
    {
      this[50] = 0LL;
      CTimelineBase::Release(v6);
      v2 = CDisplaySecondaryOnlyAnimatedVisual::ScheduleEntranceAnimations((CDisplaySecondaryOnlyAnimatedVisual *)this);
      v4 = v2;
      if ( v2 < 0 )
      {
        v5 = 141;
        goto LABEL_8;
      }
    }
  }
  return (unsigned int)v2;
}
