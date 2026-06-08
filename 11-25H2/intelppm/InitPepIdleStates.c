/*
 * XREFs of InitPepIdleStates @ 0x14003933C
 * Callers:
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x140039D18 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x140040220 (PepNotifyReportCStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1400435B0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 */

__int64 __fastcall InitPepIdleStates(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
  {
    v2 = PepNotifyReportCStates(a1);
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xAu,
        (__int64)&WPP_26d143b2c37434b937c9d64095e12d77_Traceguids,
        v7);
    }
  }
  v8 = 0LL;
  v3 = -1073741823;
  if ( (*(_QWORD *)(a1 + 280) & 0x200000200LL) != 0 )
  {
    v4 = PepNotifyQueryProcessorIdleStatesV2(a1, &v8);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v6) = v4;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xBu,
          (__int64)&WPP_26d143b2c37434b937c9d64095e12d77_Traceguids,
          v6);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019198,
    0LL);
  *(_QWORD *)(a1 + 1144) = v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019198);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  ProcLibTraceGetProcessorIdleStatesV2(a1, 0LL);
  return v3;
}
