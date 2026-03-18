/*
 * XREFs of ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x14034C6C4
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401E2050 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x14034C584 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x14034C7E0 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RectsOverlap(int *a1, int *a2, __int64 a3)
{
  int v3; // r10d
  int v4; // edi
  BOOL v5; // r9d
  int v6; // esi
  int v7; // ebx
  BOOL v8; // eax
  BOOL v10; // r10d
  int v11; // r9d
  BOOL v12; // eax
  int v13; // eax

  v3 = a1[2];
  v4 = *a2;
  v5 = v3 > *a2 && *a1 < a2[2];
  v6 = a1[3];
  v7 = a2[1];
  v8 = v6 > v7 && a1[1] < a2[3];
  if ( !v5 || !v8 )
    return 0LL;
  v10 = *a1 >= v4 && v3 <= a2[2];
  v11 = a1[1];
  v12 = v11 >= v7 && v6 <= a2[3];
  if ( v10 )
  {
    if ( v12 )
      return 1LL;
    if ( v7 > v11 && a2[3] < v6 )
      return 3LL;
    if ( a3 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a1;
      v13 = a2[1];
      if ( a1[1] < v13 )
        *(_DWORD *)(a3 + 12) = v13;
      else
        *(_DWORD *)(a3 + 4) = a2[3];
    }
    return 2LL;
  }
  if ( v12 && (v4 <= *a1 || a2[2] >= a1[2]) )
  {
    if ( a3 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a1;
      if ( *a1 < *a2 )
        *(_DWORD *)(a3 + 8) = *a2;
      else
        *(_DWORD *)a3 = a2[2];
    }
    return 2LL;
  }
  return 3LL;
}
