/*
 * XREFs of SeReleaseAcl @ 0x140997EBC
 * Callers:
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
