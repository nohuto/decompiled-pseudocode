/*
 * XREFs of ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DC0D8
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

__int64 __fastcall CTouchPressHoldVisual::StartRightTap(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r9
  __int64 v4; // r9
  CBaseObject *v5; // rax
  int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // rax

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *((_DWORD *)this + 71) = 0;
  *(_QWORD *)((char *)this + 260) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize(this);
  v5 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v5 )
    v5 = (CBaseObject *)CTimeline<float>::CTimeline<float>(v5, 0.1500000059604645, 1.0, 0.0, 0);
  *((_QWORD *)this + 37) = v5;
  if ( !v5 )
  {
    v6 = -2147024882;
    v7 = 98;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v7, 0LL);
    CTouchPressHoldVisual::StopAllTimelines(this);
    v8 = *(_QWORD *)((char *)this + 268);
    *((_DWORD *)this + 72) = 0;
    *((_DWORD *)this + 71) = 0;
    *(_QWORD *)((char *)this + 276) = v8;
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
    return 0LL;
  }
  v6 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v6 < 0 )
  {
    v7 = 100;
    goto LABEL_8;
  }
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 2u);
  return 0LL;
}
