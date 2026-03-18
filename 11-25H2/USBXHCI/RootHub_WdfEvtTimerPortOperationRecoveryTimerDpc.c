/*
 * XREFs of RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x14004B3F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc(__int64 a1)
{
  __int64 **v1; // rax
  __int64 *v2; // rdx
  __int64 v3; // rbx
  int v5; // [rsp+28h] [rbp-20h]

  v1 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B268);
  v2 = *v1;
  v3 = **v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *((_DWORD *)v2 + 2);
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      (_DWORD)v2,
      11,
      218,
      (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
      v5);
  }
  return Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4133, 0, 0LL, 0LL, 0LL);
}
