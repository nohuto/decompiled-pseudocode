/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1403741F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v10; // rdx
  char *v11; // r9
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v12; // rcx
  char *v13; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h]
  char v25; // [rsp+30h] [rbp-10h]

  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 7012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7012);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 7012);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  WdLogGlobalForLineNumber = 1285;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 32) == 1833173005 )
    {
      v10 = a2 - 4;
      if ( *((_DWORD *)a2 - 4) != 305419896 )
      {
        WdLogSingleEntry1(2LL, v10);
        WdLogGlobalForLineNumber = 937;
        v15 = -1071774959;
        goto LABEL_16;
      }
      v11 = (char *)*((_QWORD *)v10 + 1);
      if ( v11 )
      {
        v12 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
        if ( v12 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) || (v13 = (char *)v12 - 8) == 0LL )
        {
LABEL_14:
          WdLogSingleEntry2(2LL, v10, this);
          WdLogGlobalForLineNumber = 953;
          v15 = -1071774928;
LABEL_16:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
          if ( v25 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v23);
          }
          return v15;
        }
        while ( v13 != v11 )
        {
          v14 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v13 + 1);
          v13 = (char *)v14 - 8;
          if ( v14 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
            v13 = 0LL;
          if ( !v13 )
            goto LABEL_14;
        }
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2 - 4);
      v15 = 0;
      goto LABEL_16;
    }
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 1305;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v23);
    return 3223192329LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 1291;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v23);
    return 3223192337LL;
  }
}
