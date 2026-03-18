/*
 * XREFs of EtwTraceTHQAStart @ 0x1400A6820
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1400A8638 (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTHQAStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &THQAStart, &W32kControlGuid);
  return result;
}
