/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x140734668
 * Callers:
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407348C0 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x14098DAA8 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14098DBA0 (PnpGetResourceRequirementsForAssignTable.c)
 * Callees:
 *     IopFreeReqList @ 0x14072192C (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
