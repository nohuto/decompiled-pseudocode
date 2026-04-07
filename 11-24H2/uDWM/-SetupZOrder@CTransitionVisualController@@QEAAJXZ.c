/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180044040
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800430F4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180045BB0 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800207E4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18004232C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x1800432FC (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800436E8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180043B7C (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ @ 0x1800443E0 (-_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800519FC (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // ecx
  signed int v5; // ebp
  char v6; // r10
  unsigned int j; // ebp
  __int64 v9; // r14
  CTransitionVisualController *v10; // rcx
  unsigned int v11; // eax
  bool v12; // cc
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // r11
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int i; // r15d
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // r14
  CAnimationComponent *v23; // r12
  int WindowZOrder; // ebx

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( v2 < 0 )
  {
    v18 = 1712;
  }
  else
  {
    v2 = CTransitionVisualController::_EnsureAnimationComponentsWindowZOrder(this);
    if ( v2 < 0 )
    {
      v18 = 1713;
    }
    else
    {
      v4 = *((_DWORD *)this + 34);
      v5 = 0;
      if ( (int)(v4 - 1) > 0 )
      {
        LODWORD(v3) = *((_DWORD *)this + 34);
        do
        {
          v4 = v3;
          for ( i = 0; (int)i < (int)(v4 - v5 - 1); v4 = *((_DWORD *)this + 34) )
          {
            v20 = *((_QWORD *)this + 14);
            v21 = i++;
            v22 = *(_QWORD *)(v20 + 8LL * i);
            v23 = *(CAnimationComponent **)(v20 + 8 * v21);
            if ( !*((_BYTE *)v23 + 65) && !*(_BYTE *)(v22 + 65) )
            {
              WindowZOrder = CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(v20 + 8LL * i));
              if ( (int)CAnimationComponent::GetWindowZOrder(v23) > WindowZOrder )
              {
                *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * i) = v23;
                *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v21) = v22;
              }
            }
          }
          ++v5;
          v3 = v4;
        }
        while ( v5 < (int)(v4 - 1) );
      }
      v6 = 1;
      while ( v4 > 1 && v6 )
      {
        v11 = v4 - 1;
        v12 = v4-- <= 1;
        v6 = 0;
        if ( !v12 )
        {
          v3 = 8LL;
          v13 = v11;
          v14 = 0LL;
          do
          {
            v15 = *((_QWORD *)this + 14);
            v16 = *(_QWORD *)(v14 + v15);
            v17 = *(_QWORD *)(v3 + v15);
            if ( !*(_BYTE *)(v16 + 65)
              && !*(_BYTE *)(v17 + 65)
              && *(_QWORD *)(v16 + 144) == *(_QWORD *)(v17 + 144)
              && *(_DWORD *)(v16 + 56) > *(_DWORD *)(v17 + 56) )
            {
              *(_QWORD *)(v14 + v15) = v17;
              v6 = 1;
              *(_QWORD *)(v3 + *((_QWORD *)this + 14)) = v16;
            }
            v14 += 8LL;
            v3 += 8LL;
            --v13;
          }
          while ( v13 );
        }
      }
      for ( j = 0; j < *((_DWORD *)this + 34); ++j )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * j);
        if ( !*(_BYTE *)(v9 + 65) )
        {
          v2 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v9 + 40) + 8LL), 0);
          if ( v2 < 0 )
          {
            v18 = 1766;
            goto LABEL_21;
          }
          CTransitionVisualController::_UpdateClipping(v10, (struct CAnimationComponent *)v9);
        }
      }
      v2 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this, (const struct std::nothrow_t *)v3);
      if ( v2 >= 0 )
        return (unsigned int)v2;
      v18 = 1774;
    }
  }
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v2,
    v18,
    0LL);
  CTransitionVisualController::CleanupTransition(this);
  return (unsigned int)v2;
}
