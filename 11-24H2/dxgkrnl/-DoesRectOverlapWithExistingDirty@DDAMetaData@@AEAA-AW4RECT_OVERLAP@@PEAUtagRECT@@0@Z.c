/*
 * XREFs of ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1402F3448
 * Callers:
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1401E71F4 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402F31F4 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?RectsOverlap@@YA?AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z @ 0x1402F3588 (-RectsOverlap@@YA-AW4RECT_OVERLAP@@PEAUtagRECT@@00@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1402F37B8 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::DoesRectOverlapWithExistingDirty(__int64 a1, unsigned int *a2, __int64 a3)
{
  struct tagRECT *DirtyRectData; // rdx
  unsigned int i; // esi
  __int64 result; // rax
  struct tagRECT *v9; // rdx
  const wchar_t *v10; // r9
  int v11; // eax

  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)(a1 + 56) + 96LL))(
           *(_QWORD *)(a1 + 72),
           *a2,
           a2[1],
           a2[2],
           a2[3]) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 56) + 104LL))(
              *(_QWORD *)(a1 + 72),
              *(_QWORD *)(a1 + 72),
              *(_QWORD *)(a1 + 64),
              1LL);
      if ( v11 )
        return v11 != 1 ? 3 : 0;
      WdLogSingleEntry1(2LL, a2);
      v10 = L"Failed to combine Gdi region to rect 0x%I64x";
      WdLogGlobalForLineNumber = 600;
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      v10 = L"Failed to set Gdi region to rect 0x%I64x";
      WdLogGlobalForLineNumber = 594;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, (__int64)a2, 0LL, 0LL, 0LL, 0LL);
    return 3LL;
  }
  DirtyRectData = DDAMetaData::GetDirtyRectData((DDAMetaData *)a1, *(_DWORD *)(a1 + 24));
  for ( i = 0; i < *(_DWORD *)(a1 + 24); ++i )
  {
    result = RectsOverlap(a2, DirtyRectData, a3);
    if ( (_DWORD)result )
      return result;
    DirtyRectData = v9 + 1;
  }
  return 0LL;
}
