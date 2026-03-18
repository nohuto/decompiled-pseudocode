/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x140757F78
 * Callers:
 *     SshInitialize @ 0x140C22EE0 (SshInitialize.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportRegisterPowerSettingCallback()
{
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           SshpPowerSettingCallback,
           0LL,
           &SshpPowerSettingHandle);
}
