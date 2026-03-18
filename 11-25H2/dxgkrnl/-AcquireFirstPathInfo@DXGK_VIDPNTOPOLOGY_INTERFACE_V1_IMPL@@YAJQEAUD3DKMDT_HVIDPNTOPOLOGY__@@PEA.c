/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14037EA10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x14037ECEC (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DMMVIDPNPRESENTPATH *(__fastcall *v32)(DMMVIDPNTOPOLOGY *); // [rsp+20h] [rbp-30h] BYREF
  int v33; // [rsp+28h] [rbp-28h]
  int v34; // [rsp+30h] [rbp-20h] BYREF
  __int64 v35; // [rsp+38h] [rbp-18h]
  char v36; // [rsp+40h] [rbp-10h]
  __int64 v37; // [rsp+60h] [rbp+10h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 32);
  v34 = -1;
  v35 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 7036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerEnter, v6, 7036);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 7036);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  WdLogGlobalForLineNumber = 2456;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v33 = 0;
      v37 = 0LL;
      v32 = DMMVIDPNTOPOLOGY::GetFirstPath;
      v12 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
              this,
              &v32,
              &v37);
      v17 = v12;
      if ( v12 == -1071774937 )
      {
        v28 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
        v29 = v37 == 0;
        *(_QWORD *)(v28 + 24) = this;
        WdLogGlobalForLineNumber = 2498;
        if ( !v29 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2501;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
        if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v34);
        return 1075708747LL;
      }
      else if ( v12 < 0 )
      {
        WdLogSingleEntry2(2LL, this, v12);
        WdLogGlobalForLineNumber = 2509;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
        if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v34);
        return v17;
      }
      else
      {
        v18 = v37;
        if ( !v37 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2515;
        }
        *(_QWORD *)a2 = v18;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
        if ( v36 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v34);
        }
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 2481;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v34);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 2464;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v34);
    return 3221225485LL;
  }
}
