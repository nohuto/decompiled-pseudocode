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

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  ULONG i; // edi
  PULONG v5; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ParentAppContainerSidType
    || RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return 0;
  }
  for ( i = 1; i < 8; ++i )
  {
    v5 = RtlSubAuthoritySid(ParentAppContainerSid, i);
    if ( *v5 != *RtlSubAuthoritySid(ChildAppContainerSid, i) )
      return 0;
  }
  return 1;
}
