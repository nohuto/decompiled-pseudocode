/*
 * XREFs of CmpRebuildKcbCache @ 0x14087B4A8
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmpSyncKcbCacheForHive @ 0x1407DBE60 (CmpSyncKcbCacheForHive.c)
 *     CmpCommitDiscardReplacePost @ 0x140870A94 (CmpCommitDiscardReplacePost.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087C024 (CmpRebuildKcbCacheFromNode.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rdx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v7 = -1;
  v8 = 0;
  if ( (*(_DWORD *)(BugCheckParameter3 + 8) & 0x10) != 0 || (*(_DWORD *)(BugCheckParameter3 + 184) & 0x400000) != 0 )
    return 1;
  v2 = *(_QWORD *)(BugCheckParameter3 + 32);
  if ( v2 )
  {
    v3 = *(unsigned int *)(BugCheckParameter3 + 40);
    if ( (_DWORD)v3 != -1 )
    {
      if ( (*(_BYTE *)(v2 + 140) & 1) != 0 ? HvpGetCellFlat(v2, v3, &v7) : HvpGetCellPaged(v2, v3, &v7) )
      {
        ++*(_QWORD *)(BugCheckParameter3 + 304);
        CmpRebuildKcbCacheFromNode(BugCheckParameter3);
        v5 = *(_QWORD *)(BugCheckParameter3 + 32);
        if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v5, &v7);
        else
          HvpReleaseCellPaged(v5, &v7);
        return 1;
      }
    }
  }
  return 0;
}
