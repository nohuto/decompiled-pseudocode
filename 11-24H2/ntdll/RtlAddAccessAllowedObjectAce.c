/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x180138E40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x180139890 (RtlpAddKnownObjectAce.c)
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
    return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
