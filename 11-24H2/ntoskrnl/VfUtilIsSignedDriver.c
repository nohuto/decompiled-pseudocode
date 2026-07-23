/*
 * XREFs of VfUtilIsSignedDriver @ 0x14060E8C8
 * Callers:
 *     ViMiscEnforceRule @ 0x140BA1480 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140B853C0 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
