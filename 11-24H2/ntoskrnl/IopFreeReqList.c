/*
 * XREFs of IopFreeReqList @ 0x14072192C
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A6878 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopAllocateBootResourcesInternal @ 0x1407252A8 (IopAllocateBootResourcesInternal.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140734668 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140A6BCB4 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x1406F960C (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeReqList(_QWORD *P)
{
  __int64 i; // rsi

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 8); i = (unsigned int)(i + 1) )
    {
      IopFreeReqAlternative(P[i + 5]);
      P[i + 5] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
