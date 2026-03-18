/*
 * XREFs of EtwTraceTHQAStop @ 0x1C013B0E0
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1C01B379C (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF238 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTHQAStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &THQAStop, &W32kControlGuid);
  return result;
}
