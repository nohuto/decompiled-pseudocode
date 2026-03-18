/*
 * XREFs of ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F2D88
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1402F2B50 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1401E71F4 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401E7280 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewMoveRegions(DDAMetaData *this, struct _D3DKMT_PRESENT_RGNS *a2)
{
  D3DKMT_MOVE_RECT *pMoveRects; // rbx
  __int64 result; // rax
  UINT i; // edi
  LONG x; // eax
  __int64 v8; // rax
  const wchar_t *v9; // r9
  int v10; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+58h] [rbp-30h] BYREF

  pMoveRects = (D3DKMT_MOVE_RECT *)a2->pMoveRects;
  result = 1LL;
  for ( i = 0; i < a2->MoveRectCount; ++i )
  {
    x = pMoveRects->SourcePoint.x;
    v10 = 0;
    v11.left = x;
    v11.right = pMoveRects->SourcePoint.x + pMoveRects->DestRect.right - pMoveRects->DestRect.left;
    v11.top = pMoveRects->SourcePoint.y;
    v11.bottom = pMoveRects->SourcePoint.y + pMoveRects->DestRect.bottom - pMoveRects->DestRect.top;
    result = DDAMetaData::ProcessMoveAgainstDirtyList(this, pMoveRects, &v11, &v10);
    if ( !(_DWORD)result )
    {
      WdLogSingleEntry0(2LL);
      v8 = 669LL;
      v9 = L"Failed to process new move dst against dirty list";
      goto LABEL_9;
    }
    if ( v10 )
    {
      result = DDAMetaData::ProcessMoveAgainstMoveList(this, pMoveRects, &v11);
      if ( !(_DWORD)result )
      {
        WdLogSingleEntry0(2LL);
        v8 = 682LL;
        v9 = L"Failed to process new move dst against move list";
LABEL_9:
        WdLogGlobalForLineNumber = v8;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
        return 0LL;
      }
    }
    ++pMoveRects;
  }
  return result;
}
