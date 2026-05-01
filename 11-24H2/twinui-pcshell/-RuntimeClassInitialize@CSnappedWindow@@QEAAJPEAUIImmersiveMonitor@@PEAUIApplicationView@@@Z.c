/*
 * XREFs of ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x18008B048
 * Callers:
 *     ??$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindow@@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Z @ 0x18008AF84 (--$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Det.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002962C (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18008B40C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x18008B45C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_18008B45C.c)
 *     ?CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18008C5CC (-CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnappedWindow::RuntimeClassInitialize(
        CSnappedWindow *this,
        struct IImmersiveMonitor *a2,
        struct IApplicationView *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  int (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  struct IApplicationView *v9; // rdx
  bool v10; // bl
  struct IApplicationView *v11; // rdx
  HWND WindowForView; // rax
  struct IApplicationView *v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // ebx
  int v17; // eax
  struct IImmersiveMonitor *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v24[4]; // [rsp+28h] [rbp-38h] BYREF
  __int128 v25; // [rsp+38h] [rbp-28h] BYREF
  __int128 v26; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  if ( *((struct IApplicationView **)this + 4) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a3 + 8LL))(a3);
    v6 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a3;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((struct IImmersiveMonitor **)this + 3) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v23 = 0LL;
  v8 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a3 + 264LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  if ( v8(a3, &v23) < 0 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23) != 7 )
  {
    *((_BYTE *)this + 16) = ApplicationViewHelpers::CanResizeView(*((ApplicationViewHelpers **)this + 4), v9);
    v10 = 0;
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))this + 4),
                            v11);
    if ( WindowForView )
      v10 = (GetWindowLongPtrW(WindowForView, -16) & 0x20000) != 0;
    *((_BYTE *)this + 17) = v10;
    *((_BYTE *)this + 18) = ApplicationViewHelpers::CanMaximizeView(*((ApplicationViewHelpers **)this + 4), v13);
  }
  v26 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v26);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
      (const char *)(unsigned int)v14);
    v22 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return v15;
  }
  (*(void (__fastcall **)(CSnappedWindow *, _DWORD *))(*(_QWORD *)this + 48LL))(this, v24);
  if ( v24[0] >= v24[2] || v24[1] >= v24[3] )
  {
    v15 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
      (const char *)0x8000FFFFLL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    return v15;
  }
  v16 = 0;
  v25 = 0LL;
  v17 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v25);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x186,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v17);
  }
  else
  {
    v19 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a2, v18);
    v16 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(v24, &v25, v19);
  }
  *((_DWORD *)this + 10) = v16;
  v20 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return 0LL;
}
