/*
 * XREFs of Endpoint_UcxEvtEndpointPurge @ 0x1400219B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140021C28 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqd @ 0x14002C170 (WPP_RECORDER_SF_ddqd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall Endpoint_UcxEvtEndpointPurge(__int64 a1, __int64 a2)
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
  if ( *(_BYTE *)(v3 + 37) && (v8 = *(_QWORD *)(v3 + 136)) != 0 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 16) = v9;
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (_UNKNOWN **)WPP_RECORDER_SF_ddqd(v6[10], v9, v5, 36);
    for ( i = 1; i <= *(_DWORD *)(v8 + 8); ++i )
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 1320))(
                              WdfDriverGlobals,
                              *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + v6[17] + 48) + 72LL),
                              Endpoint_WdfEvtPurgeComplete,
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
        37,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        a2);
    }
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 1320))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v6[11] + 72LL),
                          Endpoint_WdfEvtPurgeComplete,
                          a2);
  }
  return result;
}
