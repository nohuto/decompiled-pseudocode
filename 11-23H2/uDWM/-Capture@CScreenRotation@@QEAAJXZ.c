/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D6A08
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18010A4E0 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 * Callees:
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180008B80 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D59C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180045AEC (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18006B960 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D7C74 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800D814C (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801057CC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v5; // rdx
  CWindowList *v6; // r13
  bool v7; // dl
  LONG v8; // r15d
  LONG v9; // r12d
  CAnimatedTransitionVisual **v10; // r14
  struct CVisual *RootVisualForDesktop; // r15
  int inserted; // eax
  CAnimatedTransitionVisual *v13; // rax
  int v14; // ecx
  __int64 v15; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v17; // rcx
  CAnimatedTransitionVisual *v18; // rcx
  CAnimatedTransitionVisual *v19; // rax
  int v20; // ecx
  int v22; // [rsp+20h] [rbp-49h]
  unsigned int v23; // [rsp+20h] [rbp-49h]
  struct tagSIZE v24; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v26[20]; // [rsp+40h] [rbp-29h] BYREF
  int v27; // [rsp+54h] [rbp-15h]
  int v28; // [rsp+58h] [rbp-11h]
  int v29; // [rsp+64h] [rbp-5h]
  int v30; // [rsp+68h] [rbp-1h]
  struct tagRECT v31; // [rsp+70h] [rbp+7h] BYREF
  bool v32[8]; // [rsp+80h] [rbp+17h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 388) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v5 = &UdwmHardwareExpression_Capture_Info;
LABEL_6:
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)v5,
        a3,
        1LL,
        (__int64)v32);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v5 = &UdwmScreenRotation_Capture_Info;
    goto LABEL_6;
  }
  GetDesktopID(1LL, &v25);
  v31.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v31.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99) + v31.left;
  v31.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v31.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100) + v31.top;
  v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  if ( !*((_BYTE *)this + 336) || (v7 = 1, *((_DWORD *)this + 92) != -1) )
    v7 = 0;
  CScreenRotation::Stop(this, v7, 1);
  v8 = v31.right - v31.left;
  if ( v31.right - v31.left < 0 )
    v8 = 0;
  v9 = v31.bottom - v31.top;
  v24.cx = v8;
  if ( v31.bottom - v31.top < 0 )
    v9 = 0;
  v10 = (CAnimatedTransitionVisual **)((char *)this + 320);
  v24.cy = v9;
  if ( *((_QWORD *)this + 40) )
  {
    if ( *((_BYTE *)this + 339) )
    {
      CVisual::SetRotation(this, (double)*((int *)this + 86));
      CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((char *)this + 356));
      v17 = *v10;
      v27 = 0;
      v28 = 0;
      CAnimatedTransitionVisual::Translate2D(v17, (const struct TA_TRANSFORM_2D *)v26);
      v18 = *v10;
      v27 = 1065353216;
      v28 = 1065353216;
      v29 = 1056964608;
      v30 = 1056964608;
      CAnimatedTransitionVisual::Scale2D(v18, (const struct TA_TRANSFORM_2D *)v26);
      CAnimatedTransitionVisual::SetBeginAlpha(*v10, 0.0);
      *((_DWORD *)*v10 + 235) = 0;
    }
    if ( abs32(*((_DWORD *)this + 85)) == 90 )
    {
      v24.cy = v8;
      v24.cx = v9;
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v10, &v31);
      v19 = *v10;
      *(struct tagRECT *)((char *)v19 + 872) = v31;
      v20 = *((_DWORD *)v19 + 24);
      if ( (v20 & 0x1000) == 0 )
      {
        *((_DWORD *)v19 + 24) = v20 | 0x1000;
        CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v19 + 8));
      }
    }
LABEL_35:
    VisualCollection::InsertRelative(
      (CScreenRotation *)((char *)this + 32),
      ((unsigned __int64)*v10 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v10 >> 64),
      0LL,
      0,
      v22);
    CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v24, 1);
    return v4;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v6, v25);
  inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 40);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v23 = 90;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v23);
    return v4;
  }
  if ( *v10 )
  {
    inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v10, RootVisualForDesktop, 1, &v31);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v23 = 92;
      goto LABEL_17;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v10, &v31);
    v13 = *v10;
    *(struct tagRECT *)((char *)v13 + 872) = v31;
    v14 = *((_DWORD *)v13 + 24);
    if ( (v14 & 0x1000) == 0 )
    {
      *((_DWORD *)v13 + 24) = v14 | 0x1000;
      CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v13 + 8));
    }
    v15 = (__int64)*v10 + 8;
    *(struct tagSIZE *)v32 = v24;
    (*(void (__fastcall **)(__int64, bool *))(*(_QWORD *)v15 + 104LL))(v15, v32);
    *((struct tagSIZE *)*v10 + 119) = v24;
    CVisual::SetInterpolationMode((unsigned int *)*v10 + 2, 1u);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v25);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 (unsigned __int64)this,
                 0LL,
                 0,
                 v22);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v23 = 104;
      goto LABEL_17;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v23 = 105;
      goto LABEL_17;
    }
    goto LABEL_35;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Bu);
  return v4;
}
