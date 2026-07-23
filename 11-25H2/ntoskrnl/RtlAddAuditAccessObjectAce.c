/*
 * XREFs of RtlAddAuditAccessObjectAce @ 0x140770BC0
 * Callers:
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x140771014 (RtlpAddKnownObjectAce.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  ULONG v9; // eax
  int v10; // r8d

  v9 = AceFlags | 0x40;
  if ( !AuditSuccess )
    v9 = AceFlags;
  v10 = v9 | 0x80;
  if ( !AuditFailure )
    v10 = v9;
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 7);
  else
    return RtlpAddKnownAce((int)Acl, AceRevision, v10, AccessMask, Sid, 2);
}
