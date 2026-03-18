/*
 * XREFs of ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1800DED50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1800DE90C (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1800DF65C (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1800DF6C0 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1800DF770 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E5A2C (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180223EB4 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x18029D648 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 */

__int64 __fastcall CInteractionTracker::GetProperty(
        CInteractionTracker *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  __m128 v3; // xmm0
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // xmm0_4
  unsigned int v9; // edx
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  char v19; // al
  unsigned int v20; // edx
  unsigned int v21; // edx
  int v22; // esi
  __int64 v23; // rcx
  __m128 v24; // xmm6
  unsigned __int64 v25; // xmm2_8
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  bool v29; // dl
  double v30; // xmm0_8
  double CurrentVelocity; // xmm0_8
  int v32; // xmm6_4
  double v33; // xmm0_8
  __int64 v34; // rcx
  __int64 v35; // rcx
  char *NaturalEndpoint; // r8
  CScrollScaleKeyframeAnimation *v37; // rcx
  __int64 ScaleAdjustedPositionIfNeeded; // rax
  char v39[16]; // [rsp+40h] [rbp-28h] BYREF

  if ( a2 > 0x36 )
  {
    v14 = a2 - 56;
    if ( !v14 )
    {
      v22 = 0;
      if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      {
        v3.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(v23 + 336));
        v24 = v3;
        v3.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*((CScrollAnimation **)this + 43));
        v25 = _mm_unpacklo_ps(v24, v3).m128_u64[0];
      }
      else
      {
        v35 = *(_QWORD *)(v23 + 464);
        if ( v35 )
          NaturalEndpoint = (char *)CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v35);
        else
          NaturalEndpoint = (char *)this + 88;
        ScaleAdjustedPositionIfNeeded = CInteractionTracker::GetScaleAdjustedPositionIfNeeded(
                                          this,
                                          v39,
                                          NaturalEndpoint);
        v22 = *(_DWORD *)(ScaleAdjustedPositionIfNeeded + 8);
        v25 = *(_QWORD *)ScaleAdjustedPositionIfNeeded;
      }
      *(_QWORD *)a3 = v25;
      *((_DWORD *)a3 + 2) = v22;
      *((_DWORD *)a3 + 18) = 52;
      return 0;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        CurrentVelocity = CInteractionTracker::GetCurrentVelocity(this, 1LL);
        v32 = LODWORD(CurrentVelocity);
        v33 = CInteractionTracker::GetCurrentVelocity(this, 0LL);
        *((_DWORD *)a3 + 18) = 52;
        *(_DWORD *)a3 = LODWORD(v33);
        *((_DWORD *)a3 + 1) = v32;
        *((_DWORD *)a3 + 2) = 0;
        return 0;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          v19 = *((_BYTE *)this + 540) & 1;
          *((_DWORD *)a3 + 18) = 17;
          *(_BYTE *)a3 = v19;
          return 0;
        }
        v27 = v18 - 1;
        if ( !v27 )
        {
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + 124);
          v11 = *((_DWORD *)this + 33);
          goto LABEL_10;
        }
        v28 = v27 - 3;
        if ( !v28 )
        {
          v8 = *((_DWORD *)this + 45);
          goto LABEL_6;
        }
        if ( v28 == 5 )
        {
          v29 = CInteractionTracker::HasImpulse(this) || CInteractionTracker::HasDefaultAnimations(this);
          *((_DWORD *)a3 + 18) = 17;
          *(_BYTE *)a3 = v29;
          return 0;
        }
        goto LABEL_38;
      }
      v30 = CInteractionTracker::GetCurrentVelocity(this, 2LL);
    }
    else if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      *(float *)&v30 = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(v34 + 328));
    }
    else
    {
      v37 = *(CScrollScaleKeyframeAnimation **)(v34 + 472);
      if ( v37 )
        *(float *)&v30 = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v37);
      else
        LODWORD(v30) = *((_DWORD *)this + 36);
    }
    *(_DWORD *)a3 = LODWORD(v30);
    *((_DWORD *)a3 + 18) = 18;
    return 0;
  }
  if ( a2 != 54 )
  {
    v6 = a2 - 1;
    if ( !v6 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 11);
      v11 = *((_DWORD *)this + 24);
      goto LABEL_10;
    }
    v7 = v6 - 1;
    if ( !v7 )
      goto LABEL_5;
    v9 = v7 - 21;
    if ( !v9 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *(_QWORD *)((char *)this + 100);
      v11 = *((_DWORD *)this + 27);
      goto LABEL_10;
    }
    v10 = v9 - 3;
    if ( !v10 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 14);
      v11 = *((_DWORD *)this + 30);
LABEL_10:
      *((_DWORD *)a3 + 2) = v11;
      return 0;
    }
    v20 = v10 - 3;
    if ( !v20 )
    {
      v8 = *((_DWORD *)this + 37);
      goto LABEL_6;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v8 = *((_DWORD *)this + 38);
      goto LABEL_6;
    }
    v26 = v21 - 22;
    if ( !v26 )
    {
      v8 = *((_DWORD *)this + 22);
      goto LABEL_6;
    }
    if ( v26 == 1 )
    {
      v8 = *((_DWORD *)this + 23);
      goto LABEL_6;
    }
LABEL_38:
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4FBu, 0LL);
    return v12;
  }
LABEL_5:
  v8 = *((_DWORD *)this + 36);
LABEL_6:
  *(_DWORD *)a3 = v8;
  *((_DWORD *)a3 + 18) = 18;
  return 0;
}
