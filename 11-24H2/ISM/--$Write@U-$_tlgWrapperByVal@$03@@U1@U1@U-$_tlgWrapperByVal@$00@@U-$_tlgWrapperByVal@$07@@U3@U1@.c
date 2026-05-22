/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@533@Z @ 0x180005D90
 * Callers:
 *     ?LogSendStartOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXI_N_K1IW4GestureProcessorType@@@Z @ 0x18011C084 (-LogSendStartOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXI_N_K1IW4GestureProcessorType.c)
 *     ?LogReceiveStartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXI_N_K1PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180142D04 (-LogReceiveStartOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXI_N_K1PEAVBamoDragMana.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _BYTE v13[32]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v14; // [rsp+50h] [rbp-79h]
  __int64 v15; // [rsp+58h] [rbp-71h]
  __int64 v16; // [rsp+60h] [rbp-69h]
  __int64 v17; // [rsp+68h] [rbp-61h]
  __int64 v18; // [rsp+70h] [rbp-59h]
  __int64 v19; // [rsp+78h] [rbp-51h]
  __int64 v20; // [rsp+80h] [rbp-49h]
  __int64 v21; // [rsp+88h] [rbp-41h]
  __int64 v22; // [rsp+90h] [rbp-39h]
  __int64 v23; // [rsp+98h] [rbp-31h]
  __int64 v24; // [rsp+A0h] [rbp-29h]
  __int64 v25; // [rsp+A8h] [rbp-21h]
  __int64 v26; // [rsp+B0h] [rbp-19h]
  __int64 v27; // [rsp+B8h] [rbp-11h]
  __int64 v28; // [rsp+C0h] [rbp-9h]
  __int64 v29; // [rsp+C8h] [rbp-1h]

  v28 = a12;
  v26 = a11;
  v24 = a10;
  v22 = a9;
  v20 = a8;
  v18 = a7;
  v16 = a6;
  v14 = a5;
  v29 = 4LL;
  v27 = 4LL;
  v25 = 8LL;
  v23 = 8LL;
  v21 = 1LL;
  v19 = 4LL;
  v17 = 4LL;
  v15 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 10, v13);
}
