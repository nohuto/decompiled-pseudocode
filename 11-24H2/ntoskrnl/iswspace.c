/*
 * XREFs of iswspace @ 0x1404FEB30
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1407970EC (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x14085FAE0 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAF494 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x140500C30 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
