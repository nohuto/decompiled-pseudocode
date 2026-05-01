/*
 * XREFs of ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18052F370
 * Callers:
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x18052FD00 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x18052FE20 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x18052F318 (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x18052F5B0 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18052FF50 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x180530540 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppResizeView::CommitResize(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int v4; // eax
  unsigned int v5; // r14d
  AppResizeView *v6; // rdi
  __int64 v7; // rdx
  HRESULT Service; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  void *ppvOut[3]; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+48h] [rbp-28h]
  _BYTE v18[24]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    v14 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 8) + 32LL))(
                       *((_QWORD *)this + 8),
                       v18);
    ppvOut[1] = this;
    ppvOut[2] = &v14;
    v17 = 1;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
    v4 = AppResizeView::QueryResizeApps(this, v14, a2, &v15);
    v5 = v4;
    v6 = (AppResizeView *)((char *)this + 24);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x228,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
      AppResizeView::Hide(v6, 1);
      AppResizeView::Cleanup(this, v7);
      TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, v14);
      return v5;
    }
    ppvOut[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    Service = IUnknown_QueryService(
                *((IUnknown **)this + 2),
                &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                ppvOut);
    v5 = Service;
    if ( Service < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)Service);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
      AppResizeView::Hide(v6, 1);
      AppResizeView::Cleanup(this, v10);
      TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, v14);
      return v5;
    }
    v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut[0] + 88LL))(ppvOut[0], v15);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
      AppResizeView::Hide(v6, 1);
      AppResizeView::Cleanup(this, v12);
      TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, v14);
      return v5;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
    AppResizeView::Hide(v6, 1);
    AppResizeView::Cleanup(this, v13);
    TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, v14);
  }
  return 0LL;
}
