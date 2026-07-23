/*
 * XREFs of IopFreeReqList @ 0x14071F4BC
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A37AC (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopAllocateBootResourcesInternal @ 0x140722E38 (IopAllocateBootResourcesInternal.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140732598 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140A65214 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x1406F724C (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
