/*
 * XREFs of ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180088A68
 * Callers:
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18009AFA0 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800BCF58 (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BE54C (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800C1FA0 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004C778 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x18009522C (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetCenter@CVisual@@QEAAXMM@Z @ 0x1800960CC (-SetCenter@CVisual@@QEAAXMM@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800BCCFC (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::CaptureAndAddVisual(
        CDisplayAnimatedVisual *this,
        unsigned __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct CAnimatedTransitionVisual **a5)
{
  int v10; // eax
  unsigned int v11; // ebx
  struct CVisual *RootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v14; // rbx
  int v15; // eax
  unsigned int v16; // esi
  int v17; // ecx
  int v18; // eax
  int v19; // r12d
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // r8d
  int v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  CAnimatedTransitionVisual *v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v30; // [rsp+80h] [rbp+28h]

  *a5 = 0LL;
  v27 = 0LL;
  v10 = CAnimatedTransitionVisual::Create(&v27);
  v11 = v10;
  if ( v10 >= 0 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             a2);
    v14 = v27;
    v15 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v27, RootVisualForDesktop, 1, a3);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v15,
        (int)v27);
      if ( v14 )
        CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v14 + 8));
      return v16;
    }
    v17 = a3->right - a3->left;
    v18 = v17;
    if ( v17 < 0 )
      v18 = 0;
    LODWORD(v28) = v18;
    v19 = 0;
    if ( v17 >= 0 )
      v19 = v17;
    v20 = a3->bottom - a3->top;
    v21 = v20;
    if ( v20 < 0 )
      v21 = 0;
    HIDWORD(v28) = v21;
    v22 = 0;
    if ( v20 >= 0 )
      v22 = v20;
    v30 = v22;
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v14, a4);
    CAnimatedTransitionVisual::SetEndRect(v14, a4);
    v23 = 0;
    if ( a4->bottom - a4->top >= 0 )
      v23 = a4->bottom - a4->top;
    v24 = 0;
    if ( a4->right - a4->left >= 0 )
      v24 = a4->right - a4->left;
    CVisual::SetSize((CAnimatedTransitionVisual *)((char *)v14 + 8), v24, v23);
    *((_QWORD *)v14 + 113) = v28;
    CVisual::SetInterpolationMode((__int64 *)v14 + 1, 1);
    v25 = CDisplayAnimatedVisual::AddToRenderTargetRootVisualForDesktop(this, a2);
    v16 = v25;
    if ( v25 >= 0 )
    {
      v25 = CContainerVisual::AddChild(
              this,
              (struct CVisual *)(((unsigned __int64)v14 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64)));
      v16 = v25;
      if ( v25 >= 0 )
      {
        CVisual::SetSize(this, v19, v30);
        CVisual::SetCenter(this, (float)*((int *)this + 18) * 0.5, (float)*((int *)this + 19) * 0.5);
        v27 = 0LL;
        *a5 = v14;
        v16 = 0;
        goto LABEL_26;
      }
      v26 = 616LL;
    }
    else
    {
      v26 = 614LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v25,
      (int)v27);
LABEL_26:
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v27);
    return v16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x252,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)v10,
    (int)v27);
  if ( v27 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v27 + 8));
  return v11;
}
