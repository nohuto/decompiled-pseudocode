/*
 * XREFs of ?CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0QEAE@Z @ 0x14025A790
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a3,
        unsigned __int8 *const a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  char v17; // [rsp+30h] [rbp-10h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6014);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 6014);
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 1390;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v15);
    }
    return 3221225485LL;
  }
  LOBYTE(a3->VideoStandard) = 0;
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 1403;
    goto LABEL_14;
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 1411;
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v15);
    return 3223192337LL;
  }
  if ( *((_DWORD *)this + 3) == a2->ActiveSize.cx
    && *((_DWORD *)this + 4) == a2->ActiveSize.cy
    && *((_DWORD *)this + 5) == a2->VSyncFreq.Numerator
    && *((_DWORD *)this + 6) == a2->VSyncFreq.Denominator )
  {
    v12 = *((_DWORD *)this + 12);
    if ( (((unsigned __int8)v12 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0
      && (((unsigned __int16)v12 ^ (unsigned __int16)*(_DWORD *)&a2->AdditionalSignalInfo) & 0x1F8) == 0 )
    {
      LOBYTE(a3->VideoStandard) = 1;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v15);
  return 0LL;
}
