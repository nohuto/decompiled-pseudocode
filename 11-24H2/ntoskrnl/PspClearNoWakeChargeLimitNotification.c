/*
 * XREFs of PspClearNoWakeChargeLimitNotification @ 0x14085F384
 * Callers:
 *     PspEnforceLimits @ 0x14085D2AC (PspEnforceLimits.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

LONG_PTR PspClearNoWakeChargeLimitNotification()
{
  LONG_PTR result; // rax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( PspNoWakeChargeReferencedProcess )
  {
    Buffer = 0;
    ZwUpdateWnfStateData(&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
    result = ObfDereferenceObjectWithTag(PspNoWakeChargeReferencedProcess, 0x624A7350u);
    PspNoWakeChargeReferencedProcess = 0LL;
  }
  return result;
}
