/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x140973E5C
 * Callers:
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140975FC0 (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackStart @ 0x140974128 (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14097561C (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
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
