/*
 * XREFs of EtwTraceLegacyTouchPadDetected @ 0x14015A0F0
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x14017D3A4 (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceLegacyTouchPadDetected(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &LegacyTouchPadDetected, &W32kControlGuid);
  return result;
}
