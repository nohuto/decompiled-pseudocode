/*
 * XREFs of ?ExtendRectToContainer@SnapLayoutHelpers@@YA?AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z @ 0x1805AA88C
 * Callers:
 *     ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x1802371C0 (-GetCorrectedFramePosition@CSnappedWindow@@UEBA-AUCRect@Geometry@@XZ.c)
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AA114 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::ExtendRectToContainer(__int64 a1, _DWORD *a2, _OWORD *a3, char a4)
{
  *(_OWORD *)a1 = *a3;
  if ( (a4 & 1) != 0 )
    *(_DWORD *)a1 = *a2;
  if ( (a4 & 2) != 0 )
    *(_DWORD *)(a1 + 8) = a2[2];
  if ( (a4 & 4) != 0 )
    *(_DWORD *)(a1 + 4) = a2[1];
  if ( (a4 & 8) != 0 )
    *(_DWORD *)(a1 + 12) = a2[3];
  return a1;
}
