/*
 * XREFs of ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800E663C
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18007BFB8 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3D10 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1800E683C (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1800E685C (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1800E69A0 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1800E6A50 (-CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1800E6D38 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x180227528 (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18024693C (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18029D0C0 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x18029D440 (-CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802AB818 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 */

void __fastcall CInteractionTracker::ProcessMousewheelManipulation(CInteractionTracker *this)
{
  InteractionSourceManager *v1; // rdi
  float v3; // xmm11_4
  float v4; // xmm8_4
  float v5; // xmm0_4
  float v6; // xmm10_4
  __int64 LastKeyframeValueForPosition; // rax
  __int64 v8; // xmm0_8
  int v9; // eax
  double v10; // xmm0_8
  double v11; // xmm0_8
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  float v14; // xmm0_4
  int v15; // r9d
  float LastKeyframeValueForScale; // xmm0_4
  float v17; // xmm3_4
  CInteractionTracker *v18; // rcx
  double v19; // xmm0_8
  float v20; // xmm4_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  int v23; // [rsp+28h] [rbp-49h]
  _BYTE v24[16]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v25; // [rsp+48h] [rbp-29h] BYREF
  int v26; // [rsp+50h] [rbp-21h]
  __int64 v27; // [rsp+58h] [rbp-19h] BYREF
  int v28; // [rsp+60h] [rbp-11h]

  v1 = (CInteractionTracker *)((char *)this + 208);
  v3 = InteractionSourceManager::GetActiveManipulationDelta((CInteractionTracker *)((char *)this + 208)).m128_f32[0];
  LODWORD(v4) = InteractionSourceManager::GetActiveManipulationDelta(v1).m128_u32[0];
  LODWORD(v5) = InteractionSourceManager::GetActiveManipulationDelta(v1).m128_u32[0];
  v6 = v5;
  if ( COERCE_FLOAT(LODWORD(v3) & _xmm) >= 0.0000011920929 || COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.0000011920929 )
  {
    v27 = 0LL;
    v28 = 0;
    if ( CInteractionTracker::HasRunningDefaultPositionAnimation(this) )
    {
      LastKeyframeValueForPosition = CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
                                       *((_QWORD *)this + 58),
                                       v24);
      v8 = *(_QWORD *)LastKeyframeValueForPosition;
      v9 = *(_DWORD *)(LastKeyframeValueForPosition + 8);
    }
    else
    {
      v8 = *((_QWORD *)this + 11);
      v9 = *((_DWORD *)this + 24);
    }
    v26 = v9;
    v25 = v8;
    if ( COERCE_FLOAT(LODWORD(v3) & _xmm) >= 0.0000011920929 )
    {
      *(float *)&v27 = *(float *)&v25 + v3;
      v10 = CInteractionTracker::ClampValueToBoundary(this, 0LL);
      LODWORD(v25) = LODWORD(v10);
    }
    if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.0000011920929 )
    {
      *((float *)&v27 + 1) = *((float *)&v25 + 1) + v4;
      v11 = CInteractionTracker::ClampValueToBoundary(this, 1LL);
      HIDWORD(v25) = LODWORD(v11);
    }
    v12 = *((_QWORD *)this + 11);
    v26 = 0;
    v13 = v12 - v25;
    if ( !v13 )
      v13 = *((unsigned int *)this + 24) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
    if ( v13 )
    {
      v14 = CInteractionTracker::CalculatePositionAnimationDuration(this, (const struct D2DVector3 *)&v27);
      CInteractionTracker::ScrollToPosition(this, (const struct D2DVector3 *)&v25, v14, v15);
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( CInteractionTracker::HasRunningDefaultScaleAnimation(this) )
      LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*((CScrollScaleKeyframeAnimation **)this
                                                                                              + 59));
    else
      LastKeyframeValueForScale = *((float *)this + 36);
    v17 = fmaxf(0.001, LastKeyframeValueForScale * v6);
    v19 = CInteractionTracker::ClampValueToBoundary(this, 2LL);
    if ( v20 != *(float *)&v19 )
    {
      v21 = CInteractionTracker::CalculateScaleAnimationDuration(v18, v17);
      InteractionSourceManager::GetActiveManipulationCenterpoint(v1, &v27);
      v25 = v27;
      CInteractionTracker::AnimateToScale(this, v22, (const struct D2DVector2 *)&v25, v21, v23);
    }
  }
}
