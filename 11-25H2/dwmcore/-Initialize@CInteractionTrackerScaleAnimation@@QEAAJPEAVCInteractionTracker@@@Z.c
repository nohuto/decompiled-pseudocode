/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1800F0738
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1800F097C (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1800F0500 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::Initialize(
        CInteractionTrackerScaleAnimation *this,
        struct CInteractionTracker *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // xmm2_4
  int v7; // xmm0_4
  int v8; // xmm4_4
  int v9; // xmm3_4
  int v10; // xmm1_4
  _DWORD *v11; // rax

  v4 = CScrollAnimation::Initialize((__int64)this, (int *)a2, 2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x26u, 0LL);
  }
  else
  {
    v5 = 0;
    v6 = *((_DWORD *)a2 + 144);
    v7 = *((_DWORD *)a2 + 143);
    v8 = *((_DWORD *)a2 + 138);
    v9 = *((_DWORD *)a2 + 137);
    v10 = *((_DWORD *)a2 + 136);
    *((_DWORD *)this + 119) = *((_DWORD *)this + 81);
    v11 = (_DWORD *)*((_QWORD *)this + 57);
    *((_DWORD *)this + 130) = v7;
    *((_DWORD *)this + 129) = v6;
    v11[4] = v10;
    v11[5] = v9;
    v11[6] = v8;
  }
  return v5;
}
