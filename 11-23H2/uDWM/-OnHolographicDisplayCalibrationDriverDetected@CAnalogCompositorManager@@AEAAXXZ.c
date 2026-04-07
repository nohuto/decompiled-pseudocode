/*
 * XREFs of ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A5500
 * Callers:
 *     wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x1800A4950 (wistd--__function--__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001FCEC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002EA28 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@1@@Z @ 0x1800A3F1C (--$ActivateInstance@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@F.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A4E00 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800A5458 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x1800A5DBC (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800A60E4 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAnalogCompositorManager::OnHolographicDisplayCalibrationDriverDetected(CAnalogCompositorManager *this)
{
  __int64 v2; // rcx
  UDwmTrace *v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  CAnalogCompositorManager *Instance; // rax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( UDwmTrace::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<UDwmTrace>::get(v2, _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
    UDwmTrace::UDwmHolographicDeviceDriverDetected_(v3);
  }
  if ( !*((_QWORD *)this + 6) )
  {
    v9 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Graphics.Holographic.Internal.HolographicDisplayMonitorManager",
      0x47u,
      0x46u);
    v4 = v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
    v5 = Windows::Foundation::ActivateInstance<Windows::Graphics::Holographic::Internal::IHolographicDisplayMonitorManager>(
           v4,
           (_QWORD *)this + 6);
    if ( v5 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v5,
        (int)hstringHeader.Reserved.Reserved1);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6));
    if ( v6 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xBF,
        (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v6,
        (int)hstringHeader.Reserved.Reserved1);
  }
  if ( !*((_QWORD *)this + 10) )
  {
    Instance = CAnalogCompositorManager::GetInstance();
    CAnalogCompositorManager::InitializeDisplayManager(Instance);
  }
}
