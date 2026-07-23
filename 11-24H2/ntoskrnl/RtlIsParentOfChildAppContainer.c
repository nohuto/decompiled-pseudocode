/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1406F8F00
 * Callers:
 *     SepCheckCreateAppContainer @ 0x140792ECC (SepCheckCreateAppContainer.c)
 *     SepIsParentOfChildAppContainer @ 0x140795018 (SepIsParentOfChildAppContainer.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     SepSetTokenCapabilities @ 0x1409854B8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x140A0C9C0 (SepSetTokenPackage.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1409143B0 (RtlGetAppContainerSidType.c)
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
