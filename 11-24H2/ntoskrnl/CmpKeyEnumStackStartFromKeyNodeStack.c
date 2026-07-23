/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x140908D64
 * Callers:
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140908BE8 (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackStart @ 0x140908FBC (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14090A384 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
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
