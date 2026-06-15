/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18006AD9C
 * Callers:
 *     ?RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@_JPEAUSystemAudioStream@@@Z @ 0x1800F36B8 (-RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudi.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _DWORD v8[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v9; // [rsp+40h] [rbp-31h]
  unsigned __int16 *v10; // [rsp+50h] [rbp-21h] BYREF
  int v11; // [rsp+58h] [rbp-19h]
  int v12; // [rsp+5Ch] [rbp-15h]
  unsigned __int8 *v13; // [rsp+60h] [rbp-11h]
  int v14; // [rsp+68h] [rbp-9h]
  int v15; // [rsp+6Ch] [rbp-5h]
  __int64 v16; // [rsp+70h] [rbp-1h]
  __int64 v17; // [rsp+78h] [rbp+7h]
  __int64 v18; // [rsp+80h] [rbp+Fh]
  __int64 v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+1Fh]
  __int64 v21; // [rsp+98h] [rbp+27h]

  v20 = a7;
  v18 = a6;
  v16 = a5;
  v8[0] = *a2 << 24;
  v8[1] = *(unsigned __int16 *)(a2 + 1);
  v9 = *(_QWORD *)(a2 + 3);
  v10 = *(unsigned __int16 **)(a1 + 8);
  v21 = 8LL;
  v19 = 8LL;
  v17 = 4LL;
  v11 = *v10;
  v14 = *(unsigned __int16 *)(a2 + 11);
  v13 = a2 + 11;
  v12 = 2;
  v15 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v8, 0LL, 0LL, 5, &v10);
}
