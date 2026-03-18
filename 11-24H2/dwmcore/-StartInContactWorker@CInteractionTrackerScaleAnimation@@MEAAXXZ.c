/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801EB550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800DE724 (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1800E3F90 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800E42C4 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800E54A8 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x1801EB908 (-StartInContact@CMotion@@IEAAX_N@Z.c)
 *     _lambda_7b30347a8dc9aa6d4f16b9515e4933d5_::operator() @ 0x18020B844 (_lambda_7b30347a8dc9aa6d4f16b9515e4933d5_--operator().c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInContactWorker(CInteractionTrackerScaleAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rdi
  __int64 v3; // rcx
  bool v4; // bl
  float ForceEngineCurrentValue; // xmm2_4
  struct CManipulation *ActiveManipulation; // rdi
  InteractionSourceManager *v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // [rsp+28h] [rbp-E0h] BYREF
  struct CManipulation *v20; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v21[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-B0h]
  __int128 v23; // [rsp+68h] [rbp-A0h]
  __int128 v24; // [rsp+78h] [rbp-90h]
  __int128 v25; // [rsp+88h] [rbp-80h]
  __int128 v26; // [rsp+98h] [rbp-70h]
  __int128 v27; // [rsp+A8h] [rbp-60h]
  __int128 v28; // [rsp+B8h] [rbp-50h]
  __int128 v29; // [rsp+C8h] [rbp-40h]
  __int128 v30; // [rsp+D8h] [rbp-30h]
  __int128 v31; // [rsp+E8h] [rbp-20h]
  __int128 v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+108h] [rbp+0h]

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v4 = 0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker)
    && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v3 + 328)) )
  {
    ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*((CScrollAnimation **)InteractionTracker + 41));
  }
  else
  {
    ForceEngineCurrentValue = *((float *)InteractionTracker + 36);
  }
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((struct CInteractionTracker *)((char *)InteractionTracker + 208));
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v7) && ActiveManipulation )
  {
    v20 = ActiveManipulation;
    LODWORD(v19) = 2;
    v8 = *((_OWORD *)ActiveManipulation + 17);
    v21[2] = 0x3F8000003F800000LL;
    v9 = *((_OWORD *)ActiveManipulation + 18);
    v22 = v8;
    v10 = *((_OWORD *)ActiveManipulation + 19);
    v23 = v9;
    v11 = *((_OWORD *)ActiveManipulation + 20);
    v24 = v10;
    v12 = *((_OWORD *)ActiveManipulation + 21);
    v25 = v11;
    v13 = *((_OWORD *)ActiveManipulation + 22);
    v26 = v12;
    v14 = *((_OWORD *)ActiveManipulation + 23);
    v27 = v13;
    v28 = v14;
    v29 = *((_OWORD *)ActiveManipulation + 24);
    v15 = *((_OWORD *)ActiveManipulation + 26);
    v30 = *((_OWORD *)ActiveManipulation + 25);
    v16 = *((_OWORD *)ActiveManipulation + 27);
    v17 = *((_QWORD *)ActiveManipulation + 56);
    v31 = v15;
    v32 = v16;
    v33 = v17;
    v21[0] = &v20;
    v21[1] = &v19;
    v18 = *((_QWORD *)&v23 + 1) - 0x3F8000003F800000LL;
    if ( *((_QWORD *)&v23 + 1) == 0x3F8000003F800000LL )
      v18 = (unsigned int)v24
          - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
    if ( v18 && (unsigned __int8)lambda_7b30347a8dc9aa6d4f16b9515e4933d5_::operator()(v21, (unsigned int)v33) )
      v4 = 1;
  }
  *((float *)this + 136) = ForceEngineCurrentValue;
  *((float *)this + 127) = ForceEngineCurrentValue;
  CMotion::StartInContact((CInteractionTrackerScaleAnimation *)((char *)this + 440), v4);
}
