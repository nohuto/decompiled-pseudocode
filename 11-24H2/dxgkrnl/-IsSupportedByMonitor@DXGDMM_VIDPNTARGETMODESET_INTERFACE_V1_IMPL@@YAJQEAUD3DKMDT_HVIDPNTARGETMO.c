/*
 * XREFs of ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140376A80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140038E00 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1400405F0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140376D50 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsSupportedByMonitor(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        unsigned __int8 *a3,
        unsigned __int8 *const a4)
{
  __int64 v5; // r15
  __int64 v8; // rax
  DMMVIDPNTARGETMODE *v9; // rsi
  __int64 v10; // r10
  unsigned __int8 v11; // dl
  int IsSupportedByMonitor; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  _D3DKMDT_MODE_PRUNING_REASON v25; // [rsp+20h] [rbp-20h] BYREF
  int v26; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27; // [rsp+30h] [rbp-10h]
  char v28; // [rsp+38h] [rbp-8h]
  unsigned __int8 v29; // [rsp+80h] [rbp+40h] BYREF

  v26 = -1;
  v5 = (unsigned int)a2;
  v27 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6017);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6017);
  if ( a3 )
  {
    if ( a4 )
    {
      *a3 = 0;
      *(_DWORD *)a4 = 0;
      v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
      if ( v8 )
      {
        v9 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v8 + 24, v5);
        if ( v9 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 112) + 96LL) + 84LL) == 15
            || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 112) + 96LL) + 84LL) == 16
            || (v11 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 112) + 96LL) + 84LL) == 17) )
          {
            v11 = 1;
          }
          v29 = 0;
          v25 = D3DKMDT_MPR_UNINITIALIZED;
          IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(v9, v11, &v29, &v25);
          v13 = IsSupportedByMonitor;
          if ( IsSupportedByMonitor < 0 )
          {
            WdLogSingleEntry2(7LL, v9, IsSupportedByMonitor);
            WdLogGlobalForLineNumber = 1744;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
            if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v26);
            return v13;
          }
          else
          {
            *a3 = v29;
            *(_DWORD *)a4 = v25;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
            if ( v28 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v26);
            }
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v5, this);
          WdLogGlobalForLineNumber = 1724;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
          if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v26);
          return 3223192337LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 1710;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v26);
        return 3223192329LL;
      }
    }
    WdLogSingleEntry1(2LL, a3);
    WdLogGlobalForLineNumber = 1689;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 1681;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v26);
  return 3221225485LL;
}
