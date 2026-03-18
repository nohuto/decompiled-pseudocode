/*
 * XREFs of ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E760
 * Callers:
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14010C590 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140034050 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 */

char __fastcall VIDMM_SEGMENT::IsNonOverlappingResourceCB(const struct VIDMM_PHYSICAL_ALLOC *a1)
{
  __int64 v1; // r8
  _QWORD **v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // r9
  __int64 **v5; // r9
  __int64 *v6; // rdx
  int v7; // eax

  if ( VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)a1 + 392LL)) )
    return 1;
  v2 = (_QWORD **)(v1 + 112);
  v3 = *v2;
  while ( 1 )
  {
    v4 = v3;
    if ( v3 == v2 )
      break;
    v3 = (_QWORD *)*v3;
    v5 = (__int64 **)(v4 - 2);
    v6 = *v5;
    while ( v6 != (__int64 *)v5 )
    {
      v7 = *((_DWORD *)v6 + 16);
      v6 = (__int64 *)*v6;
      if ( v7 > 0 )
        return 1;
    }
  }
  return 0;
}
