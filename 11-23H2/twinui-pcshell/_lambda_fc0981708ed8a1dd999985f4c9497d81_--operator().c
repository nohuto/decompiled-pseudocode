/*
 * XREFs of _lambda_fc0981708ed8a1dd999985f4c9497d81_::operator() @ 0x18064D0A8
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D870 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAsBoolean@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x18064C648 (--$GetAsBoolean@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpr.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIImmersiveMonitor@@AEBU2@@?$com_ptr@UIRudeWindowManager@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIImmersiveMonitor@@1@Z @ 0x18064C8A8 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIImmersiveMonitor@@AEBU2@@-$com_ptr@UIRude.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall lambda_fc0981708ed8a1dd999985f4c9497d81_::operator()(__int64 a1)
{
  bool v1; // di
  void *v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  HRESULT v6; // eax
  _DWORD *v7; // rcx
  ULONG v9; // [rsp+20h] [rbp-59h]
  bool v10; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+38h] [rbp-41h] BYREF
  void *ppv; // [rsp+40h] [rbp-39h] BYREF
  void *v13; // [rsp+48h] [rbp-31h] BYREF
  int v14; // [rsp+50h] [rbp-29h] BYREF
  HWND hwnd; // [rsp+58h] [rbp-21h] BYREF
  __int64 v16[2]; // [rsp+60h] [rbp-19h] BYREF
  PROPERTYKEY v17; // [rsp+70h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+90h] [rbp+17h] BYREF
  bool *v19; // [rsp+B0h] [rbp+37h]
  int v20; // [rsp+B8h] [rbp+3Fh]
  int v21; // [rsp+BCh] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v1 = 0;
  v10 = 0;
  v16[0] = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  v2 = (void *)v16[0];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
  v11 = 0LL;
  v13 = v2;
  winrt::com_ptr<IRudeWindowManager>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IImmersiveMonitor *,_GUID const &>(
    &v11,
    (__int64 (__fastcall *)(_QWORD, GUID *, GUID *, __int64 *))IUnknown_QueryService,
    &v13);
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 40LL))(v11, &v14);
  v4 = retaddr;
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11E,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
      (const char *)(unsigned int)v3,
      v9);
  if ( v14 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 48LL))(v11, &hwnd);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x122,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
        (const char *)(unsigned int)v5,
        v9);
    if ( !(unsigned int)IsShellManagedWindow(hwnd) )
    {
      ppv = 0LL;
      v6 = SHGetPropertyStoreForWindow(hwnd, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &ppv);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x126,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
          (const char *)(unsigned int)v6,
          v9);
      v13 = ppv;
      if ( ppv )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 8LL))(ppv);
      v17 = PKEY_EdgeGesture_DisableTouchWhenFullscreen;
      wil::PropertyStoreHelperBase<IPropertyStore>::GetAsBoolean<_tagpropertykey>(&v13, (__int128 *)&v17, &v10);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
      if ( ppv )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppv);
      v1 = v10;
    }
  }
  v7 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   (__int64)v4,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v10 = v1;
    v19 = &v10;
    v20 = 1;
    v21 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_180870EC0, 0LL, 0LL, 3u, &v18);
  }
  if ( v11 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
  if ( v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v16);
  return v1;
}
