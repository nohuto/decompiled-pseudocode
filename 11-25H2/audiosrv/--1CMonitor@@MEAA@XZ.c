/*
 * XREFs of ??1CMonitor@@MEAA@XZ @ 0x180114718
 * Callers:
 *     ??_ECMonitor@@MEAAPEAXI@Z @ 0x18010F9D0 (--_ECMonitor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     WPP_SF_qq @ 0x1800A5DA4 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     ??1?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ @ 0x18010F494 (--1-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CMonitor::~CMonitor(CMonitor *this)
{
  _UNKNOWN **v2; // rcx
  volatile int *v3; // rdx
  volatile int *v4; // rdx

  *(_QWORD *)this = &CMonitor::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      this);
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 25) )
  {
    if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x800000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_qq((__int64)v2[2], 0x18u, (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
    CloseThreadpoolWork(*((PTP_WORK *)this + 25));
    *((_QWORD *)this + 25) = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 23);
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::~CComPtrBase<CMonitor::CMonitorNotification>(
    (__int64 *)this + 22,
    v3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 20);
  CoTaskMemFree(*((LPVOID *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::~CComPtrBase<CMonitor::CMonitorNotification>(
    (__int64 *)this + 18,
    v4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 15);
  CoTaskMemFree(*((LPVOID *)this + 14));
  *((_QWORD *)this + 14) = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 13);
  CoTaskMemFree(*((LPVOID *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>((__int64)this);
}
