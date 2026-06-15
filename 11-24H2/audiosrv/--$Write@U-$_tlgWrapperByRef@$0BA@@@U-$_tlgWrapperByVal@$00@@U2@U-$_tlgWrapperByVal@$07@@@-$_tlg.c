/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180060184
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18009D8FC (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rcx
  _DWORD v11[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h]
  unsigned __int16 *v13; // [rsp+50h] [rbp-39h]
  int v14; // [rsp+58h] [rbp-31h]
  int v15; // [rsp+5Ch] [rbp-2Dh]
  unsigned __int8 *v16; // [rsp+60h] [rbp-29h]
  int v17; // [rsp+68h] [rbp-21h]
  int v18; // [rsp+6Ch] [rbp-1Dh]
  __int64 v19; // [rsp+70h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  __int64 v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  __int64 v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]
  __int64 v25; // [rsp+A0h] [rbp+17h]
  __int64 v26; // [rsp+A8h] [rbp+1Fh]

  v25 = a8;
  v23 = a7;
  v21 = a6;
  v24 = 1LL;
  v22 = 1LL;
  v26 = 8LL;
  v9 = *a5;
  v11[0] = *a2 << 24;
  v19 = v9;
  v11[1] = *(unsigned __int16 *)(a2 + 1);
  v12 = *(_QWORD *)(a2 + 3);
  v13 = *(unsigned __int16 **)(a1 + 8);
  v20 = 16LL;
  v14 = *v13;
  v17 = *(unsigned __int16 *)(a2 + 11);
  v16 = a2 + 11;
  v18 = 1;
  v15 = 2;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v11, 0LL, 0LL);
}
