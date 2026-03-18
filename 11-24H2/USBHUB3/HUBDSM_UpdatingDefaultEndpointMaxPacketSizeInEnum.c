/*
 * XREFs of HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x140024F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028C5C (HUBUCX_SubmitUcxIoctl.c)
 *     HUBMISC_SetDeviceVersionFlag @ 0x140033764 (HUBMISC_SetDeviceVersionFlag.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         *(_QWORD *)(v1 + 440),
         0LL);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_DWORD *)v2 = 40;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(*(_QWORD *)v1 + 248LL);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(v1 + 24);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v1 + 88);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(v1 + 160);
  v3 = HUBUCX_SubmitUcxIoctl(v1, 4788283LL);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x20u,
      (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
      v5);
  }
  HUBMISC_SetDeviceVersionFlag(v1);
  return 1000LL;
}
