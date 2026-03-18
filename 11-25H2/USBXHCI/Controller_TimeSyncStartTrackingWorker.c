/*
 * XREFs of Controller_TimeSyncStartTrackingWorker @ 0x140042EF0
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1400402E8 (Controller_DetectFrameMicroframeBoundary.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_TimeSyncStartTrackingWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // r14d
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // rbp
  __int64 v10; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v1,
         off_14006B290);
  v3 = Controller_DetectFrameMicroframeBoundary(v2);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 1080));
  v4 = (_QWORD *)(v2 + 1104);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v3 < 0 )
      goto LABEL_9;
    v7 = v5[2];
    *((_BYTE *)v5 + 48) = 1;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 120))(
           WdfDriverGlobals,
           *(_QWORD *)(v2 + 1096),
           v7);
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v8,
          4,
          300,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          v3);
      }
LABEL_9:
      v9 = 0LL;
      goto LABEL_10;
    }
    v9 = 9LL;
LABEL_10:
    DynamicLock_Release(*(_QWORD *)(v2 + 1080));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01033 + 2120))(
      WdfDriverGlobals,
      v5[4],
      (unsigned int)v3,
      v9);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 1080));
  }
  v10 = *(_QWORD *)(v2 + 1080);
  *(_BYTE *)(v2 + 1128) = 0;
  return DynamicLock_Release(v10);
}
