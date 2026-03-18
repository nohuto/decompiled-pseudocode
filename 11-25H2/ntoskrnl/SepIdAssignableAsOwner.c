/*
 * XREFs of SepIdAssignableAsOwner @ 0x14091C2A4
 * Callers:
 *     SepValidOwnerSubjectContext @ 0x14091C194 (SepValidOwnerSubjectContext.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * a2 + 8) & 8) != 0;
}
