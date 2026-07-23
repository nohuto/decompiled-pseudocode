/*
 * XREFs of RtlGetAce @ 0x180066C30
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v4; // r9
  ULONG i; // edx
  ACL *v6; // rax

  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u || AceIndex >= Acl->AceCount )
    return -1073741811;
  v4 = Acl + 1;
  for ( i = 0; ; ++i )
  {
    *Ace = v4;
    v6 = (PACL)((char *)Acl + Acl->AclSize);
    if ( i >= AceIndex )
      break;
    if ( v4 >= v6 )
      return -1073741811;
    v4 = (PACL)((char *)v4 + v4->AclSize);
  }
  if ( v4 >= v6 )
    return -1073741811;
  else
    return 0;
}
