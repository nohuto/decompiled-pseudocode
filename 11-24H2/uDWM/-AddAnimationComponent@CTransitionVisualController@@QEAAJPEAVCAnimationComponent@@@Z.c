/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180042A38
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180053F3C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180040A2C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800436E8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18007EF90 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CContainerVisual **this,
        struct CAnimationComponent *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  CMILRefCountBase *v7; // rax
  struct CVisual *v8; // rdx
  int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  CMILRefCountBase *v13; // [rsp+48h] [rbp+10h] BYREF
  float v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  v3 = CTransitionVisualController::_EnsureTransitionVisualRoot((CTransitionVisualController *)this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v12 = 2229;
    goto LABEL_9;
  }
  v3 = CTransitionVisualController::_EnsureStagingVisualRoot((CTransitionVisualController *)this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v12 = 2230;
    goto LABEL_9;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v4 = -2147024362;
    v11 = 179;
    v10 = -2147024362;
    goto LABEL_17;
  }
  if ( v6 <= *((_DWORD *)this + 33) )
  {
    *((_QWORD *)this[14] + v5) = v13;
    *((_DWORD *)this + 34) = v6;
    goto LABEL_6;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 14), 8, 1, &v13);
  v4 = v10;
  if ( v10 < 0 )
  {
    v11 = 190;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v11, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v10,
      0x8B8u,
      0LL);
    return v4;
  }
LABEL_6:
  CMILRefCountBase::AddRef(v13);
  v7 = v13;
  v8 = (struct CVisual *)*((_QWORD *)v13 + 4);
  if ( v8 )
  {
    v3 = CContainerVisual::AddChild(this[18], v8);
    v4 = v3;
    if ( v3 < 0 )
    {
      v12 = 2237;
      goto LABEL_9;
    }
    v7 = v13;
  }
  v3 = CContainerVisual::AddChild(
         this[2],
         (struct CVisual *)((*((_QWORD *)v7 + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v7 + 5) >> 64)));
  v4 = v3;
  if ( v3 < 0 )
  {
    v12 = 2241;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v3,
      v12,
      0LL);
    return v4;
  }
  v14 = 0.0;
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v13 + 18) + 72LL),
              *((_DWORD *)v13 + 7),
              &v14) >= 0 )
    *(float *)(*((_QWORD *)v13 + 5) + 888LL) = v14;
  return v4;
}
