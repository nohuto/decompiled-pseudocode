/*
 * XREFs of ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1401E71F4
 * Callers:
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F2D88 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     ?ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1401E7438 (-ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1402F3448 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessMoveAgainstDirtyList(
        DDAMetaData *this,
        struct _D3DKMT_MOVE_RECT *a2,
        struct tagRECT *a3,
        int *a4)
{
  struct tagRECT *p_DestRect; // rbp
  int DoesRectOverlapWithExistingDirty; // ebx
  int v9; // eax
  __int64 result; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  p_DestRect = &a2->DestRect;
  *a4 = 1;
  DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(this, &a2->DestRect, v11);
  v9 = DDAMetaData::DoesRectOverlapWithExistingDirty(this, a3, v11);
  if ( !DoesRectOverlapWithExistingDirty && !v9 )
    return 1LL;
  result = DDAMetaData::ProcessSingleNewDirtyRect(this, p_DestRect);
  *a4 = 0;
  return result;
}
