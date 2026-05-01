/*
 * XREFs of ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x1801F8BE0
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180091264 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1_lambda_e3476b40c3599fe2d8be82ea48422b91_@@QEAA@XZ @ 0x1801F8C80 (--1_lambda_e3476b40c3599fe2d8be82ea48422b91_@@QEAA@XZ.c)
 *     ??$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Z @ 0x1801F8CA8 (--$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@$$QEAV01@@Z @ 0x1802B5E10 (--0-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask<_lambda_e3476b40c3599fe2d8be82ea48422b91_>(
        __int64 a1,
        __int64 a2)
{
  PSRWLOCK v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+28h] [rbp-20h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
    v9,
    a2);
  v7 = Windows::Internal::ComTaskPool::QueueTask<_lambda_e02303751d4e49a7e603e0304fd9978e_>(
         v6,
         v5,
         LODWORD(v2[15].Ptr),
         &Ptr);
  _lambda_e3476b40c3599fe2d8be82ea48422b91_::~_lambda_e3476b40c3599fe2d8be82ea48422b91_((_lambda_e3476b40c3599fe2d8be82ea48422b91_ *)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&Ptr);
  return v7;
}
