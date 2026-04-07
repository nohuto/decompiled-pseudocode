/*
 * XREFs of ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x180089828
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x180084D20 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x18009522C (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  struct CAnimatedTransitionVisual **v1; // rsi
  struct CAnimatedTransitionVisual *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  struct CVisual *RootVisualForDesktop; // rax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  struct CAnimatedTransitionVisual *v11; // rcx
  int v12; // eax
  int v13; // r8d
  unsigned __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  struct tagRECT v16; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v1 = (struct CAnimatedTransitionVisual **)((char *)this + 392);
  if ( !*((_QWORD *)this + 49) )
  {
    v14 = 0LL;
    GetDesktopID(1LL, &v14);
    v16.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    v16.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97) + v16.left;
    v16.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v16.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98) + v16.top;
    v3 = *v1;
    *v1 = 0LL;
    if ( v3 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v3 + 8));
    v4 = CAnimatedTransitionVisual::Create(v1);
    if ( v4 < 0 )
    {
      v5 = 172LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
        (const char *)(unsigned int)v4,
        v14);
      return (unsigned int)v4;
    }
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             v14);
    v4 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v1, RootVisualForDesktop, 1, &v16);
    if ( v4 < 0 )
    {
      v5 = 180LL;
      goto LABEL_6;
    }
    v8 = 0;
    v9 = v16.right - v16.left;
    if ( v16.right - v16.left < 0 )
      v9 = 0;
    LODWORD(v15) = v9;
    if ( v16.right - v16.left >= 0 )
      v8 = v16.right - v16.left;
    v10 = v16.bottom - v16.top;
    v11 = *v1;
    v12 = v16.bottom - v16.top;
    if ( v16.bottom - v16.top < 0 )
      v12 = 0;
    HIDWORD(v15) = v12;
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v11, &v16);
    CAnimatedTransitionVisual::SetEndRect(*v1, &v16);
    v13 = 0;
    if ( v10 >= 0 )
      v13 = v10;
    CVisual::SetSize((struct CAnimatedTransitionVisual *)((char *)*v1 + 8), v8, v13);
    *((_QWORD *)*v1 + 113) = v15;
    CVisual::SetInterpolationMode((__int64 *)*v1 + 1, 1);
    v4 = CContainerVisual::AddChild(
           this,
           (struct CVisual *)(((unsigned __int64)*v1 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v1 >> 64)));
    if ( v4 < 0 )
    {
      v5 = 190LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
