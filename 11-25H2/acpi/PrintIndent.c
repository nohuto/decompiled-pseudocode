/*
 * XREFs of PrintIndent @ 0x140056344
 * Callers:
 *     ParsePackage @ 0x140001230 (ParsePackage.c)
 *     ParseScope @ 0x14000D030 (ParseScope.c)
 *     ParseTerm @ 0x14000D430 (ParseTerm.c)
 *     ParseFieldList @ 0x1400358A8 (ParseFieldList.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_140089034; ++i )
    result = ConPrintf("| ");
  return result;
}
