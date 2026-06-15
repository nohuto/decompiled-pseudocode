/*
 * XREFs of ??1CAudioSrv@@UEAA@XZ @ 0x1800CC2E4
 * Callers:
 *     ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800CC7C0 (--_GCAudioSrv@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?RemoveAll@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAXXZ @ 0x180059B98 (-RemoveAll@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180075D20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180075D20.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C1648 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800CC41C (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSrv::~CAudioSrv(CAudioSrv *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  struct AudioSrvTelemetryProvider *v3; // rax
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  _DWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  wil::details *v8; // rcx
  DWORD CurrentProcessId; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 11);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 11) = 0LL;
  v3 = AudioSrvTelemetryProvider::Instance();
  v5 = (_DWORD *)*((_QWORD *)v3 + 1);
  if ( *v5 > 4u && tlgKeywordOn(*((_QWORD *)v3 + 1), 128LL) )
  {
    CurrentProcessId = GetCurrentProcessId();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_1801A0499,
      v6,
      v7,
      (__int64)&CurrentProcessId);
  }
  v8 = (wil::details *)*((_QWORD *)this + 59);
  if ( v8 )
    wil::details::delete_wnf_subscription_state(v8, v4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 58);
  CSerialWorkQueue::~CSerialWorkQueue((CAudioSrv *)((char *)this + 336));
  CSerialWorkQueue::~CSerialWorkQueue((CAudioSrv *)((char *)this + 208));
  ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveAll((__int64 *)this + 19);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  *(_QWORD *)this = &IAudioService::`vftable';
}
