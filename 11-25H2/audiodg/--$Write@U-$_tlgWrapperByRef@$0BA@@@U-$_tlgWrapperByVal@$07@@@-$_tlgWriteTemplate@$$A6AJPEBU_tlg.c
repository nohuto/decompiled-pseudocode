/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400078BC
 * Callers:
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140005DC0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140006CA8 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // rcx
  _DWORD v9[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v10; // [rsp+40h] [rbp-19h]
  unsigned __int16 *v11; // [rsp+50h] [rbp-9h] BYREF
  int v12; // [rsp+58h] [rbp-1h]
  int v13; // [rsp+5Ch] [rbp+3h]
  unsigned __int8 *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  __int64 v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  __int64 v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  v22 = 0;
  v19 = 0;
  v20 = a6;
  v21 = 8;
  v18 = 16;
  v7 = *a5;
  v9[0] = *a2 << 24;
  v17 = v7;
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v10 = *(_QWORD *)(a2 + 3);
  v11 = *(unsigned __int16 **)(a1 + 8);
  v12 = *v11;
  v15 = *(unsigned __int16 *)(a2 + 11);
  v14 = a2 + 11;
  v13 = 2;
  v16 = 1;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
           *(_QWORD *)(a1 + 32),
           v9,
           0LL,
           0LL,
           4,
           &v11,
           (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata);
}
