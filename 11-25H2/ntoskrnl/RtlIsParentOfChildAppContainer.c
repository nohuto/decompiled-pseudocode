/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1406EF480
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x140785BC0 (SepIsParentOfChildAppContainer.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x140998C54 (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x140A08CB8 (SepSetTokenCapabilities.c)
 *     SepCheckCreateLowBox @ 0x140A6B954 (SepCheckCreateLowBox.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140984120 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  RtlGetAppContainerSidType(Sid);
  return 0;
}
