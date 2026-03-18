/*
 * XREFs of SeReleaseAcl @ 0x140936364
 * Callers:
 *     NtCreateTokenEx @ 0x140936AB0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
