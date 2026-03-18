/*
 * XREFs of SepShouldSetDelinkFlags @ 0x140A42884
 * Callers:
 *     SepInternalSetSecurityAttributesToken @ 0x1403571CC (SepInternalSetSecurityAttributesToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x1403592C8 (SepPotentialGlobalTableAttribute.c)
 */

char __fastcall SepShouldSetDelinkFlags(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  unsigned int i; // edi
  const UNICODE_STRING *v5; // rcx

  v2 = 0;
  if ( *a1 == 1 )
    return 1;
  for ( i = 0; i < *(_DWORD *)(a2 + 4); ++i )
  {
    v5 = (const UNICODE_STRING *)(*(_QWORD *)(a2 + 8) + 40LL * i);
    if ( v5 && SepPotentialGlobalTableAttribute(v5) )
      return 1;
  }
  return v2;
}
