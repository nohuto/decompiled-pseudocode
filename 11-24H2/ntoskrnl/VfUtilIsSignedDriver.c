/*
 * XREFs of VfUtilIsSignedDriver @ 0x140610308
 * Callers:
 *     ViMiscEnforceRule @ 0x140B9F480 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140B833C0 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
