/*
 * XREFs of Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x140080D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     Controller_IsSecureDevice @ 0x1400328B8 (Controller_IsSecureDevice.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  int v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  __int16 v20; // [rsp+44h] [rbp-3Ch]
  char v21; // [rsp+46h] [rbp-3Ah]
  _QWORD v22[6]; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v23)(__int64, unsigned int); // [rsp+78h] [rbp-8h]

  HIDWORD(v22[0]) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a1,
            off_14006B290);
    v18 = a3;
    v16 = *(unsigned __int8 *)(v11 + 143);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v12 + 72),
      4u,
      0xDu,
      0xBu,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      v16,
      v18);
  }
  v19 = 1287;
  v21 = 0;
  v20 = a3;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v22[0] = 56LL;
  v22[1] = Endpoint_UcxEvtEndpointPurge;
  v22[2] = Endpoint_UcxEvtEndpointStart;
  v22[3] = Endpoint_UcxEvtEndpointAbort;
  v22[4] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v22[5] = Endpoint_UcxEvtDefaultEndpointUpdate;
  if ( Controller_IsSecureDevice(v8) )
    v23 = 0LL;
  else
    v23 = Endpoint_UcxEvtEndpointEnableForwardProgress;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_14006BDD0)(UcxDriverGlobals, a4, v22);
  v9 = Endpoint_Create(a1, a2, a4, (unsigned int)&v19, 0LL, 0LL, 0LL);
  if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a1,
            off_14006B290);
    LODWORD(v17) = v9;
    LODWORD(v15) = *(unsigned __int8 *)(v13 + 143);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v14 + 72),
      2u,
      0xDu,
      0xCu,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      v15,
      v17);
  }
  return (unsigned int)v9;
}
