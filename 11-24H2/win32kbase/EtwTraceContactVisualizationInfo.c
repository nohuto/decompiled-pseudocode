/*
 * XREFs of EtwTraceContactVisualizationInfo @ 0x140144D50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140090DE4 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceContactVisualizationInfo(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &ContactVisualizationInfo, a3, a1);
  return result;
}
