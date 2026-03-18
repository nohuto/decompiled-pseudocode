/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x140A1E178
 * Callers:
 *     PdcPoResiliencyClient @ 0x140A1E110 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14044EE8C (PpmQueryTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140493488 (PopAccumulateNonActivatedCpuTime.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 */

void __fastcall __noreturn PopPdcIdleResiliencyCallback(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = (unsigned __int8)a2;
  PopAcquirePolicyLock(a1, a2);
  PopPdcIdleResiliency = v2;
  v3 = v2;
  PopSetPowerSettingValue(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 0xFFFFFFFF, 0, 4u, &v3);
  PopSetPowerSettingValue(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 0xFFFFFFFF, 1, 4u, &v3);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(v2, &qword_140E27A20, &qword_140E27A28);
  PpmQueryTime();
}
