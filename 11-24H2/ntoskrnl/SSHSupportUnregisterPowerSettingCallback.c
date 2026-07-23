/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x140767B9C
 * Callers:
 *     SshpUninitialize @ 0x140C36428 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140A70C90 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
