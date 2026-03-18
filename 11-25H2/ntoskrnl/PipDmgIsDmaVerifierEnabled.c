/*
 * XREFs of PipDmgIsDmaVerifierEnabled @ 0x14071B6A4
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x14071B380 (PipDmgGetDeviceDmarPolicy.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140A83FDC (PipDmgGetDriverDmarCompatLevel.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1404BD130 (VfIsVerifierEnabled.c)
 *     VfTargetDriversIsEnabled @ 0x140B97F50 (VfTargetDriversIsEnabled.c)
 */

bool __fastcall PipDmgIsDmaVerifierEnabled(__int64 a1)
{
  return (unsigned int)VfIsVerifierEnabled()
      && (VfRuleClasses & 0x400000) == 0
      && (MmVerifierData & 0x80u) != 0
      && (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24)) != 0;
}
