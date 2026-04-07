/*
 * XREFs of ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x180103400
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002B8A0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D732 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B6F64 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@PEAVCAnimatedTransitionVisual@@@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@QEAAPEAPEAVCAnimatedTransitionVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18010027C (--$_Emplace_reallocate@PEAVCAnimatedTransitionVisual@@@-$vector@PEAVCAnimatedTransitionVisual@@V.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180100384 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 *     wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___ @ 0x180100AAC (wil--details--lambda_call__lambda_e5362848fe0381a2024b7815ced62145___--_lambda_call__lambda_e536.c)
 *     ??4?$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataVisual@@@Z @ 0x180100C44 (--4-$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataV.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180101AD4 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals(
        __int64 a1,
        volatile signed __int32 **a2,
        __int64 a3)
{
  int RootRenderDataVisual; // eax
  unsigned int v5; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *Flink; // r14
  volatile signed __int32 *v8; // rsi
  char v9; // dl
  bool v10; // cl
  struct CVisual *v11; // rdi
  int v12; // eax
  CAnimatedTransitionVisual *v13; // rbx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int inserted; // eax
  int v18; // r12d
  __int64 v19; // r13
  _BYTE *v20; // rdx
  CBaseObject *v21; // rbx
  CBaseObject **v22; // rdx
  CBaseObject *v23; // rcx
  int v25; // [rsp+20h] [rbp-69h]
  CAnimatedTransitionVisual *v26; // [rsp+30h] [rbp-59h] BYREF
  CBaseObject *v27; // [rsp+38h] [rbp-51h] BYREF
  CBaseObject *v28; // [rsp+40h] [rbp-49h] BYREF
  CBaseObject *Blink; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-39h] BYREF
  __int64 v31; // [rsp+58h] [rbp-31h]
  CAnimatedTransitionVisual *v32; // [rsp+60h] [rbp-29h] BYREF
  struct _LIST_ENTRY *v33; // [rsp+68h] [rbp-21h]
  volatile signed __int32 **v34; // [rsp+70h] [rbp-19h]
  __int64 v35; // [rsp+78h] [rbp-11h] BYREF
  char v36; // [rsp+80h] [rbp-9h]
  char v37[8]; // [rsp+88h] [rbp-1h] BYREF
  struct tagRECT v38; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v31 = a3;
  v34 = a2;
  v35 = a1;
  v36 = 1;
  v27 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(a1, &v27);
  v5 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
    goto LABEL_39;
  }
  GetDesktopID(1LL, &v30);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v30);
  v33 = WindowListForDesktop;
  if ( !WindowListForDesktop
    || (Flink = WindowListForDesktop->Flink, WindowListForDesktop->Flink == WindowListForDesktop) )
  {
    v8 = (volatile signed __int32 *)v27;
LABEL_41:
    wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=((CBaseObject **)(a1 + 48), v8);
    *v34 = v8;
    return 0LL;
  }
  v8 = (volatile signed __int32 *)v27;
  while ( 1 )
  {
    GetDesktopID(1LL, v37);
    if ( !Flink )
      goto LABEL_32;
    if ( !Flink[27].Blink )
      goto LABEL_32;
    v9 = (char)Flink[42].Flink;
    if ( (v9 & 1) == 0 )
      goto LABEL_32;
    v10 = 0;
    if ( (v9 & 4) == 0 )
      v10 = (BYTE4(Flink[42].Flink) & 1) == 0;
    if ( !v10 || (HIDWORD(Flink[7].Flink) & 0x20000000) != 0 || !Flink[2].Blink )
      goto LABEL_32;
    Blink = (CBaseObject *)Flink[27].Blink;
    _InterlockedIncrement((volatile signed __int32 *)Blink + 2);
    v11 = Blink;
    CTopLevelWindow::GetActualWindowRect(Blink, &v38, 0, 0, 0);
    v26 = 0LL;
    v12 = CAnimatedTransitionVisual::Create(&v26);
    v5 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v12);
      wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&Blink);
      goto LABEL_39;
    }
    v13 = v26;
    v14 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v26, v11, 1, 0LL);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v26);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&Blink);
      v5 = v15;
      goto LABEL_39;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v13, &v38);
    *(struct tagRECT *)((char *)v13 + 872) = v38;
    v16 = *((_DWORD *)v13 + 24);
    if ( (v16 & 0x1000) == 0 )
    {
      *((_DWORD *)v13 + 24) = v16 | 0x1000;
      CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v13 + 8));
    }
    CVisual::SetInterpolationMode((unsigned int *)v13 + 2, 1u);
    v8 = (volatile signed __int32 *)v27;
    inserted = VisualCollection::InsertRelative(
                 (CBaseObject *)((char *)v27 + 32),
                 (unsigned __int64)v13 + 8,
                 0LL,
                 0,
                 v25);
    v18 = inserted;
    if ( inserted < 0 )
      break;
    v32 = v13;
    v19 = v31;
    v20 = *(_BYTE **)(v31 + 8);
    if ( v20 == *(_BYTE **)(v31 + 16) )
    {
      std::vector<CAnimatedTransitionVisual *>::_Emplace_reallocate<CAnimatedTransitionVisual *>(v31, v20, &v32);
    }
    else
    {
      *(_QWORD *)v20 = v13;
      *(_QWORD *)(v19 + 8) += 8LL;
    }
    v26 = 0LL;
    if ( v13 )
    {
      v21 = (CAnimatedTransitionVisual *)((char *)v13 + 8);
      v28 = v21;
    }
    else
    {
      v28 = 0LL;
      v21 = 0LL;
    }
    v22 = *(CBaseObject ***)(a1 + 64);
    if ( v22 == *(CBaseObject ***)(a1 + 72) )
    {
      std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
        (const char *)(a1 + 56),
        (__int64)v22,
        (__int64 *)&v28);
      v23 = v28;
    }
    else
    {
      v23 = 0LL;
      v28 = 0LL;
      *v22 = v21;
      *(_QWORD *)(a1 + 64) += 8LL;
    }
    if ( v23 )
      CBaseObject::Release(v23);
    if ( v11 )
      CBaseObject::Release(v11);
LABEL_32:
    Flink = Flink->Flink;
    if ( Flink == v33 )
      goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8B,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
    (const char *)(unsigned int)inserted);
  CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v13 + 8));
  if ( v11 )
    CBaseObject::Release(v11);
  v5 = v18;
LABEL_39:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v27);
  wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___((__int64)&v35);
  return v5;
}
