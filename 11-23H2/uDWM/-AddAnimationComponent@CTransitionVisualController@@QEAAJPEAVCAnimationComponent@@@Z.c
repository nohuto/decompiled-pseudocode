/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180014CF4
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180013E1C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x180014DF8 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800154D4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180015A38 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int inserted; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v7; // esi
  struct CAnimationComponent *v8; // rax
  struct CVisual *v9; // rdx
  int v11; // r9d
  unsigned int v12; // eax
  bool v13; // [rsp+20h] [rbp-18h]
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct CAnimationComponent *v15; // [rsp+48h] [rbp+10h] BYREF
  float v16; // [rsp+50h] [rbp+18h] BYREF

  v15 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v14 = 2229;
LABEL_13:
    v11 = inserted;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      v14,
      0LL);
    return v4;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v14 = 2230;
    goto LABEL_13;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v4 = -2147024362;
    v12 = 181;
    v7 = -2147024362;
    goto LABEL_15;
  }
  if ( v6 > *((_DWORD *)this + 33) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v15);
    v4 = v7;
    if ( v7 >= 0 )
      goto LABEL_6;
    v12 = 192;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v12, 0LL);
    v11 = v7;
    v14 = 2232;
    goto LABEL_16;
  }
  *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * *((unsigned int *)this + 34)) = v15;
  *((_DWORD *)this + 34) = v6;
LABEL_6:
  _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
  v8 = v15;
  v9 = (struct CVisual *)*((_QWORD *)v15 + 4);
  if ( v9 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v9, 0LL, 0, v13);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v14 = 2237;
      goto LABEL_13;
    }
    v8 = v15;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
               (struct CVisual *)((*((_QWORD *)v8 + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v8
                                                                                               + 5) >> 64)),
               0LL,
               0,
               v13);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v14 = 2241;
    goto LABEL_13;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v15 + 18) + 72LL),
              *((_DWORD *)v15 + 7),
              &v16) >= 0 )
    *(float *)(*((_QWORD *)v15 + 5) + 936LL) = v16;
  return v4;
}
