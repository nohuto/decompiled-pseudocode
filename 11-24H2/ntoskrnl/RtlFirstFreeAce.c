/*
 * XREFs of RtlFirstFreeAce @ 0x1409943D0
 * Callers:
 *     RtlAddAccessFilterAce @ 0x14077FAB0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14077FDD0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140780194 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1407967E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796A24 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796B84 (SddlAddScopedPolicyIDAce.c)
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
