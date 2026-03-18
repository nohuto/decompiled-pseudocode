/*
 * XREFs of ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1401E6D54
 * Callers:
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401E7280 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1401E7438 (-ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1402B72BC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToMoveList(DDAMetaData *this, struct _D3DKMT_MOVE_RECT *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ecx
  unsigned int v6; // esi
  _QWORD *Buffer; // rdx
  __int64 v9; // rcx

  v2 = *((_DWORD *)this + 11);
  v4 = *((_DWORD *)this + 10);
  if ( v2 >= v4 )
  {
    if ( !(unsigned int)DDAMetaData::ProcessSingleNewDirtyRect(this, &a2->DestRect) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1016;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to add new move to dirty list",
        1016LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 0LL;
    }
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) / 0x18u == v2 )
    {
      v6 = v2 + 4;
      if ( v6 >= v4 )
        v6 = v4;
    }
    else
    {
      v6 = v2 + 1;
    }
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)this + 6), 24 * v6, 1);
    if ( !Buffer )
    {
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 1001;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to expand move list to 0x%I64x move",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
      return 0LL;
    }
    v9 = 3LL * *((unsigned int *)this + 11);
    *(_OWORD *)&Buffer[v9] = *(_OWORD *)&a2->SourcePoint.x;
    Buffer[v9 + 2] = *(_QWORD *)&a2->DestRect.right;
    ++*((_DWORD *)this + 11);
  }
  return 1LL;
}
