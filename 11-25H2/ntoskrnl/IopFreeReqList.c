/*
 * XREFs of IopFreeReqList @ 0x14071582C
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A305C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopAllocateBootResourcesInternal @ 0x140719328 (IopAllocateBootResourcesInternal.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407283D8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140A694D4 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x1406ED89C (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
