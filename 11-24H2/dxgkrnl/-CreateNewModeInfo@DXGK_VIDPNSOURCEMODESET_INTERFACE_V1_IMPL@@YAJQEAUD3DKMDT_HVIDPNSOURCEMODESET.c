/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1403663B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h]
  char v28; // [rsp+30h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 25);
  v26 = -1;
  v27 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerEnter, v6, 7005);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 7005);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  WdLogGlobalForLineNumber = 527;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
    {
      v12 = 0LL;
      v13 = operator new(0x38uLL, 0x4E506456u, 256LL);
      v14 = v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_DWORD *)v13 = 305419896;
        *(_OWORD *)(v13 + 16) = 0LL;
        *(_OWORD *)(v13 + 32) = 0LL;
        *(_QWORD *)(v13 + 48) = 0LL;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        ++*((_DWORD *)this + 20);
        v12 = v14 + 16;
        v15 = *((_DWORD *)this + 20);
        v16 = 0;
        *(_DWORD *)(v14 + 20) = 0;
        *(_DWORD *)(v14 + 16) = v15;
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 422;
        v16 = -1073741801;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(2LL, v16);
        WdLogGlobalForLineNumber = 570;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v26);
        return (unsigned int)v16;
      }
      else
      {
        *(_QWORD *)a2 = v12;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v26);
        }
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 550;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v26);
      return 3223192328LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 533;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v26);
    return 3223192336LL;
  }
}
