/*
 * XREFs of SepReleaseAuditPolicy @ 0x1407924CC
 * Callers:
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
