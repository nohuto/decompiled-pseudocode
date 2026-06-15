/*
 * XREFs of ??R_lambda_0fa234ae80d704de24dec8d2b8264a81_@@QEBA@_KPEAVBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@@Z @ 0x1800F198C
 * Callers:
 *     ??$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAXAEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@Z @ 0x1800F0A8C (--$ForEachActiveToken_no_lock@AEAV_lambda_0fa234ae80d704de24dec8d2b8264a81_@@@-$TokenManager@VCB.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x180003528 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BYTE *__fastcall _lambda_0fa234ae80d704de24dec8d2b8264a81_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *result; // rax
  struct AudioSrvTelemetryProvider *v6; // rax
  _DWORD *v7; // rdi
  const WCHAR *v8; // rax
  __int64 v9; // rcx
  const WCHAR *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const WCHAR *v14; // [rsp+40h] [rbp-38h] BYREF
  const WCHAR *v15; // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-20h] BYREF

  result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 16) + 104LL))(*(_QWORD *)(a3 + 16));
  if ( !(_BYTE)result )
  {
    v6 = AudioSrvTelemetryProvider::Instance();
    v7 = (_DWORD *)*((_QWORD *)v6 + 1);
    if ( *v7 > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 0x4000LL) )
    {
      v8 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 16) + 96LL))(*(_QWORD *)(a3 + 16));
      v9 = *(_QWORD *)(a3 + 16);
      v14 = v8;
      v10 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 88LL))(v9);
      v11 = *(_QWORD *)(a3 + 16);
      v15 = v10;
      v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 56LL))(v11, v17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (int)v7,
        (int)&unk_1801AC048,
        v12,
        v13,
        &v16,
        &v15,
        &v14);
    }
    if ( **(_BYTE **)a1 )
      Sleep(**(_DWORD **)(a1 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 16) + 80LL))(*(_QWORD *)(a3 + 16));
    result = *(_BYTE **)(a1 + 16);
    *result = 1;
  }
  return result;
}
