/*
 * XREFs of ?HasValidSnapAssistItems@CSnapAssistControllerBase@@IEAA_NPEAUIObjectCollection@@@Z @ 0x1805A60AC
 * Callers:
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A7D70 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18002CBE4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18007DA98 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802116FC (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CSnapAssistControllerBase::HasValidSnapAssistItems(
        CSnapAssistControllerBase *this,
        struct IObjectCollection *a2)
{
  __int64 (__fastcall ***v2)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  struct IApplicationView *v3; // rdx
  HWND WindowForView; // rax
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+28h] [rbp-38h]
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  ApplicationViewHelpers *v9[2]; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+50h] [rbp-10h] BYREF
  ApplicationViewHelpers *v12; // [rsp+70h] [rbp+10h] BYREF

  v12 = this;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v6,
    (__int64)a2);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v8,
    (__int64)&v6,
    0);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v10,
    (__int64)&v6,
    v7);
  while ( 1 )
  {
    if ( v8 == v10 && v9[1] == (ApplicationViewHelpers *)v11[1] )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
      return 0;
    }
    v2 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v9[0];
    v12 = v9[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v2, v3);
    if ( !GetPropW(WindowForView, (LPCWSTR)0xA921) )
      break;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    ++v8;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v8);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  return 1;
}
