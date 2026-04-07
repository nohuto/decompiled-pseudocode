/*
 * XREFs of ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DE210
 * Callers:
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1270 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1F80 (-_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2030 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2330 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E28D0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180008610 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180013CEC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800D5D74 (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSlide::_SlideWindow(
        CSlide *this,
        struct CWindowData *a2,
        float a3,
        struct CAnimationComponent **a4)
{
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  CVisual *v12; // rcx
  int v13; // eax
  struct CAnimationComponent *v14; // rax
  struct CAnimationComponent *v16; // [rsp+58h] [rbp-69h] BYREF
  struct tagPOINT v17; // [rsp+60h] [rbp-61h] BYREF
  struct tagPOINT v18; // [rsp+68h] [rbp-59h] BYREF
  struct tagRECT v19; // [rsp+78h] [rbp-49h]
  __int128 v20; // [rsp+88h] [rbp-39h]
  __int128 v21; // [rsp+98h] [rbp-29h]
  char v22; // [rsp+A8h] [rbp-19h]
  struct tagRECT rc; // [rsp+B8h] [rbp-9h] BYREF
  struct tagRECT v24; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  if ( a4 )
    *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
  v7 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 170));
  v8 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v7, 0LL, 0LL, -1, 1, &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v19 = *(struct tagRECT *)((char *)v16 + 88);
    rc = v19;
    v24 = v19;
    *(_QWORD *)&v20 = &v16;
    *((_QWORD *)&v20 + 1) = this;
    v21 = v20;
    v22 = 1;
    if ( (int)CWindowPropertyTracker::GetWindowBeginPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *((HWND *)a2 + 5),
                &v17) >= 0
      && (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *((HWND *)a2 + 5),
                &v18) >= 0 )
    {
      OffsetRect(&rc, v17.x - v19.left, v17.y - v19.top);
      OffsetRect(&v24, v18.x - v19.left, v18.y - v19.top);
    }
    v10 = *((_DWORD *)a2 + 170);
    if ( (v10 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 700);
    if ( (v10 & 0x800000) != 0 )
      v24 = *(struct tagRECT *)((char *)a2 + 732);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v16 + 5), &rc);
    v11 = *((_QWORD *)v16 + 5);
    *(struct tagRECT *)(v11 + 872) = v24;
    v12 = (CVisual *)(v11 + 8);
    v13 = *((_DWORD *)v12 + 22);
    if ( (v13 & 0x1000) == 0 )
    {
      *((_DWORD *)v12 + 22) = v13 | 0x1000;
      CVisual::PropagateDirtyChildren(v12);
    }
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v16 + 5), a3);
    v14 = v16;
    *a4 = v16;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (__int64)"clientcore\\windows\\dwm\\udwm\\storyboard.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
  return v9;
}
