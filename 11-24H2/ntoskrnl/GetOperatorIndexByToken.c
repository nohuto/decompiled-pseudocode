/*
 * XREFs of GetOperatorIndexByToken @ 0x1408608F8
 * Callers:
 *     LocalGetConditionForString @ 0x14085FAE0 (LocalGetConditionForString.c)
 *     LocalpGetStringForCondition @ 0x140861744 (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOperatorIndexByToken(char a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx

  result = 0LL;
  v2 = &qword_1400013C8;
  while ( (unsigned int)result < 0x18 )
  {
    if ( *(_BYTE *)v2 == a1 )
      return result;
    result = (unsigned int)(result + 1);
    v2 += 3;
  }
  return 0xFFFFFFFFLL;
}
