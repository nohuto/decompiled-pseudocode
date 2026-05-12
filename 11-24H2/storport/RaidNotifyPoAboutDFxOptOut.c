/*
 * XREFs of RaidNotifyPoAboutDFxOptOut @ 0x1400BE264
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1400781BC (RaidRegisterForRuntimePowerManagement.c)
 *     NvmeRegisterForRuntimePowerManagement @ 0x140136338 (NvmeRegisterForRuntimePowerManagement.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidNotifyPoAboutDFxOptOut(__int64 a1, char a2)
{
  int v2; // eax
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v4[1] = a1;
  v6 = 0;
  v4[0] = 58LL;
  v2 = 2;
  if ( a2 )
    v2 = 6;
  v5 = v2;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, v4, 0x18u, 0LL, 0);
}
