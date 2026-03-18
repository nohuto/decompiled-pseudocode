/*
 * XREFs of Isoch_WdfEvtRingEmptyTimer @ 0x14004C770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall Isoch_WdfEvtRingEmptyTimer(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rbx
  _UNKNOWN **v4; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2568))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v1,
         off_14006B1F0);
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    LOBYTE(v4) = WPP_RECORDER_SF_(
                   *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                   v2,
                   14,
                   11,
                   (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids);
  }
  if ( *(_DWORD *)(v3 + 108) == 4 )
  {
    LOBYTE(v4) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v4 )
      __debugbreak();
  }
  return (char)v4;
}
