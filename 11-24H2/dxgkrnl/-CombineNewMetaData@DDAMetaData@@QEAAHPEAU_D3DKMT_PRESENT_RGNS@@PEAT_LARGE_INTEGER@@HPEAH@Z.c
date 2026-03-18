/*
 * XREFs of ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1402F2B50
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402F4144 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1402F28CC (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F2D88 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F30DC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::CombineNewMetaData(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        union _LARGE_INTEGER *a3,
        int a4,
        int *a5)
{
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  const wchar_t *v14; // r9
  int v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]
  char v17; // [rsp+60h] [rbp-28h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 11000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 11000);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 11000);
  v9 = DDAMetaData::ProcessNewMoveRegions(this, a2);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    v14 = L"Failed to process new move regions, this = 0x%I64x";
    WdLogGlobalForLineNumber = 375;
    goto LABEL_19;
  }
  v9 = DDAMetaData::ProcessNewDirtyRects(this, a2);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    v14 = L"Failed to process new dirty rects, this = 0x%I64x";
    WdLogGlobalForLineNumber = 383;
    goto LABEL_19;
  }
  if ( *((_QWORD *)this + 8) )
  {
    v9 = DDAMetaData::ConvertGdiRgnToRects(this);
    if ( v9 )
    {
      v10 = 1;
      goto LABEL_7;
    }
    WdLogSingleEntry1(2LL, this);
    v14 = L"Failed to get dirty rect from Gdi region, this = 0x%I64x";
    WdLogGlobalForLineNumber = 393;
LABEL_19:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v14, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_10;
  }
  v10 = 0;
LABEL_7:
  *a5 = v10;
  *((union _LARGE_INTEGER *)this + 1) = *a3;
  if ( a4 )
    *(_DWORD *)this = 1;
  ++*((_DWORD *)this + 1);
LABEL_10:
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 9) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 9) = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v15);
  return v9;
}
