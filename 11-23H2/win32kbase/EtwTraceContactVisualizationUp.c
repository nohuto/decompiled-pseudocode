/*
 * XREFs of EtwTraceContactVisualizationUp @ 0x1C0138D20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF238 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceContactVisualizationUp(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &ContactVisualizationUp, &W32kControlGuid);
  return result;
}
