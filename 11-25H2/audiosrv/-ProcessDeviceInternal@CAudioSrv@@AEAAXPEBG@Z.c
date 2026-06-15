/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180059BFC
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180059A80 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180041978 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006EE54 (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007230C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, unsigned __int16 *a2)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  char v4; // bl
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointStore *v15; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CAudioSrv *v17; // [rsp+60h] [rbp+20h] BYREF
  struct CEndpointCharacteristics *v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v17 = this;
  v15 = 0LL;
  if ( (int)CEndpointStoreCache::GetEndpointStore(this, a2, &v15) >= 0 )
  {
    v19 = 0LL;
    LODWORD(v17) = 0;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v19);
    if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, unsigned __int16 *, __int64 *))GetDevice)(
           g_DeviceEnumerator,
           a2,
           &v19) >= 0
      && (*(int (__fastcall **)(__int64, CAudioSrv **))(*(_QWORD *)v19 + 48LL))(v19, &v17) >= 0
      && (_DWORD)v17 == 1 )
    {
      v4 = 1;
      v18 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v18);
      GetEndpointCharacteristics(a2, 0, &v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      v4 = 0;
      v5 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 512LL) )
      {
        v18 = (struct CEndpointCharacteristics *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v6,
          byte_1801A03AC,
          v7,
          v8,
          (const WCHAR **)&v18);
      }
      (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 232LL))(
        g_PolicyManager,
        a2);
      LOBYTE(v9) = 1;
      v10 = CAudioSessionManager::Disconnect(*((_QWORD *)v15 + 12), 0LL, v9);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7A5,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
          (const char *)(unsigned int)v10,
          v13);
    }
    v14 = 0LL;
    if ( v19 )
    {
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v14);
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v19)(
             v19,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v14) >= 0 )
      {
        LODWORD(v18) = 0;
        if ( (*(int (__fastcall **)(__int64, struct CEndpointCharacteristics **))(*(_QWORD *)v14 + 24LL))(v14, &v18) >= 0
          && !(_DWORD)v18 )
        {
          LOBYTE(v11) = v4;
          (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int16 *, __int64))(*(_QWORD *)g_PolicyManager
                                                                                            + 240LL))(
            g_PolicyManager,
            a2,
            v11);
          LOBYTE(v12) = v4;
          (*(void (__fastcall **)(struct IMulticastSessionManager *, unsigned __int16 *, __int64))(*(_QWORD *)g_MulticastSessionManager
                                                                                                 + 40LL))(
            g_MulticastSessionManager,
            a2,
            v12);
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  }
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v15);
}
