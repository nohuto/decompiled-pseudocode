/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1400381E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x1400442B0 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Controller_UpdateIdleTimeout @ 0x1400822B0 (Controller_UpdateIdleTimeout.c)
 */

_UNKNOWN **__fastcall Controller_IdleTimeoutUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v4; // edx
  _UNKNOWN **result; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v1,
         off_14006B290);
  v3 = 1;
  if ( !(unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline() )
    v3 = (*(_QWORD *)(v2 + 744) & 0x200000LL) != 0 ? 1000 : 1;
  Controller_UpdateIdleTimeout(v2, v3);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    return (_UNKNOWN **)WPP_RECORDER_SF_d(
                          *(_QWORD *)(v2 + 72),
                          v4,
                          4,
                          31,
                          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
                          v3);
  }
  return result;
}
