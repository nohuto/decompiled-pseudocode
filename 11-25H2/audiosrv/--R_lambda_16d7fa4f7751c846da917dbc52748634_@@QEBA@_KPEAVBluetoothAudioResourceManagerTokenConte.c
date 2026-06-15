/*
 * XREFs of ??R_lambda_16d7fa4f7751c846da917dbc52748634_@@QEBA@_KPEAVBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@@Z @ 0x1800EC95C
 * Callers:
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@Z @ 0x1800EBADC (--$ForEachActiveToken_no_lock@AEAV_lambda_16d7fa4f7751c846da917dbc52748634_@@@-$TokenManager@VCB.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180003414 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_16d7fa4f7751c846da917dbc52748634_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct AudioSrvTelemetryProvider *v5; // rax
  _DWORD *v6; // rbx
  const WCHAR *v7; // rax
  __int64 v8; // rcx
  const WCHAR *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const WCHAR *v13; // [rsp+40h] [rbp-38h] BYREF
  const WCHAR *v14; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+58h] [rbp-20h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 16) + 88LL))(*(_QWORD *)(a3 + 16));
  if ( !(_BYTE)result )
  {
    v5 = AudioSrvTelemetryProvider::Instance();
    v6 = (_DWORD *)*((_QWORD *)v5 + 1);
    if ( *v6 > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 0x4000LL) )
    {
      v7 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 16) + 80LL))(*(_QWORD *)(a3 + 16));
      v8 = *(_QWORD *)(a3 + 16);
      v13 = v7;
      v9 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
      v10 = *(_QWORD *)(a3 + 16);
      v14 = v9;
      v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 40LL))(v10, v16);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (int)v6,
        (int)&unk_1801A1407,
        v11,
        v12,
        &v15,
        &v14,
        &v13);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 16) + 64LL))(*(_QWORD *)(a3 + 16));
  }
  return result;
}
