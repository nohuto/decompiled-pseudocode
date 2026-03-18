/*
 * XREFs of Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x140080B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceEndpointAdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v9; // rdx
  int v10; // esi
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-41h]
  __int64 v16; // [rsp+38h] [rbp-39h]
  _QWORD v17[10]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v18; // [rsp+98h] [rbp+27h]

  v17[0] = 96LL;
  v17[1] = Endpoint_UcxEvtEndpointPurge;
  v17[2] = Endpoint_UcxEvtEndpointStart;
  v17[3] = Endpoint_UcxEvtEndpointAbort;
  v18 = 0LL;
  v17[4] = Endpoint_UcxEvtEndpointReset;
  v17[5] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v17[6] = Endpoint_UcxEvtEndpointStaticStreamsAdd;
  v17[7] = Endpoint_UcxEvtEndpointStaticStreamsEnable;
  v17[8] = Endpoint_UcxEvtEndpointStaticStreamsDisable;
  v17[9] = Endpoint_UcxEvtEndpointEnableForwardProgress;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_14006BDC8)(UcxDriverGlobals, a6, v17);
  v9 = 0LL;
  if ( a5 && (*(_BYTE *)(a3 + 3) & 3) == 1 && (a5[3] & 0x80u) != 0 )
    v9 = (__int64)&a5[*a5];
  v10 = Endpoint_Create(a1, a2, a6, a3, (__int64)a5, v9, 0LL);
  if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(unsigned __int8 *)(a3 + 2);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a1,
            off_14006B290);
    LODWORD(v16) = (v12 >> 7) + 2 * (*(_BYTE *)(a3 + 2) & 0x7F);
    LODWORD(v15) = *(unsigned __int8 *)(v13 + 143);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v14 + 72),
      2u,
      0xDu,
      0xDu,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      v15,
      v16,
      v10);
  }
  return (unsigned int)v10;
}
