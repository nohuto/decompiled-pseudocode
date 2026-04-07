/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EB3E8
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCF8C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800123B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800154D4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180015A38 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800164E0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateNullAnimationComponentWithWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        struct CStoryboard *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  struct CAnimatedTransitionVisual *v6; // rsi
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbp
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  struct CAnimatedTransitionVisual *v19; // rcx
  struct CTopLevelWindow *v20; // rcx
  struct CAnimationComponent **v21; // rax
  struct CAnimatedTransitionVisual *v22; // rcx
  struct CAnimatedTransitionVisual *v24; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v24 = 0LL;
  v11 = 4095;
  if ( a2 )
    v11 = *((_DWORD *)a2 + 170) & 0x400000 | 0xFFF;
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  if ( v12
    && (!a2 ? (v13 = 0LL) : (v13 = *((_QWORD *)a2 + 5)),
        (v14 = (volatile signed __int32 *)CAnimationComponent::CAnimationComponent(v12, v13, v11, a3, (__int64)a4)) != 0LL) )
  {
    v15 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v17 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
      v16 = v17;
      if ( v17 >= 0 )
      {
        v18 = CAnimatedTransitionVisual::Create(&v24);
        v16 = v18;
        if ( v18 >= 0 )
        {
          v19 = v24;
          *((_DWORD *)v24 + 184) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v19 + 185) = a3;
          if ( a5 )
          {
            if ( a2 )
            {
              v20 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
              if ( v20 )
                CTransitionVisualController::_MoveWindowOffscreen(v20, 1);
            }
          }
          v21 = a6;
          *a6 = (struct CAnimationComponent *)v14;
          _InterlockedIncrement(v14 + 2);
          v22 = v24;
          *((_QWORD *)*v21 + 5) = v24;
          _InterlockedIncrement((volatile signed __int32 *)v22 + 4);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v18,
            0x681u);
        }
        v6 = v24;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v17,
          0x67Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v15,
        0x67Eu);
    }
    CBaseObject::Release((CBaseObject *)v14);
    if ( v6 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v6 + 8));
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x67Cu);
  }
  return v16;
}
