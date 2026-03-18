/*
 * XREFs of ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x14034BFF8
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401E2050 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x14034C330 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x14034C7E0 (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x14034C8F4 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x14034C9A4 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 */

__int64 __fastcall DDAMetaData::AddToDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // edi
  struct tagRECT *DirtyRectData; // rcx
  unsigned int v8; // edi

  if ( !*((_QWORD *)this + 8) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 5);
    if ( v4 < v5 )
    {
      if ( (unsigned int)(((unsigned __int64)*(unsigned int *)(*((_QWORD *)this + 4) + 12LL) - 36) >> 4) == v4 )
      {
        if ( v4 + 8 < v5 )
          v5 = v4 + 8;
      }
      else
      {
        v5 = v4 + 1;
      }
      DirtyRectData = DDAMetaData::GetDirtyRectData(this, v5);
      if ( DirtyRectData )
      {
        DirtyRectData[(*((_DWORD *)this + 6))++] = *a2;
        return 1LL;
      }
      WdLogSingleEntry1(2LL, v5);
      WdLogGlobalForLineNumber = 1054;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to expand dirty rect list to 0x%I64x rects",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
      return 0LL;
    }
    if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1074;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to convert rect list to Gdi region",
        1074LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 0LL;
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
         *((_QWORD *)this + 9),
         (unsigned int)a2->left,
         (unsigned int)a2->top,
         (unsigned int)a2->right,
         a2->bottom);
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1083;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to set tmp region to current dirty rect",
      1083LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 9),
         2LL) )
  {
    return 1LL;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1089;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to combine current dirty rect with dirty region",
    1089LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v8;
}
