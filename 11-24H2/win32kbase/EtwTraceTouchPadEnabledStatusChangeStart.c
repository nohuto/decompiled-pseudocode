/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStart @ 0x1401B4F40
 * Callers:
 *     EnablePTPDevices @ 0x1401B16B0 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchPadEnabledStatusChangeStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadEnabledStatusChangeStart, &W32kControlGuid);
  return result;
}
