/*
 * XREFs of ?FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@Z @ 0x1800F1F34
 * Callers:
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEAAJAEBQEAUIBtAudioResourceManager@@W4TOKEN_ACQUIRE_OPTION@@PEAPEAUIUnknown@@@Z @ 0x1800F08E0 (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpoi_ea_1800F08E0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180003528 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180054958 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@Z @ 0x1800F0B34 (--$ForEachActiveToken_no_lock@AEAV_lambda_3720d3886a248492bbf7204fca5313c6_@@@-$TokenManager@VCB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBluetoothAudioEndpointResourceManagerProvider::FreeTokensForContext(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v4; // rbx
  struct AudioSrvTelemetryProvider *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp+7h] BYREF
  RTL_SRWLOCK *v11; // [rsp+48h] [rbp+Fh] BYREF
  unsigned __int64 *v12[2]; // [rsp+50h] [rbp+17h] BYREF
  ULONGLONG TickCount64; // [rsp+60h] [rbp+27h] BYREF
  const WCHAR *v14; // [rsp+68h] [rbp+2Fh] BYREF
  _BYTE v15[16]; // [rsp+70h] [rbp+37h] BYREF

  v10 = 0LL;
  TickCount64 = GetTickCount64();
  v12[0] = &TickCount64;
  v12[1] = (unsigned __int64 *)&v10;
  v4 = *(RTL_SRWLOCK **)(a3 + 8);
  if ( *(_BYTE *)a3 )
  {
    AcquireSRWLockShared(v4);
    v11 = v4;
    TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_3720d3886a248492bbf7204fca5313c6_ &>(
      *(_QWORD *)(a3 + 8),
      v12);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  }
  else
  {
    TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::ForEachActiveToken_no_lock<_lambda_3720d3886a248492bbf7204fca5313c6_ &>(
      (__int64)v4,
      v12);
  }
  if ( v10 )
  {
    v5 = AudioSrvTelemetryProvider::Instance();
    v6 = (_DWORD *)*((_QWORD *)v5 + 1);
    if ( *v6 > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 0x4000LL) )
    {
      v11 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 96LL))(v10);
      v14 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
      v12[0] = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 56LL))(v10, v15);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (int)v6,
        (int)&unk_1801AC048,
        v7,
        v8,
        (__int64 *)v12,
        &v14,
        (const WCHAR **)&v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
  }
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
}
