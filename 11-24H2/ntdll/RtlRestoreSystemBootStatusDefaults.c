/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x18013C8E0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x180160C20 (NtPowerInformation.c)
 */

NTSTATUS RtlRestoreSystemBootStatusDefaults(void)
{
  _QWORD v1[5]; // [rsp+30h] [rbp-28h] BYREF

  v1[0] = 35LL;
  v1[1] = 0LL;
  v1[2] = 0LL;
  return NtPowerInformation(PowerInformationInternal, v1, 0x18u, 0LL, 0);
}
