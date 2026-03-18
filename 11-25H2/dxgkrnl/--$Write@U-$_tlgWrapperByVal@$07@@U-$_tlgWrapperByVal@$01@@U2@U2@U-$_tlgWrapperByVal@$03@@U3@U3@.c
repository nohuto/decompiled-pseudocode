/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U_tlgWrapperBinary@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@555AEBU_tlgWrapperBinary@@6@Z @ 0x14000286C
 * Callers:
 *     ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14006790C (-VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400407F4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
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
        __int64 a12,
        __int64 *a13,
        __int64 *a14)
{
  _BYTE v15[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  _DWORD *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  _DWORD v35[2]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  __int64 v38; // [rsp+100h] [rbp+0h]
  _DWORD v39[2]; // [rsp+108h] [rbp+8h] BYREF

  v36 = v39;
  v37 = 2LL;
  v39[1] = 0;
  v38 = *a14;
  v39[0] = *((unsigned __int16 *)a14 + 4);
  v32 = v35;
  v33 = 2LL;
  v34 = *a13;
  v35[0] = *((unsigned __int16 *)a13 + 4);
  v30 = a12;
  v28 = a11;
  v26 = a10;
  v24 = a9;
  v22 = a8;
  v20 = a7;
  v18 = a6;
  v16 = a5;
  v35[1] = 0;
  v31 = 4LL;
  v29 = 4LL;
  v27 = 4LL;
  v25 = 4LL;
  v23 = 2LL;
  v21 = 2LL;
  v19 = 2LL;
  v17 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14015B5F0, a2, 0LL, 0LL, 14, v15);
}
