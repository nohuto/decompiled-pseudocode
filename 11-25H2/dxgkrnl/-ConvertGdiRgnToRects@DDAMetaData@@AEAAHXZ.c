/*
 * XREFs of ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x14034BA08
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x14034BC8C (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x14034C8F4 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertGdiRgnToRects(DDAMetaData *this)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  void *Buffer; // rax
  __int64 v8; // rax
  const wchar_t *v9; // r9
  unsigned int v10; // r14d
  unsigned int *i; // rbx
  __int64 v12; // rax
  unsigned int v13; // r15d
  unsigned int (__fastcall *v14)(_QWORD, struct tagRECT *); // rbx
  struct tagRECT *DirtyRectData; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 112LL))(
         *((_QWORD *)this + 8),
         0LL,
         0LL);
  v4 = v2;
  v5 = ((unsigned __int64)v2 - 32) >> 4;
  if ( (unsigned int)v5 > *((_DWORD *)this + 5) )
  {
    v10 = 0;
    for ( i = (unsigned int *)(**((_QWORD **)this + 6) + 16LL); ; i += 6 )
    {
      v12 = *((_QWORD *)this + 7);
      if ( v10 >= *((_DWORD *)this + 11) )
        break;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(v12 + 96))(
              *((_QWORD *)this + 9),
              *(i - 2),
              *(i - 1),
              *i,
              i[1]);
      if ( !v13 )
      {
        WdLogSingleEntry0(2LL);
        v8 = 1129LL;
        v9 = L"Failed to set tmp region to current dirty rect";
        goto LABEL_5;
      }
      if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 9),
              2LL) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1135;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to combine move rect with dirty region",
          1135LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return v13;
      }
      ++v10;
    }
    v14 = *(unsigned int (__fastcall **)(_QWORD, struct tagRECT *))(v12 + 120);
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, 1u);
    if ( v14(*((_QWORD *)this + 8), DirtyRectData) )
    {
      *((_DWORD *)this + 11) = 0;
      LODWORD(v5) = 1;
      *((_DWORD *)this + 4) = 1;
      goto LABEL_3;
    }
    WdLogSingleEntry0(2LL);
    v8 = 1143LL;
    v9 = L"Failed to get bounding box";
  }
  else
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)this + 4), v2, 0, v3);
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(*((_QWORD *)this + 7) + 112LL))(
           *((_QWORD *)this + 8),
           v4,
           Buffer) )
    {
LABEL_3:
      *((_DWORD *)this + 6) = v5;
      return 1LL;
    }
    WdLogSingleEntry0(2LL);
    v8 = 1161LL;
    v9 = L"Failed to get dirty rects from region";
  }
LABEL_5:
  WdLogGlobalForLineNumber = v8;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
  return 0LL;
}
