/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x180107CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180018F50 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAceEx(PACL Acl, ULONG AceRevision, ULONG AceFlags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 1);
}
