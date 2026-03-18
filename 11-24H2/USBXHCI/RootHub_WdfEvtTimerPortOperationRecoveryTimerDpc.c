/*
 * XREFs of RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x14004AAE0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
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
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v5);
  }
  return Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4133, 0, 0LL, 0LL, 0LL);
}
