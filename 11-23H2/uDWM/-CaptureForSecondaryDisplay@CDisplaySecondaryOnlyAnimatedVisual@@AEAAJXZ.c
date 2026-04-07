/*
 * XREFs of ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800BD968
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BDC30 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  struct CAnimatedTransitionVisual **v1; // rbx
  struct CAnimatedTransitionVisual *v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  struct CVisual *RootVisualForDesktop; // rax
  int v8; // edi
  int v9; // eax
  int v10; // r14d
  int v11; // eax
  CVisual *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int inserted; // eax
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-40h]
  unsigned __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h]
  struct tagRECT v21; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v1 = (struct CAnimatedTransitionVisual **)((char *)this + 440);
  if ( *((_QWORD *)this + 55) )
    return 0LL;
  v18 = 0LL;
  GetDesktopID(1LL, &v18);
  v21.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v21.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99) + v21.left;
  v21.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v21.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100) + v21.top;
  v3 = *v1;
  *v1 = 0LL;
  if ( v3 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v3 + 8));
  v4 = CAnimatedTransitionVisual::Create(v1);
  if ( v4 < 0 )
  {
    v5 = 176LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v18);
  v4 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v1, RootVisualForDesktop, 1, &v21);
  if ( v4 < 0 )
  {
    v5 = 184LL;
    goto LABEL_6;
  }
  v8 = 0;
  v9 = v21.right - v21.left;
  v10 = 0;
  if ( v21.right - v21.left < 0 )
    v9 = 0;
  LODWORD(v20) = v9;
  if ( v21.right - v21.left >= 0 )
    v8 = v21.right - v21.left;
  v11 = v21.bottom - v21.top;
  if ( v21.bottom - v21.top < 0 )
    v11 = 0;
  HIDWORD(v20) = v11;
  if ( v21.bottom - v21.top >= 0 )
    v10 = v21.bottom - v21.top;
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v1, &v21);
  v12 = (struct CAnimatedTransitionVisual *)((char *)*v1 + 8);
  *(struct tagRECT *)((char *)*v1 + 872) = v21;
  v13 = *((_DWORD *)v12 + 22);
  if ( (v13 & 0x1000) == 0 )
  {
    *((_DWORD *)v12 + 22) = v13 | 0x1000;
    CVisual::PropagateDirtyChildren(v12);
  }
  v14 = (__int64)*v1 + 8;
  v19[0] = v8;
  v19[1] = v10;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14 + 104LL))(v14, v19);
  *((_QWORD *)*v1 + 119) = v20;
  CVisual::SetInterpolationMode((unsigned int *)*v1 + 2, 1u);
  inserted = VisualCollection::InsertRelative(
               (CDisplaySecondaryOnlyAnimatedVisual *)((char *)this + 32),
               ((unsigned __int64)*v1 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v1 >> 64),
               0LL,
               0,
               v17);
  v16 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
    (const char *)(unsigned int)inserted);
  return v16;
}
