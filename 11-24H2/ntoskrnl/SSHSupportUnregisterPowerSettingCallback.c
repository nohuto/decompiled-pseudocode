/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x14076796C
 * Callers:
 *     SshpUninitialize @ 0x140C342E8 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140A76B70 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
