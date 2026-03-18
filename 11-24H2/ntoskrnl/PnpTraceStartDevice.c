/*
 * XREFs of PnpTraceStartDevice @ 0x14043B570
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14043B090 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14043B5F8 (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // cx
  unsigned __int64 v5; // rdx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v3) = 0;
  if ( a3 )
  {
    v5 = *(_QWORD *)(a3 + 24);
    v6 = 0LL;
    RtlImageNtHeaderEx(1, v5, 0LL, &v6);
    v3 = *(_WORD *)(v6 + 70);
  }
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, v3);
  return 0LL;
}
