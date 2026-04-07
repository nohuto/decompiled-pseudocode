/*
 * XREFs of ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x180103EA4
 * Callers:
 *     ??$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x180100890 (--$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@wi.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D732 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x1800A2990 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE05C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1801044CC (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 */

// Hidden C++ exception states: #wind=8
winrt::Udwm::Transitions::implementation::UserResizeVisual *__fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::UserResizeVisual(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        struct CTopLevelWindow3D *a2,
        char a3)
{
  struct CAcrylicSheet **v4; // rsi
  int v5; // edi
  CBaseObject *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-48h]
  float v12[4]; // [rsp+30h] [rbp-38h] BYREF
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v13; // [rsp+40h] [rbp-28h]
  struct tagRECT v14; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = this;
  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>'};
  *((_BYTE *)this + 32) = a3;
  v4 = (struct CAcrylicSheet **)((char *)this + 40);
  v5 = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v6 = *v4;
  *v4 = 0LL;
  if ( v6 )
    CBaseObject::Release(v6);
  LOBYTE(a2) = *((_BYTE *)this + 32);
  v7 = CAcrylicSheet::Create(*(CTopLevelWindow3D ***)(*((_QWORD *)this + 9) + 336LL), (__int64)a2, v4);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      23LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v7,
      v11);
  v8 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 22) = *(_DWORD *)(*(_QWORD *)(v8 + 336) + 680LL) & 0xFFF;
  CTopLevelWindow::GetActualWindowRect(*(CTopLevelWindow **)(*(_QWORD *)(v8 + 336) + 440LL), &v14, 0, 1, 1);
  v9 = 0;
  if ( v14.right - v14.left >= 0 )
    v9 = v14.right - v14.left;
  if ( v14.bottom - v14.top >= 0 )
    v5 = v14.bottom - v14.top;
  v12[0] = (float)v14.left;
  v12[1] = (float)v14.top;
  v12[2] = (float)v9;
  v12[3] = (float)v5;
  winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(
    this,
    (const struct winrt::Windows::Foundation::Rect *)v12);
  CVisual::SetInterpolationMode((unsigned int *)*v4, 1u);
  return this;
}
