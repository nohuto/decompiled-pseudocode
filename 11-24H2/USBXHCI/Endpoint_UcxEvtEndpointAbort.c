/*
 * XREFs of Endpoint_UcxEvtEndpointAbort @ 0x1400017E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140001BE8 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqd @ 0x14002C4C0 (WPP_RECORDER_SF_ddqd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall Endpoint_UcxEvtEndpointAbort(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  _QWORD *v6; // rbx
  _UNKNOWN **result; // rax
  __int64 v8; // rdi
  int v9; // edx
  unsigned int i; // ebp

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006AFE8);
  v6 = (_QWORD *)v3;
  if ( *(_BYTE *)(v3 + 37) )
  {
    v8 = *(_QWORD *)(v3 + 144);
    v9 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 16) = v9;
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (_UNKNOWN **)WPP_RECORDER_SF_ddqd(v6[10], v9, v5, 42);
    for ( i = 1; i <= *(_DWORD *)(v8 + 8); ++i )
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 3344))(
                              WdfDriverGlobals,
                              *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + v6[18] + 48) + 72LL),
                              Endpoint_WdfEvtAbortComplete,
                              a2);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v3 + 80),
        v4,
        13,
        43,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152),
        a2);
    }
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 3344))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v6[11] + 72LL),
                          Endpoint_WdfEvtAbortComplete,
                          a2);
  }
  return result;
}
