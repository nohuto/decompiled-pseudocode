/*
 * XREFs of ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800D55A8
 * Callers:
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D7C10 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D8010 (-_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D80C0 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D8350 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D88F0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18005218C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800531EC (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180053BE4 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180053D00 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800D07DC (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  CStoryboard *v9; // rcx
  unsigned int v10; // ebx
  struct tagRECT v11; // xmm1
  CWindowPropertyTracker *WPT; // rax
  CStoryboard *v13; // rcx
  CWindowPropertyTracker *v14; // rax
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  CMILRefCountBase *v18; // rcx
  CMILRefCountBase *v20; // [rsp+38h] [rbp-39h] BYREF
  struct tagPOINT v21; // [rsp+40h] [rbp-31h] BYREF
  struct tagPOINT v22; // [rsp+48h] [rbp-29h] BYREF
  CMILRefCountBase **v23; // [rsp+50h] [rbp-21h]
  CSlide *v24; // [rsp+58h] [rbp-19h]
  char v25; // [rsp+60h] [rbp-11h]
  struct tagRECT rc; // [rsp+68h] [rbp-9h] BYREF
  struct tagRECT v27; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  if ( a4 )
    *a4 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  v7 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 186));
  v8 = CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v7, &v20);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = *(struct tagRECT *)((char *)v20 + 88);
    rc = v11;
    v27 = v11;
    v23 = &v20;
    v24 = this;
    v25 = 1;
    v21 = 0LL;
    v22 = 0LL;
    WPT = CStoryboard::_GetWPT(v9);
    if ( (int)CWindowPropertyTracker::GetWindowBeginPosition(WPT, *((HWND *)a2 + 5), &v21) >= 0 )
    {
      v14 = CStoryboard::_GetWPT(v13);
      if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v14, *((HWND *)a2 + 5), &v22) >= 0 )
      {
        v15 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 4));
        v16 = _mm_cvtsi128_si32((__m128i)v11);
        OffsetRect(&rc, v21.x - v16, v21.y - v15);
        OffsetRect(&v27, v22.x - v16, v22.y - v15);
      }
    }
    v17 = *((_DWORD *)a2 + 186);
    if ( (v17 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 764);
    if ( (v17 & 0x800000) != 0 )
      v27 = *(struct tagRECT *)((char *)a2 + 796);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v20 + 5), &rc);
    CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v20 + 5), &v27);
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v20 + 5), a3);
    if ( a4 )
    {
      v18 = v20;
      *a4 = v20;
      if ( v18 )
        CMILRefCountBase::AddRef(v18);
    }
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"clientcore\\windows\\dwm\\udwm\\storyboard.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  return v10;
}
