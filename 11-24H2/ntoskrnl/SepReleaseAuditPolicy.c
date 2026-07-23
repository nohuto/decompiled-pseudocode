/*
 * XREFs of SepReleaseAuditPolicy @ 0x14079249C
 * Callers:
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
