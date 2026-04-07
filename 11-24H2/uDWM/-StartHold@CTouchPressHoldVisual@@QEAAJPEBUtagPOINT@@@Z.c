/*
 * XREFs of ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DBF7C
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x180077AB8 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800DBDB0 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800DC208 (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800DC3D0 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartHold(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  _QWORD *v3; // r9
  CBaseObject *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  unsigned int v7; // r9d
  CBaseObject *v8; // rax
  _QWORD *v9; // rax

  CTouchPressHoldVisual::StopAllTimelines(this);
  *(_QWORD *)((char *)this + 260) = *v3;
  CTouchPressHoldVisual::_UpdateFinalSize(this);
  *(_QWORD *)((char *)this + 276) = *(_QWORD *)((char *)this + 268);
  *((_DWORD *)this + 71) = 0;
  v4 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v4 )
    v5 = CTimeline<float>::CTimeline<float>(v4, 0.1500000059604645, 0.0, 1.0, 0);
  else
    v5 = 0LL;
  *((_QWORD *)this + 37) = v5;
  if ( !v5 )
  {
    v6 = -2147024882;
    v7 = 68;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v7, 0LL);
    CTouchPressHoldVisual::StopAllTimelines(this);
    *(_QWORD *)((char *)this + 276) = *(_QWORD *)((char *)this + 268);
    *((_DWORD *)this + 72) = 1065353216;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
    return 0LL;
  }
  v8 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v8 )
    v9 = CTimeline<float>::CTimeline<float>(v8, 0.1500000059604645, 0.25, 1.0, 0);
  else
    v9 = 0LL;
  *((_QWORD *)this + 38) = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
    v7 = 70;
    goto LABEL_14;
  }
  v6 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v6 < 0 )
  {
    v7 = 72;
    goto LABEL_14;
  }
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 1u);
  return 0LL;
}
