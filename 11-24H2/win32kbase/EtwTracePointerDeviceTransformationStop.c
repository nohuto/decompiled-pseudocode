/*
 * XREFs of EtwTracePointerDeviceTransformationStop @ 0x1400AEFF0
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400AD6BC (rimPopulateContactFrameData.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140090DE4 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceTransformationStop(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"t", a3, a1);
  return result;
}
