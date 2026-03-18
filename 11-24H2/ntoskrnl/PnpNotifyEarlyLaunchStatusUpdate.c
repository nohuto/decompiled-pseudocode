/*
 * XREFs of PnpNotifyEarlyLaunchStatusUpdate @ 0x140BDEB00
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C633C4 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14044B6C4 (ExNotifyWithProcessing.c)
 *     PnpDiagnosticTraceElamStatus @ 0x1405A481C (PnpDiagnosticTraceElamStatus.c)
 */

__int64 __fastcall PnpNotifyEarlyLaunchStatusUpdate(int a1)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  if ( PnpBootDriverCallbackObject )
  {
    PnpDiagnosticTraceElamStatus(&KMPnPEvt_EarlyLaunch_StatusNotification_Start, a1);
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[0] = PnpEarlyLaunchStatusNotificationPreProcess;
    v4 = a1;
    v3[3] = &v4;
    ExNotifyWithProcessing((__int64)PnpBootDriverCallbackObject, 0LL, &v5, v3);
    return PnpDiagnosticTraceElamStatus(&KMPnPEvt_EarlyLaunch_StatusNotification_Stop, a1);
  }
  return result;
}
