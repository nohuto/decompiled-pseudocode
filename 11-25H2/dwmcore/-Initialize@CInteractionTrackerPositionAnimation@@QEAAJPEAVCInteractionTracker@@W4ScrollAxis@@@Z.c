/*
 * XREFs of ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1800EFDD0
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1800F097C (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1800F0500 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::Initialize(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // xmm2_4
  int v7; // xmm0_4
  int v8; // xmm4_4
  int v9; // xmm3_4
  int v10; // xmm1_4
  _DWORD *v11; // rax

  v4 = CScrollAnimation::Initialize();
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x22u, 0LL);
  }
  else
  {
    v5 = 0;
    v6 = a2[142];
    v7 = a2[141];
    v8 = a2[138];
    v9 = a2[137];
    v10 = a2[136];
    *(_DWORD *)(a1 + 476) = *(_DWORD *)(a1 + 324);
    v11 = *(_DWORD **)(a1 + 456);
    *(_DWORD *)(a1 + 520) = v7;
    *(_DWORD *)(a1 + 516) = v6;
    v11[4] = v10;
    v11[5] = v9;
    v11[6] = v8;
  }
  return v5;
}
