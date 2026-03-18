/*
 * XREFs of ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800F53B4
 * Callers:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1800F4B14 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800EFB8C (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800F46B4 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800F5774 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1800F5B60 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        char a5)
{
  CInteractionTracker *v8; // rcx
  __m128 *v9; // rax
  __m128 v10; // xmm8
  __m128 v11; // xmm6
  __m128 v12; // xmm10
  double CurrentValue; // xmm0_8
  float v14; // xmm12_4
  float ForceEngineCurrentValue; // xmm0_4
  float v16; // xmm9_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  float v20; // xmm11_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  int v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  __int64 result; // rax
  float v29; // xmm12_4
  float v30; // xmm11_4
  __int64 v31; // r8
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  float v34; // xmm9_4
  _OWORD v35[3]; // [rsp+20h] [rbp-118h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-E8h]
  char v37[56]; // [rsp+58h] [rbp-E0h] BYREF

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a3)
    || CInteractionTracker::HasDefaultAnimations(v8) )
  {
    v9 = (__m128 *)CInteractionTracker::CalculateInertiaCallbackValues(a3, v37);
  }
  else
  {
    v9 = (__m128 *)v35;
    v32 = *(_OWORD *)(v31 + 596);
    v35[0] = *(_OWORD *)(v31 + 580);
    v33 = *(_OWORD *)(v31 + 612);
    v35[1] = v32;
    *(_QWORD *)&v32 = *(_QWORD *)(v31 + 628);
    v35[2] = v33;
    v36 = v32;
  }
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v36 = v9[3].m128_u64[0];
  CurrentValue = CInteractionTracker::GetCurrentValue(a3, 0);
  v14 = v11.m128_f32[0] - *(float *)&CurrentValue;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a3)
    && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a3 + 344)) )
  {
    ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a3 + 344));
  }
  else
  {
    ForceEngineCurrentValue = *(float *)(a3 + 92);
  }
  v16 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0] - ForceEngineCurrentValue;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a3)
    && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a3 + 328)) )
  {
    v17 = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a3 + 328));
  }
  else
  {
    v17 = *(float *)(a3 + 144);
  }
  v18 = _mm_shuffle_ps(v11, v11, 255).m128_f32[0] / v17;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a3)
    && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a3 + 336)) )
  {
    v19 = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a3 + 336));
  }
  else
  {
    v19 = *(float *)(a3 + 88);
  }
  v20 = v12.m128_f32[0] - v19;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a3)
    && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a3 + 344)) )
  {
    v21 = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a3 + 344));
  }
  else
  {
    v21 = *(float *)(a3 + 92);
  }
  v22 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0] - v21;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a3)
    && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(a3 + 328)) )
  {
    v23 = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(a3 + 328));
  }
  else
  {
    v23 = *(float *)(a3 + 144);
  }
  v24 = *(float *)&v36 / v23;
  v25 = *((_DWORD *)a4 + 23);
  *(float *)(a2 + 16) = a4[22];
  *(_DWORD *)(a2 + 20) = v25;
  *(_DWORD *)(a2 + 24) = 0;
  *(float *)(a2 + 28) = a4[36];
  v26 = a4[23];
  *(float *)(a2 + 32) = a4[22];
  *(float *)(a2 + 36) = v26;
  *(_DWORD *)(a2 + 40) = 0;
  v27 = a4[36];
  *(float *)(a2 + 48) = v27;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (a5 & 1) != 0 )
  {
    v29 = v14 + *(float *)(a2 + 16);
    v30 = v20 + *(float *)(a2 + 32);
    *(_DWORD *)a2 = v10.m128_i32[0];
    *(float *)(a2 + 16) = v29;
    *(float *)(a2 + 32) = v30;
  }
  if ( (a5 & 2) != 0 )
  {
    v34 = v16 + *(float *)(a2 + 20);
    *(_DWORD *)(a2 + 4) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
    *(float *)(a2 + 20) = v34;
    *(float *)(a2 + 36) = v22 + v26;
  }
  if ( (a5 & 4) != 0 )
  {
    *(float *)(a2 + 28) = v18 * *(float *)(a2 + 28);
    *(float *)(a2 + 48) = v27 * v24;
    *(_DWORD *)(a2 + 12) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
  }
  result = a2;
  *(_BYTE *)(a2 + 54) = 1;
  *(_BYTE *)(a2 + 44) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 12));
  *(_WORD *)(a2 + 52) = WORD2(v36);
  return result;
}
