/*
 * XREFs of ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401E2050
 * Callers:
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x14034BEC4 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1401E1B24 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1401E2208 (-ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x14034BFF8 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x14034C6C4 (-RectsOverlap@@YA-AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessMoveAgainstMoveList(
        DDAMetaData *this,
        struct _D3DKMT_MOVE_RECT *a2,
        struct tagRECT *a3)
{
  unsigned int v5; // ebp
  _DWORD *i; // rsi
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r12d
  __int64 v14; // r8
  int v15; // eax
  struct tagRECT *v16; // rdx
  __int64 v17; // rax
  const wchar_t *v18; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  _DWORD v22[4]; // [rsp+50h] [rbp-38h] BYREF

  v5 = 0;
  for ( i = (_DWORD *)**((_QWORD **)this + 6); ; i += 6 )
  {
    if ( v5 >= *((_DWORD *)this + 11) )
    {
      if ( !(unsigned int)DDAMetaData::AddToMoveList(this, a2) )
      {
        WdLogSingleEntry0(2LL);
        v17 = 925LL;
        v18 = L"Failed to add new to move list";
        goto LABEL_9;
      }
      return 1LL;
    }
    v7 = *i + i[4] - i[2];
    v22[0] = *i;
    v8 = i[1];
    v22[2] = v7;
    v9 = i[5] - i[3];
    v22[1] = v8;
    v22[3] = v8 + v9;
    v10 = RectsOverlap(&a2->DestRect, i + 2, 0LL);
    v13 = RectsOverlap(v11, v22, v12);
    v15 = RectsOverlap(a3, i + 2, v14);
    if ( v10 || v13 || v15 )
      break;
    ++v5;
  }
  if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, v16) )
  {
    WdLogSingleEntry0(2LL);
    v17 = 900LL;
    v18 = L"Failed to add existing move to dirty list";
LABEL_9:
    WdLogGlobalForLineNumber = v17;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v18, v17, 0LL, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v20 = **((_QWORD **)this + 6);
  v21 = (unsigned int)--*((_DWORD *)this + 11);
  *(_OWORD *)i = *(_OWORD *)(v20 + 24 * v21);
  *((_QWORD *)i + 2) = *(_QWORD *)(v20 + 24 * v21 + 16);
  if ( !(unsigned int)DDAMetaData::ProcessSingleNewDirtyRect(this, &a2->DestRect) )
  {
    WdLogSingleEntry0(2LL);
    v17 = 908LL;
    v18 = L"Failed to add new move to dirty list";
    goto LABEL_9;
  }
  return 1LL;
}
