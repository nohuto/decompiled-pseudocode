/*
 * XREFs of PipDmgIsDmaVerifierEnabled @ 0x1407251B4
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x140724E90 (PipDmgGetDeviceDmarPolicy.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140A84EFC (PipDmgGetDriverDmarCompatLevel.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     VfTargetDriversIsEnabled @ 0x140BA9F30 (VfTargetDriversIsEnabled.c)
 */

bool __fastcall PipDmgIsDmaVerifierEnabled(__int64 a1)
{
  return (unsigned int)VfIsVerifierEnabled()
      && (VfRuleClasses & 0x400000) == 0
      && (MmVerifierData & 0x80u) != 0
      && (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24)) != 0;
}
