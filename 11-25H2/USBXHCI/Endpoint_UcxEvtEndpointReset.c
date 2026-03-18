/*
 * XREFs of Endpoint_UcxEvtEndpointReset @ 0x1400112F0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddqd @ 0x14002C170 (WPP_RECORDER_SF_ddqd.c)
 *     WPP_RECORDER_SF_ddl @ 0x1400482D4 (WPP_RECORDER_SF_ddl.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rbx
  __int64 *v8; // rsi
  int v9; // edx
  int v10; // r8d
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006AFE8);
  v7 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddl(*(_QWORD *)(v4 + 80), *(_DWORD *)(v4 + 1360) == 2, v5, v6);
  v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                    WdfDriverGlobals,
                    a3,
                    off_14006AE88);
  memset(v8, 0, 0x70uLL);
  _m_prefetchw((const void *)(v7 + 32));
  v11 = *(_DWORD *)(v7 + 32);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 32), v11 ^ 0x80, v11);
  }
  while ( v12 != v11 );
  if ( (v11 & 0x80u) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqd(*(_QWORD *)(v7 + 80), v9, v10, 59);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a3,
             0LL);
  }
  else
  {
    *v8 = v7;
    *(_QWORD *)(v7 + 280) = a3;
    *(_DWORD *)(v7 + 288) = 259;
    return ESM_AddEvent((PVOID)(v7 + 296));
  }
}
