/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1402D9A30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1402D9E88 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  char *v18; // rdx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v19; // rcx
  char *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // [rsp+20h] [rbp-50h] BYREF
  __int64 v42; // [rsp+28h] [rbp-48h]
  char v43; // [rsp+30h] [rbp-40h]
  __int128 v44; // [rsp+38h] [rbp-38h]
  __int64 v45; // [rsp+48h] [rbp-28h]
  __int128 v46; // [rsp+50h] [rbp-20h] BYREF
  char *v47; // [rsp+60h] [rbp-10h]
  __int64 v48; // [rsp+A0h] [rbp+30h] BYREF

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 33, 1u);
  v41 = -1;
  v42 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 7037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerEnter, v8, 7037);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 7037);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = a2;
  v13[4] = this;
  v13[5] = a3;
  WdLogGlobalForLineNumber = 2557;
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    WdLogGlobalForLineNumber = 2564;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v41);
    return 3221225485LL;
  }
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 2585;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventProfilerExit, v40, v41);
    return 3223192320LL;
  }
  v14 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v14 || *(_DWORD *)v14 != 305419896 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 2598;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v41);
    }
    return 3223192345LL;
  }
  v18 = *(char **)(v14 + 8);
  if ( !v18 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2611;
LABEL_29:
    WdLogSingleEntry2(2LL, v14, this);
    WdLogGlobalForLineNumber = 2618;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v41);
    return 3223192368LL;
  }
  v19 = this[3];
  if ( v19 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
    goto LABEL_29;
  v20 = (char *)v19 - 8;
  if ( !v20 )
    goto LABEL_29;
  while ( v20 != v18 )
  {
    v32 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v20 + 1);
    v20 = (char *)v32 - 8;
    if ( v32 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
      v20 = 0LL;
    if ( !v20 )
      goto LABEL_29;
  }
  v45 = *(_QWORD *)(v14 + 8);
  *(_QWORD *)&v44 = DMMVIDPNTOPOLOGY::GetNextPath;
  HIDWORD(v44) = HIDWORD(v42);
  DWORD2(v44) = 0;
  v48 = 0LL;
  v47 = v18;
  v46 = v44;
  v21 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          this,
          &v46,
          &v48,
          1LL);
  v26 = v21;
  if ( v21 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = this;
    WdLogGlobalForLineNumber = 2636;
    if ( v48 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2639;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v41);
    return 1075708748LL;
  }
  else if ( v21 < 0 )
  {
    WdLogSingleEntry3(2LL, v14, this, v21);
    WdLogGlobalForLineNumber = 2648;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v41);
    return v26;
  }
  else
  {
    v29 = v48;
    if ( !v48 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2654;
    }
    *(_QWORD *)&a3->VidPnSourceId = v29;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v41);
    return 0LL;
  }
}
