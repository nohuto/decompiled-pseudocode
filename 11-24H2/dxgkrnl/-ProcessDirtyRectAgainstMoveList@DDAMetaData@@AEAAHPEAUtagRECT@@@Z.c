/*
 * XREFs of ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402F36A4
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F30DC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402F2EBC (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x1402F3588 (-RectsOverlap@@YA-AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstMoveList(DDAMetaData *this, struct tagRECT *a2)
{
  unsigned int v3; // r15d
  unsigned int v5; // edi
  unsigned int v6; // r14d
  __int64 v7; // rbp
  int *v8; // rbx
  struct tagRECT *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx

  v3 = *((_DWORD *)this + 11);
  v5 = 1;
  v6 = 0;
  v7 = **((_QWORD **)this + 6);
  v8 = (int *)(v7 + 8);
  while ( 1 )
  {
    if ( v6 >= v3 )
      return v5;
    if ( !(unsigned int)RectsOverlap(&a2->left, v8, 0LL) )
    {
      v7 += 24LL;
      v8 += 6;
      goto LABEL_6;
    }
    v5 = DDAMetaData::AddToDirtyList(this, v10);
    if ( !v5 )
      break;
    v11 = **((_QWORD **)this + 6);
    v12 = (unsigned int)--*((_DWORD *)this + 11);
    *(_OWORD *)v7 = *(_OWORD *)(v11 + 24 * v12);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v11 + 24 * v12 + 16);
LABEL_6:
    ++v6;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 847;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to add existing move to dirty list",
    847LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
