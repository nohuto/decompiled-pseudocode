/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x1409152F4
 * Callers:
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140915178 (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackStart @ 0x14091554C (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140916914 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKeyNodeStack(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax

  result = CmpKeyEnumStackStart(a1, *a2);
  if ( (int)result >= 0 )
  {
    CmpKeyEnumStackBeginEnumerationForKeyNodeStack(a1, a2, a3);
    return 0LL;
  }
  return result;
}
