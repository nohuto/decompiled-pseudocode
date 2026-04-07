/*
 * XREFs of ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800DC290
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x180077AB8 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800DBDB0 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800DC270 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateTransition(CTouchPressHoldVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  float v5; // xmm2_4
  float v6; // xmm1_4
  CTimelineBase *v7; // rcx

  v2 = *((_QWORD *)this + 37);
  if ( v2 )
  {
    *((float *)this + 72) = *(double *)(v2 + 48);
    if ( *(_BYTE *)(v2 + 72) )
    {
      CTimelineBase::Release((CTimelineBase *)v2);
      *((_QWORD *)this + 37) = 0LL;
    }
  }
  v3 = *((_QWORD *)this + 39);
  if ( v3 )
  {
    *((_DWORD *)this + 71) = (int)(float)*(double *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 72) )
    {
      CTimelineBase::Release((CTimelineBase *)v3);
      *((_QWORD *)this + 39) = 0LL;
    }
  }
  v4 = *((_QWORD *)this + 38);
  if ( v4 )
  {
    v5 = *(double *)(v4 + 48);
    v6 = (float)*((int *)this + 68) * v5;
    *((_DWORD *)this + 69) = (int)(float)((float)*((int *)this + 67) * v5);
    *((_DWORD *)this + 70) = (int)v6;
    if ( *(_BYTE *)(v4 + 72) )
    {
      CTimelineBase::Release((CTimelineBase *)v4);
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  v7 = (CTimelineBase *)*((_QWORD *)this + 40);
  if ( !v7 )
    goto LABEL_13;
  if ( *((_BYTE *)v7 + 72) )
  {
    *((_DWORD *)this + 72) = 0;
    CTimelineBase::Release(v7);
    *((_QWORD *)this + 40) = 0LL;
LABEL_13:
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
  }
  if ( !*((_QWORD *)this + 37) && !*((_QWORD *)this + 38) && !*((_QWORD *)this + 39) && !*((_QWORD *)this + 40) )
  {
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
    CTouchPressHoldVisual::StopTimer((CTimelineBase **)this);
  }
  return 0LL;
}
