/*
 * XREFs of Controller_AudioOffloadWnfStateUpdateWorker @ 0x140040040
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     WnfHelper_PublishUsbXhciAudioOffloadState @ 0x140080494 (WnfHelper_PublishUsbXhciAudioOffloadState.c)
 */

__int64 __fastcall Controller_AudioOffloadWnfStateUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edi
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // edx
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v1,
         off_14006B290);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 1056));
  v3 = *(unsigned __int8 *)(v2 + 1248);
  DynamicLock_Release(*(_QWORD *)(v2 + 1056));
  LOBYTE(v4) = v3;
  result = WnfHelper_PublishUsbXhciAudioOffloadState(v4);
  if ( (int)result >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v2 + 72),
               v6,
               4,
               332,
               (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
               v3);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = result;
    v7 = v3;
    return WPP_RECORDER_SF_dD(
             *(_QWORD *)(v2 + 72),
             2u,
             4u,
             0x14Bu,
             (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
             v7,
             v8);
  }
  return result;
}
