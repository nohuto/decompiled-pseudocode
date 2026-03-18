/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x140757FAC
 * Callers:
 *     SshpUninitialize @ 0x140C2301C (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140A74AA0 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
