/*
 * XREFs of PspClearNoWakeChargeLimitNotification @ 0x1408EDB54
 * Callers:
 *     PspEnforceLimits @ 0x1408EBA7C (PspEnforceLimits.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

LONG_PTR PspClearNoWakeChargeLimitNotification()
{
  LONG_PTR result; // rax
  int v1; // [rsp+50h] [rbp+8h] BYREF

  if ( PspNoWakeChargeReferencedProcess )
  {
    v1 = 0;
    ZwUpdateWnfStateData((__int64)&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, (__int64)&v1);
    result = ObfDereferenceObjectWithTag(PspNoWakeChargeReferencedProcess, 0x624A7350u);
    PspNoWakeChargeReferencedProcess = 0LL;
  }
  return result;
}
