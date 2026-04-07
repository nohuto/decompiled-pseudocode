/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180031D68
 * Callers:
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180002F8C (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180009360 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x180011DDC (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180032CC4 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800497FC (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003202C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032150 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800321A4 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180032248 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180032318 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032388 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800323B0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18007F2EC (-CancelCrossfade@CButton@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        unsigned __int8 a2,
        struct CTopLevelWindow **a3)
{
  int v4; // r15d
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // di
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebp
  CButton **v14; // r14
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  char v26; // dl
  struct CTopLevelWindow *v27; // [rsp+30h] [rbp-198h] BYREF
  void **v28; // [rsp+40h] [rbp-188h] BYREF
  _BYTE v29[272]; // [rsp+48h] [rbp-180h] BYREF
  _BYTE v30[8]; // [rsp+158h] [rbp-70h] BYREF
  _BYTE v31[48]; // [rsp+160h] [rbp-68h] BYREF

  v4 = a2;
  WindowFrameLoggingTelemetry::CloneWindow::CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)&v28);
  v6 = *((_QWORD *)this + 34);
  if ( v6 )
  {
    if ( (_BYTE)v4 || !*(_DWORD *)(v6 + 232) )
      v26 = 8;
    else
      v26 = 0;
    *(_BYTE *)(v6 + 36) = v26 | *(_BYTE *)(v6 + 36) & 0xF7;
  }
  v7 = *((_QWORD *)this + 37);
  v8 = 8 * v4;
  if ( v7 )
    *(_BYTE *)(v7 + 36) = v8 | *(_BYTE *)(v7 + 36) & 0xF7;
  v9 = *((_QWORD *)this + 67);
  if ( v9 )
    *(_BYTE *)(v9 + 36) = v8 | *(_BYTE *)(v9 + 36) & 0xF7;
  v10 = *((_QWORD *)this + 69);
  if ( v10 )
    *(_BYTE *)(v10 + 36) = v8 | *(_BYTE *)(v10 + 36) & 0xF7;
  v11 = *((_QWORD *)this + 65);
  if ( v11 )
    *(_BYTE *)(v11 + 36) = v8 | *(_BYTE *)(v11 + 36) & 0xF7;
  v12 = *((_QWORD *)this + 98);
  if ( v12 )
    *(_BYTE *)(v12 + 36) = v8 | *(_BYTE *)(v12 + 36) & 0xF7;
  v13 = 0;
  v14 = (CButton **)((char *)this + 488);
  while ( v13 < 4 )
  {
    if ( *v14 )
    {
      *((_BYTE *)*v14 + 36) = v8 | *((_BYTE *)*v14 + 36) & 0xF7;
      if ( !(_BYTE)v4 )
      {
        v25 = CButton::CancelCrossfade(*v14);
        v17 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x1657u, 0LL);
          goto LABEL_20;
        }
      }
    }
    ++v13;
    ++v14;
  }
  v27 = 0LL;
  v15 = (8 * v4 + 2) | 1u;
  if ( (*((_BYTE *)this + 584) & 0x20) == 0 )
    v15 = (unsigned int)(8 * v4 + 2);
  v16 = CTopLevelWindow::CloneVisualTree(this, &v27, v15);
  v17 = v16;
  if ( v16 >= 0 )
  {
    *a3 = v27;
    v19 = *((_QWORD *)this + 34);
    if ( v19 )
      *(_BYTE *)(v19 + 36) &= ~8u;
    v20 = *((_QWORD *)this + 37);
    if ( v20 )
      *(_BYTE *)(v20 + 36) &= ~8u;
    v21 = *((_QWORD *)this + 67);
    if ( v21 )
      *(_BYTE *)(v21 + 36) &= ~8u;
    v22 = *((_QWORD *)this + 69);
    if ( v22 )
      *(_BYTE *)(v22 + 36) &= ~8u;
    v23 = *((_QWORD *)this + 65);
    if ( v23 )
      *(_BYTE *)(v23 + 36) &= ~8u;
    v24 = *((_QWORD *)this + 98);
    if ( v24 )
      *(_BYTE *)(v24 + 36) &= ~8u;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1669u, 0LL);
  }
LABEL_20:
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v28, v17);
  v28 = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v28);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v31);
  wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v30);
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(v29);
  return v17;
}
