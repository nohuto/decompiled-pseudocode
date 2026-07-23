/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x14077FA20
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140C26530 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAceEx(PACL Acl, ULONG AceRevision, ULONG AceFlags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce((int)Acl, AceRevision, AceFlags, AccessMask, Sid, 1);
}
