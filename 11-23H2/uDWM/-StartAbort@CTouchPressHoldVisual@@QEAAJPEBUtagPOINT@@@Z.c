/*
 * XREFs of ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E87F4
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B032C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800279CC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006EA9E (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800E8790 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800E8CAC (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800E8D5C (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800E9538 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::StartAbort(CTouchPressHoldVisual *this, const struct tagPOINT *a2)
{
  __int64 *v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r8
  int v8; // eax
  unsigned int v9; // r9d
  __int64 v10; // rax
  _QWORD *v11; // r8
  __m128i v12; // xmm0
  int v13; // eax
  CTouchPressHoldVisual *v14; // rcx

  CTouchPressHoldVisual::StopAllTimelines(this);
  v4 = *v3;
  *(_DWORD *)(v5 + 332) = 0;
  *(_QWORD *)(v5 + 308) = v4;
  CTouchPressHoldVisual::_UpdateFinalSize((CTouchPressHoldVisual *)v5);
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         120LL);
  if ( v6 )
  {
    CTimelineBase::CTimelineBase(v6, 0.1500000059604645, 1.0, 0.0, 0);
    *v7 = &CTimeline<float>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 43) = v7;
  if ( v7 )
  {
    v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            120LL);
    if ( v10 )
    {
      CTimelineBase::CTimelineBase(v10, 0.1500000059604645, 1.0, 0.25, 0);
      *v11 = &CTimeline<float>::`vftable';
    }
    else
    {
      v11 = 0LL;
    }
    *((_QWORD *)this + 44) = v11;
    if ( v11 )
    {
      v8 = CTouchVisual::RegisterGlobalTimer(this);
      if ( v8 >= 0 )
      {
        CTouchPressHoldVisual::SetETWAnimation((__int64)this, 3);
        return 0LL;
      }
      v9 = 132;
    }
    else
    {
      v8 = -2147024882;
      v9 = 130;
    }
  }
  else
  {
    v8 = -2147024882;
    v9 = 128;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9);
  CTouchPressHoldVisual::StopAllTimelines(this);
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 79));
  *((_DWORD *)this + 84) = 0;
  v13 = (int)(float)(_mm_cvtepi32_ps(v12).m128_f32[0] * 0.25);
  *(float *)v12.m128i_i32 = (float)*((int *)this + 80);
  *((_DWORD *)this + 81) = v13;
  *((_DWORD *)this + 82) = (int)(float)(*(float *)v12.m128i_i32 * 0.25);
  CTouchPressHoldVisual::UpdateOpacityAndLocation(v14);
  return 0LL;
}
