/*
 * XREFs of VfUtilGetSigningLevel @ 0x140B833C0
 * Callers:
 *     VfUtilIsSignedDriver @ 0x140610308 (VfUtilIsSignedDriver.c)
 *     CarReportDifPluginRuleViolation @ 0x140617240 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140BA7E7C (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VfUtilGetSigningLevel(__int64 a1)
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
