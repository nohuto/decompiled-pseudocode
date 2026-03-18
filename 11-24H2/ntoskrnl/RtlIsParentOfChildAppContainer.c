/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1406FB2C0
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x140794F90 (SepIsParentOfChildAppContainer.c)
 *     SeTokenCanImpersonate @ 0x140910A30 (SeTokenCanImpersonate.c)
 *     SepSetTokenCapabilities @ 0x140936380 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x140A141B0 (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x140A6CF24 (SepCheckCreateLowBox.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1408F2D70 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  RtlGetAppContainerSidType(Sid);
  return 0;
}
