/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140004520
 * Callers:
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x14006C3B0 (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x140071240 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ?AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z @ 0x1400727C0 (-AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400DD220 (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1400DD2D4 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportStartDevice@AzTelemetry@@UEAA@XZ @ 0x1400DD424 (--1MiniportStartDevice@AzTelemetry@@UEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140045E80 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int16 **a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // ecx
  _BYTE v10[32]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+50h] [rbp-29h]
  __int64 v12; // [rsp+58h] [rbp-21h]
  _DWORD *v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  __int64 v15; // [rsp+70h] [rbp-9h]
  _DWORD v16[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]

  v19 = a8;
  v17 = a7;
  v13 = v16;
  v20 = 8LL;
  v18 = 4LL;
  v14 = 2LL;
  v8 = **a6;
  v15 = *((_QWORD *)*a6 + 1);
  v16[0] = v8;
  v16[1] = 0;
  v12 = 16LL;
  v11 = *a5;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011A7B0, a2, a3, 0LL, 7, v10);
}
