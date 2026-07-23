/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x1407708D0
 * Callers:
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x140771014 (RtlpAddKnownObjectAce.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 6);
  else
    return RtlpAddKnownAce((int)Acl, AceRevision, AceFlags, AccessMask, Sid, 1);
}
