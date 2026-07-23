/*
 * XREFs of RtlFirstFreeAce @ 0x1800D9A70
 * Callers:
 *     RtlAddAccessFilterAce @ 0x180138F00 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1801391B0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x180139330 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1801396C0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x180139890 (RtlpAddKnownObjectAce.c)
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
