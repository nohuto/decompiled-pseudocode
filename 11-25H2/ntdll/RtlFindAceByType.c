/*
 * XREFs of RtlFindAceByType @ 0x1800EEBE0
 * Callers:
 *     RtlIsUntrustedObject @ 0x18013A880 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r9
  unsigned int i; // r10d

  if ( Acl )
  {
    v4 = Acl + 1;
    for ( i = 0; i < Acl->AceCount; ++i )
    {
      if ( Index )
      {
        if ( i >= *Index && v4->AclRevision == AceType )
        {
          *Index = i;
          return v4;
        }
      }
      else if ( v4->AclRevision == AceType )
      {
        return v4;
      }
      v4 = (PACL)((char *)v4 + v4->AclSize);
    }
  }
  return 0LL;
}
