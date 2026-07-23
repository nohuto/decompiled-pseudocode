/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x18013FE20
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x180163DF0 (NtPowerInformation.c)
 */

NTSTATUS RtlRestoreSystemBootStatusDefaults(void)
{
  _QWORD v1[5]; // [rsp+30h] [rbp-28h] BYREF

  v1[0] = 35LL;
  v1[1] = 0LL;
  v1[2] = 0LL;
  return NtPowerInformation(PowerInformationInternal, v1, 0x18u, 0LL, 0);
}
