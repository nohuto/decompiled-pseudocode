/*
 * XREFs of FreeOperandValue @ 0x140864B04
 * Callers:
 *     LocalGetConditionForString @ 0x1408640EC (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x140864998 (GetOperandValue.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

__int64 __fastcall FreeOperandValue(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      if ( !*(_BYTE *)a1 )
        SddlpFree(v2);
    }
    return SddlpFree(a1);
  }
  return result;
}
