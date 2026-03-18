/*
 * XREFs of CommonBuffer_FlushWorkItems @ 0x140031998
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x140038BB0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_InitiateRecovery @ 0x1400409DC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall CommonBuffer_FlushWorkItems(_QWORD *a1)
{
  void *i; // rcx
  NTSTATUS result; // eax
  int v4; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -600000000LL;
  for ( i = a1 + 3; ; i = a1 + 3 )
  {
    result = KeWaitForSingleObject(i, Executive, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 72LL), v4, 8, 16, (__int64)&WPP_ab4b74589bd330f105f5531a87063139_Traceguids);
    }
  }
  if ( a1[9] )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 3056))(WdfDriverGlobals);
  return result;
}
