/*
 * XREFs of SepShouldSetDelinkFlags @ 0x140A418BC
 * Callers:
 *     SepInternalSetSecurityAttributesToken @ 0x1402914F4 (SepInternalSetSecurityAttributesToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x140360FB8 (SepPotentialGlobalTableAttribute.c)
 */

char __fastcall SepShouldSetDelinkFlags(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  unsigned int i; // edi
  const UNICODE_STRING *v6; // rcx

  v2 = 0;
  if ( *a1 == 1 )
    return 1;
  for ( i = 0; i < *(_DWORD *)(a2 + 4); ++i )
  {
    v6 = (const UNICODE_STRING *)(*(_QWORD *)(a2 + 8) + 40LL * i);
    if ( v6 && SepPotentialGlobalTableAttribute(v6) )
      return 1;
  }
  return v2;
}
