/*
 * XREFs of PipDmgIsDmaVerifierEnabled @ 0x140727624
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x140727300 (PipDmgGetDeviceDmarPolicy.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140A88AFC (PipDmgGetDriverDmarCompatLevel.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     VfTargetDriversIsEnabled @ 0x140BA7F30 (VfTargetDriversIsEnabled.c)
 */

bool __fastcall PipDmgIsDmaVerifierEnabled(__int64 a1)
{
  return (unsigned int)VfIsVerifierEnabled()
      && (VfRuleClasses & 0x400000) == 0
      && (MmVerifierData & 0x80u) != 0
      && (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24)) != 0;
}
