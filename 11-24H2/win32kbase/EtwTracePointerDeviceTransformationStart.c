/*
 * XREFs of EtwTracePointerDeviceTransformationStart @ 0x1400AF020
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400AD6BC (rimPopulateContactFrameData.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140090DE4 (McTemplateK0d_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTracePointerDeviceTransformationStart(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &PointerDeviceTransformationStart, a3, a1);
  return result;
}
