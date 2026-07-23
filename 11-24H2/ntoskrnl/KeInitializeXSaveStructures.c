/*
 * XREFs of KeInitializeXSaveStructures @ 0x140B588FC
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 */

__int64 KeInitializeXSaveStructures()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 result; // rax

  ExInitializeSystemLookasideList(
    (unsigned int)&KiXStateContextLookasideList,
    512,
    MEMORY[0xFFFFF780000003E8] + 63,
    1281446744,
    128,
    (__int64)&ExSystemLookasideListHead);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->PPLookasideList[9].L = (_GENERAL_LOOKASIDE *)&KiXStateContextLookasideList;
  CurrentPrcb->PPLookasideList[9].P = (_GENERAL_LOOKASIDE *)&KiXStateContextLookasideList;
  result = (unsigned int)(KiXStateContextLookasidePerProcMaxDepth - 1);
  if ( (unsigned int)result <= 0xE || (unsigned int)KiXStateContextLookasidePerProcMaxDepth >= 0x401 )
    KiXStateContextLookasidePerProcMaxDepth = 0;
  return result;
}
