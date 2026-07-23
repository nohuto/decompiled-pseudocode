/*
 * XREFs of PnpTraceStartDevice @ 0x140463CF8
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1404639C0 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140463D80 (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 MinorImageVersion; // cx
  void *v5; // rdx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(MinorImageVersion) = 0;
  if ( a3 )
  {
    v5 = *(void **)(a3 + 24);
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, v5, 0LL, &OutHeaders);
    MinorImageVersion = OutHeaders->OptionalHeader.MinorImageVersion;
  }
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, MinorImageVersion);
  return 0LL;
}
