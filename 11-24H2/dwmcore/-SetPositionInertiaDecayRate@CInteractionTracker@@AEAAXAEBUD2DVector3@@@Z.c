/*
 * XREFs of ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180214BEC
 * Callers:
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800E3350 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x180214B50 (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::SetPositionInertiaDecayRate(
        CInteractionTracker *this,
        const struct D2DVector3 *a2)
{
  __m128i v2; // xmm2
  __m128 v4; // xmm3
  __m128 v5; // xmm4
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h]

  v2 = (__m128i)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v4 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v5 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v4.m128_f32[0] = fminf(1.0, fmaxf(1.0 - *(float *)a2, 0.0));
  LODWORD(v8) = v4.m128_i32[0];
  v5.m128_f32[0] = fminf(1.0, fmaxf(1.0 - *((float *)a2 + 1), 0.0));
  HIDWORD(v8) = v5.m128_i32[0];
  *(float *)v2.m128i_i32 = fminf(1.0, fmaxf(1.0 - *((float *)a2 + 2), 0.0));
  v6 = _mm_cvtsi128_si32(v2);
  v7 = *(_QWORD *)((char *)this + 124) - v8;
  if ( !v7 )
    v7 = *((unsigned int *)this + 33) - (unsigned __int64)v6;
  if ( v7 )
  {
    *(_QWORD *)((char *)this + 124) = _mm_unpacklo_ps(v4, v5).m128_u64[0];
    *((_DWORD *)this + 33) = v6;
  }
  CResource::InvalidateAnimationSources(this, 61);
}
