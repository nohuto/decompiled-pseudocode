/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14037E750
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
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
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  char v29; // [rsp+30h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 25);
  v27 = -1;
  v28 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 7005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerEnter, v6, 7005);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 7005);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  WdLogGlobalForLineNumber = 527;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
    {
      v13 = 0LL;
      v14 = operator new(0x38uLL, 0x4E506456u, 256LL, v12);
      v15 = v14;
      if ( v14 )
      {
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_DWORD *)v14 = 305419896;
        *(_OWORD *)(v14 + 16) = 0LL;
        *(_OWORD *)(v14 + 32) = 0LL;
        *(_QWORD *)(v14 + 48) = 0LL;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        ++*((_DWORD *)this + 20);
        v13 = v15 + 16;
        v16 = *((_DWORD *)this + 20);
        v17 = 0;
        *(_DWORD *)(v15 + 20) = 0;
        *(_DWORD *)(v15 + 16) = v16;
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 422;
        v17 = -1073741801;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(2LL, v17);
        WdLogGlobalForLineNumber = 570;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v27);
        return (unsigned int)v17;
      }
      else
      {
        *(_QWORD *)a2 = v13;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v27);
        }
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 550;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v27);
      return 3223192328LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 533;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v27);
    return 3223192336LL;
  }
}
