/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800143DC (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18001512C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180003BA4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800098C0 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180014FE0 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180015A38 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002D918 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180045AEC (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800AA444 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // ebx
  unsigned int v3; // ecx
  _QWORD *v4; // r14
  unsigned int i; // ebx
  signed int v6; // ebp
  char v7; // r11
  unsigned int k; // ebp
  __int64 v9; // r15
  CTransitionVisualController *v10; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int j; // r15d
  CAnimationComponent *v15; // r13
  CAnimationComponent *v16; // r12
  int WindowZOrder; // ebx
  unsigned int v18; // eax
  bool v19; // cc
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // [rsp+80h] [rbp+18h]

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( v2 < 0 )
  {
    v12 = 1712;
    goto LABEL_38;
  }
  v3 = *((_DWORD *)this + 34);
  v4 = (_QWORD *)((char *)this + 112);
  for ( i = 0; i < v3; ++i )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*v4 + 8LL * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*v4 + 8LL * i));
    v3 = *((_DWORD *)this + 34);
  }
  v6 = 0;
  if ( (int)(v3 - 1) > 0 )
  {
    v13 = v3;
    do
    {
      v3 = v13;
      for ( j = 0; (int)j < (int)(v3 - v6 - 1); v3 = *((_DWORD *)this + 34) )
      {
        v25 = j;
        v15 = *(CAnimationComponent **)(*v4 + 8LL * j++);
        if ( !*((_BYTE *)v15 + 65) )
        {
          v16 = *(CAnimationComponent **)(*v4 + 8LL * j);
          if ( !*((_BYTE *)v16 + 65) )
          {
            WindowZOrder = CAnimationComponent::GetWindowZOrder(v16);
            if ( (int)CAnimationComponent::GetWindowZOrder(v15) > WindowZOrder )
            {
              *(_QWORD *)(*v4 + 8LL * j) = v15;
              *(_QWORD *)(*v4 + 8 * v25) = v16;
            }
          }
        }
      }
      ++v6;
      v13 = v3;
    }
    while ( v6 < (int)(v3 - 1) );
  }
  v7 = 1;
  while ( v3 > 1 && v7 )
  {
    v18 = v3 - 1;
    v19 = v3-- <= 1;
    v7 = 0;
    if ( !v19 )
    {
      v20 = 8LL;
      v21 = v18;
      v22 = 0LL;
      do
      {
        v23 = *(_QWORD *)(v22 + *v4);
        v24 = *(_QWORD *)(v20 + *v4);
        if ( !*(_BYTE *)(v23 + 65)
          && !*(_BYTE *)(v24 + 65)
          && *(_QWORD *)(v23 + 144) == *(_QWORD *)(v24 + 144)
          && *(_DWORD *)(v23 + 56) > *(_DWORD *)(v24 + 56) )
        {
          *(_QWORD *)(v22 + *v4) = v24;
          v7 = 1;
          *(_QWORD *)(v20 + *v4) = v23;
        }
        v22 += 8LL;
        v20 += 8LL;
        --v21;
      }
      while ( v21 );
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 34); ++k )
  {
    v9 = *(_QWORD *)(*v4 + 8LL * k);
    if ( !*(_BYTE *)(v9 + 65) )
    {
      v2 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v9 + 40) + 8LL), 0);
      if ( v2 < 0 )
      {
        v12 = 1766;
        goto LABEL_38;
      }
      CTransitionVisualController::_UpdateClipping(v10, (struct CAnimationComponent *)v9);
    }
  }
  v2 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  if ( v2 < 0 )
  {
    v12 = 1774;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v2,
      v12,
      0LL);
    CTransitionVisualController::CleanupTransition(this);
  }
  return (unsigned int)v2;
}
