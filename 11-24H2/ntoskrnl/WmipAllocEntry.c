/*
 * XREFs of WmipAllocEntry @ 0x1409B04E8
 * Callers:
 *     WmipAddMofResource @ 0x1407A59E8 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x1407A5F20 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407A5FF8 (WmipUpdateModifyGuid.c)
 *     WmipAllocGuidEntry @ 0x1409AFDEC (WmipAllocGuidEntry.c)
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
