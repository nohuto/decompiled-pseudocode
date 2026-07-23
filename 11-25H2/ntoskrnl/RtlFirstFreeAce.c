/*
 * XREFs of RtlFirstFreeAce @ 0x1409A71C0
 * Callers:
 *     RtlAddAccessFilterAce @ 0x140770930 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140770C50 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140771014 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140787308 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140787544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1407876A4 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v2; // eax
  PACL v3; // r8

  v2 = 0;
  v3 = Acl + 1;
  *FirstFree = 0LL;
  while ( v2 < Acl->AceCount )
  {
    if ( v3 >= (PACL)((char *)Acl + Acl->AclSize) )
      return 0;
    ++v2;
    v3 = (PACL)((char *)v3 + v3->AclSize);
  }
  if ( v3 <= (PACL)((char *)Acl + Acl->AclSize) )
    *FirstFree = v3;
  return 1;
}
