/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x14077F9C0
 * Callers:
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x140780194 (RtlpAddKnownObjectAce.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 5);
  else
    return RtlpAddKnownAce((int)Acl, AceRevision, AceFlags, AccessMask, Sid, 0);
}
