/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C013B390
 * Callers:
 *     EnablePTPDevices @ 0x1C0134C40 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF238 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchPadEnabledStatusChangeStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadEnabledStatusChangeStop, &W32kControlGuid);
  return result;
}
