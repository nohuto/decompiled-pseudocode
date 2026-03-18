/*
 * XREFs of ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x14034C9A4
 * Callers:
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x14034BFF8 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x14034C330 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x14034C8F4 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(DDAMetaData *this)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // zf
  unsigned int v6; // esi
  LONG *i; // rdi
  unsigned int v8; // ebp

  *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(
                            0LL,
                            0LL,
                            0LL,
                            0LL);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(0LL, 0LL, 0LL, 0LL);
  v5 = *((_QWORD *)this + 8) == 0LL;
  *((_QWORD *)this + 9) = v2;
  if ( !v5 && v2 )
  {
    v6 = 0;
    for ( i = &DDAMetaData::GetDirtyRectData(this, *((_DWORD *)this + 6), v3, v4)->right; ; i += 4 )
    {
      if ( v6 >= *((_DWORD *)this + 6) )
        return 1LL;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
             *((_QWORD *)this + 9),
             (unsigned int)*(i - 2),
             (unsigned int)*(i - 1),
             (unsigned int)*i,
             i[1]);
      if ( !v8 )
        break;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 9),
              2LL) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 639;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to combine current dirty rect with dirty region",
          639LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return v8;
      }
      ++v6;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 633;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to set tmp region to current dirty rect",
      633LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
