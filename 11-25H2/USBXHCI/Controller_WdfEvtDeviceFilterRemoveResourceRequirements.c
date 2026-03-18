/*
 * XREFs of Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x140079E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14003749C (WPP_RECORDER_SF_qq.c)
 *     Etw_ReportFatalError @ 0x14004FBE8 (Etw_ReportFatalError.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x14007C320 (Interrupter_FilterRemoveResourceRequirements.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v4 + 72),
      4u,
      4u,
      0xE1u,
      (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      a1,
      a2);
  v5 = Interrupter_FilterRemoveResourceRequirements(*(_QWORD *)(v4 + 128), a2);
  v7 = v5;
  if ( v5 < 0 )
    Etw_ReportFatalError(v6, v4, 0, 4148, v5, 0LL);
  return v7;
}
