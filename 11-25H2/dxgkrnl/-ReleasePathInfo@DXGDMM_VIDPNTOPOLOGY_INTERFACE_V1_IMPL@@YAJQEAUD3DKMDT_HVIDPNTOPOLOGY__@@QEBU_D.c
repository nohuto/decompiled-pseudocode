/*
 * XREFs of ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1403954D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v5; // rdi
  char *v6; // r8
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v7; // rcx
  char *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h]
  char v20; // [rsp+30h] [rbp-10h]

  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 6022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6022);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 6022);
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v5 = a2 - 4;
      if ( *(_DWORD *)v5 == 305419896 )
      {
        v6 = (char *)*((_QWORD *)v5 + 1);
        if ( v6 )
        {
          v7 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
          if ( v7 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) || (v8 = (char *)v7 - 8) == 0LL )
          {
LABEL_20:
            WdLogSingleEntry2(2LL, v5, this);
            WdLogGlobalForLineNumber = 2144;
            v9 = -1071774928;
            goto LABEL_12;
          }
          while ( v8 != v6 )
          {
            v13 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v8 + 1);
            v8 = (char *)v13 - 8;
            if ( v13 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
              v8 = 0LL;
            if ( !v8 )
              goto LABEL_20;
          }
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)v5 + 46));
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
        v9 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 2128;
        v9 = -1071774951;
      }
LABEL_12:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
      if ( v20 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v18);
      }
      return v9;
    }
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 2627;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v18);
    return 3223192320LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 2613;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v18);
    return 3223192345LL;
  }
}
