/*
 * XREFs of WmipAllocEntry @ 0x1409D00A0
 * Callers:
 *     WmipAddMofResource @ 0x1407A58A8 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x1407A5DE0 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407A5EB8 (WmipUpdateModifyGuid.c)
 *     WmipAddDataSource @ 0x1409CFD60 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x1409D0E2C (WmipAllocGuidEntry.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403FA0E0 (ExAllocateFromPagedLookasideList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, *(unsigned int *)(a1 + 8));
    v3[3] = 1LL;
    *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
