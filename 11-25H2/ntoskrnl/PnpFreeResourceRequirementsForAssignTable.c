/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x1407283D8
 * Callers:
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x140728630 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x140729028 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1408311EC (PnpGetResourceRequirementsForAssignTable.c)
 * Callees:
 *     IopFreeReqList @ 0x14071582C (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD **v2; // rdi
  unsigned __int64 v3; // rbx
  void *v4; // rcx

  if ( a1 < a2 )
  {
    v2 = (_QWORD **)(a1 + 32);
    v3 = ((a2 - a1 - 1) >> 6) + 1;
    do
    {
      IopFreeReqList(*v2);
      *v2 = 0LL;
      if ( (*(_DWORD *)(v2 - 3) & 0x200) != 0 )
      {
        v4 = *(v2 - 1);
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          *(v2 - 1) = 0LL;
        }
      }
      v2 += 8;
      --v3;
    }
    while ( v3 );
  }
}
