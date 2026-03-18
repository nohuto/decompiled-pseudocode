/*
 * XREFs of HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x14002896C
 * Callers:
 *     HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake @ 0x1400235B0 (HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake.c)
 *     HUBDSM_PurgingDeviceIoOnPrepareForHibernate @ 0x140023610 (HUBDSM_PurgingDeviceIoOnPrepareForHibernate.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028C5C (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         a1[55],
         0LL);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_DWORD *)v2 = 32;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(*a1 + 248LL);
  *(_QWORD *)(v2 + 16) = a1[3];
  *(_BYTE *)(v2 + 24) = 1;
  result = HUBUCX_SubmitUcxIoctl(a1, 4788271LL);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x46u,
             (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
             v4);
  }
  return result;
}
