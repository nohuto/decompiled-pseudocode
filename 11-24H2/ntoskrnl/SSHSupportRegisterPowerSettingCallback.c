/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x140767938
 * Callers:
 *     SshInitialize @ 0x140C341AC (SshInitialize.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
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
