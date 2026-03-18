/*
 * XREFs of ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800F20B0
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1800ADF98 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1800F19F0 (-CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1800F1B54 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1800F1C04 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1800F1F10 (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800F3174 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x180231B80 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x180232DBC (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x180251868 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1802A6E94 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1802A7214 (-CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802B5408 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 */

void __fastcall CInteractionTracker::ProcessMousewheelManipulation(CKeyframeAnimation **this)
{
  char *v1; // rdi
  float ActiveManipulationDelta; // xmm11_4
  float v4; // xmm8_4
  float v5; // xmm0_4
  float v6; // xmm10_4
  __int64 v7; // r8
  __int64 LastKeyframeValueForPosition; // rax
  CKeyframeAnimation *v9; // xmm0_8
  int v10; // eax
  double v11; // xmm0_8
  double v12; // xmm0_8
  CKeyframeAnimation *v13; // rdx
  unsigned __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // r8
  float LastKeyframeValueForScale; // xmm0_4
  float v18; // xmm3_4
  CInteractionTracker *v19; // rcx
  double v20; // xmm0_8
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  int v24; // [rsp+28h] [rbp-49h]
  char v25[16]; // [rsp+38h] [rbp-39h] BYREF
  CKeyframeAnimation *v26; // [rsp+48h] [rbp-29h] BYREF
  int v27; // [rsp+50h] [rbp-21h]
  CKeyframeAnimation *v28; // [rsp+58h] [rbp-19h] BYREF
  int v29; // [rsp+60h] [rbp-11h]

  v1 = (char *)(this + 26);
  ActiveManipulationDelta = InteractionSourceManager::GetActiveManipulationDelta(this + 26, 0LL);
  v4 = InteractionSourceManager::GetActiveManipulationDelta(v1, 1LL);
  v5 = InteractionSourceManager::GetActiveManipulationDelta(v1, 2LL);
  v6 = v5;
  if ( COERCE_FLOAT(LODWORD(ActiveManipulationDelta) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.0000011920929 )
  {
    v28 = 0LL;
    v29 = 0;
    if ( CInteractionTracker::HasRunningDefaultPositionAnimation((CInteractionTracker *)this) )
    {
      LastKeyframeValueForPosition = CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
                                       this[58],
                                       (__int64)v25);
      v9 = *(CKeyframeAnimation **)LastKeyframeValueForPosition;
      v10 = *(_DWORD *)(LastKeyframeValueForPosition + 8);
    }
    else
    {
      v9 = this[11];
      v10 = *((_DWORD *)this + 24);
    }
    v27 = v10;
    v26 = v9;
    if ( COERCE_FLOAT(LODWORD(ActiveManipulationDelta) & _xmm) >= 0.0000011920929 )
    {
      *(float *)&v28 = *(float *)&v26 + ActiveManipulationDelta;
      v11 = CInteractionTracker::ClampValueToBoundary(this, 0LL, v7);
      LODWORD(v26) = LODWORD(v11);
    }
    if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.0000011920929 )
    {
      *((float *)&v28 + 1) = *((float *)&v26 + 1) + v4;
      v12 = CInteractionTracker::ClampValueToBoundary(this, 1LL, v7);
      HIDWORD(v26) = LODWORD(v12);
    }
    v13 = this[11];
    v27 = 0;
    v14 = v13 - v26;
    if ( !v14 )
      v14 = *((unsigned int *)this + 24) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
    if ( v14 )
    {
      v15 = CInteractionTracker::CalculatePositionAnimationDuration(
              (CInteractionTracker *)this,
              (const struct D2DVector3 *)&v28);
      CInteractionTracker::ScrollToPosition((CInteractionTracker *)this, (const struct D2DVector3 *)&v26, v15);
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( CInteractionTracker::HasRunningDefaultScaleAnimation((CInteractionTracker *)this) )
      LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(this[59]);
    else
      LastKeyframeValueForScale = *((float *)this + 36);
    v18 = fmaxf(0.001, LastKeyframeValueForScale * v6);
    v20 = CInteractionTracker::ClampValueToBoundary(this, 2LL, v16);
    if ( v21 != *(float *)&v20 )
    {
      v22 = CInteractionTracker::CalculateScaleAnimationDuration(v19, v18);
      InteractionSourceManager::GetActiveManipulationCenterpoint(v1, &v28);
      v26 = v28;
      CInteractionTracker::AnimateToScale((CInteractionTracker *)this, v23, (const struct D2DVector2 *)&v26, v22, v24);
    }
  }
}
