/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180062D1C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD v13[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v14; // [rsp+40h] [rbp-61h]
  unsigned __int16 *v15; // [rsp+50h] [rbp-51h]
  int v16; // [rsp+58h] [rbp-49h]
  int v17; // [rsp+5Ch] [rbp-45h]
  unsigned __int8 *v18; // [rsp+60h] [rbp-41h]
  int v19; // [rsp+68h] [rbp-39h]
  int v20; // [rsp+6Ch] [rbp-35h]
  __int64 v21; // [rsp+70h] [rbp-31h]
  __int64 v22; // [rsp+78h] [rbp-29h]
  __int64 v23; // [rsp+80h] [rbp-21h]
  __int64 v24; // [rsp+88h] [rbp-19h]
  __int64 v25; // [rsp+90h] [rbp-11h]
  __int64 v26; // [rsp+98h] [rbp-9h]
  __int64 v27; // [rsp+A0h] [rbp-1h]
  __int64 v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  __int64 v30; // [rsp+B8h] [rbp+17h]

  v30 = 16LL;
  v28 = 8LL;
  v26 = 4LL;
  v10 = *a9;
  v27 = a8;
  v25 = a7;
  v29 = v10;
  v24 = 16LL;
  v22 = 16LL;
  v23 = *a6;
  v11 = *a5;
  v13[0] = *a2 << 24;
  v21 = v11;
  v13[1] = *(unsigned __int16 *)(a2 + 1);
  v14 = *(_QWORD *)(a2 + 3);
  v15 = *(unsigned __int16 **)(a1 + 8);
  v16 = *v15;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  v17 = 2;
  v20 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v13, 0LL, 0LL);
}
