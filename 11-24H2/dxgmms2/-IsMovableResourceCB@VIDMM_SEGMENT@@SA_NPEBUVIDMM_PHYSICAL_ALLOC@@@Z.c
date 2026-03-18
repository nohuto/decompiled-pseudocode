/*
 * XREFs of ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E6D0
 * Callers:
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E720 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009E910 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::IsMovableResourceCB(const struct VIDMM_PHYSICAL_ALLOC *a1)
{
  __int64 v1; // rdx
  _DWORD *v2; // rcx
  int v3; // eax

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD **)(*(_QWORD *)a1 + 392LL);
  if ( (*v2 & 0x300) != 0 )
    return 0;
  if ( (*(_DWORD *)(v1 + 24) & 0x10000100) != 0 )
    return 0;
  if ( (*(_BYTE *)(v1 + 36) & 1) != 0 )
    return 0;
  v3 = *(_DWORD *)(v1 + 28);
  if ( (v3 & 0x800) != 0 )
    return 0;
  if ( (v3 & 0x400000) != 0 )
    return v2[4] == 0;
  return 1;
}
