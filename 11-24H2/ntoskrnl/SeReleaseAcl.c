/*
 * XREFs of SeReleaseAcl @ 0x140985BDC
 * Callers:
 *     NtCreateTokenEx @ 0x140983E20 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
