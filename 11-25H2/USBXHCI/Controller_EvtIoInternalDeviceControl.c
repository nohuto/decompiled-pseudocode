/*
 * XREFs of Controller_EvtIoInternalDeviceControl @ 0x1400405F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_EvtIoInternalDeviceControl(__int64 a1, IRP *a2)
{
  unsigned int LowPart; // ebx
  int v5; // edx
  __int64 v6; // rsi
  unsigned int v7; // ebx

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( LowPart == 2232247 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v5, 4, 220, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    v7 = 0;
    Controller_ReportFatalError(v6, 2, 4159, 0, 0LL, 0LL, 0LL);
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01033 + 272))(
             WdfDriverGlobals,
             a1,
             a2);
  }
  return v7;
}
