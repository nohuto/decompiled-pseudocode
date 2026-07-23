/*
 * XREFs of MiOkToShrinkPageFiles @ 0x1403EF6CC
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1403EF264 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 *     MiContractPagingFiles @ 0x1403EF5FC (MiContractPagingFiles.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiOkToShrinkPageFiles(unsigned __int64 a1, unsigned __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a1 + 0x8000 < (((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) )
    return a1 + 0x8000 > a1;
  return result;
}
