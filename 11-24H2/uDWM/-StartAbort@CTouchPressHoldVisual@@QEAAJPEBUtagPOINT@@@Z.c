/*
 * XREFs of ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DBE14
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

__int64 __fastcall CTouchPressHoldVisual::StartAbort(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r9
  __int64 v4; // r9
  CBaseObject *v5; // rax
  int v6; // eax
  unsigned int v7; // r9d
  CBaseObject *v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm1

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
    v7 = 127;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v7, 0LL);
    CTouchPressHoldVisual::StopAllTimelines(this);
    v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 67));
    v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 68));
    *((_DWORD *)this + 72) = 0;
    *((_DWORD *)this + 69) = (int)(float)(_mm_cvtepi32_ps(v9).m128_f32[0] * 0.25);
    *((_DWORD *)this + 70) = (int)(float)(_mm_cvtepi32_ps(v10).m128_f32[0] * 0.25);
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
    return 0LL;
  }
  v8 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v8 )
    v8 = (CBaseObject *)CTimeline<float>::CTimeline<float>(v8, 0.1500000059604645, 1.0, 0.25, 0);
  *((_QWORD *)this + 38) = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
    v7 = 129;
    goto LABEL_12;
  }
  v6 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v6 < 0 )
  {
    v7 = 131;
    goto LABEL_12;
  }
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 3u);
  return 0LL;
}
