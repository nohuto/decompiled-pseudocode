/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x140A27118
 * Callers:
 *     PdcPoResiliencyClient @ 0x140A270B0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14044D624 (PpmQueryTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140495D14 (PopAccumulateNonActivatedCpuTime.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
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
  PopAccumulateNonActivatedCpuTime(v2, &qword_140E27C60, &qword_140E27C68);
  PpmQueryTime();
}
