/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x140767B68
 * Callers:
 *     SshInitialize @ 0x140C362EC (SshInitialize.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
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
