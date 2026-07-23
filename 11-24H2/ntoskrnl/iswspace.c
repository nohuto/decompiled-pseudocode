/*
 * XREFs of iswspace @ 0x1404FC3F0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1407971FC (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1408640EC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAA374 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1404FE4F0 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
