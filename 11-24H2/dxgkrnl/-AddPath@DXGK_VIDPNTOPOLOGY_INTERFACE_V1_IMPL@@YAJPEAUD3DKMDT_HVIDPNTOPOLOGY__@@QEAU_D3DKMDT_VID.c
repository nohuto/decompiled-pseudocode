/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140264F80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14003DEE0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140048DE4 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140263F58 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x14031AF30 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140378B34 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v12; // rax
  DMMVIDPNTOPOLOGY *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h]
  char v33; // [rsp+40h] [rbp-10h]
  struct DMMVIDPNPRESENTPATH *v34; // [rsp+88h] [rbp+38h] BYREF
  struct DMMVIDPNPRESENTPATH *v35; // [rsp+90h] [rbp+40h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 7041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7041);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 7041);
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 2993;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v31);
    }
    return 3223192345LL;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  v12[3] = *(_DWORD *)a2;
  v12[4] = *((unsigned int *)a2 + 1);
  v12[5] = a2;
  v12[6] = this;
  WdLogGlobalForLineNumber = 2999;
  v13 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 3010;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v31);
    return 3223192320LL;
  }
  if ( !*((_DWORD *)a2 + 16) )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 3021;
    *((_DWORD *)a2 + 16) = 255;
  }
  if ( !*((_DWORD *)a2 + 17) )
  {
    WdLogSingleEntry3(3LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), this);
    WdLogGlobalForLineNumber = 3033;
    memset(a2 + 19, 0, 0x100uLL);
    *((_DWORD *)a2 + 83) = 0;
    *((_DWORD *)a2 + 83) |= 1u;
    *(_QWORD *)(a2 + 17) = 1LL;
  }
  if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
  {
    WdLogSingleEntry4(3LL, *((int *)a2 + 84), *(_DWORD *)a2, *((unsigned int *)a2 + 1), this);
    WdLogGlobalForLineNumber = 3063;
    *((_DWORD *)a2 + 84) = 1;
    *((_QWORD *)a2 + 43) = 0LL;
    *((_QWORD *)a2 + 44) = 0LL;
  }
  v34 = 0LL;
  v35 = 0LL;
  v16 = DMMVIDPNTOPOLOGY::CreateNewPath(v13, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v35);
  v21 = v16;
  if ( v16 == -1071774970 )
  {
    WdLogSingleEntry3(2LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), -1071774970LL);
    WdLogGlobalForLineNumber = 3090;
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v31);
    return 3223192326LL;
  }
  if ( v16 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
    v24[3] = *(_DWORD *)a2;
    v24[4] = *((unsigned int *)a2 + 1);
    v24[5] = v21;
    WdLogGlobalForLineNumber = 3097;
    goto LABEL_30;
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))&v34,
    (__int64 (__fastcall ***)(_QWORD, __int64))v35);
  v27 = DMMVIDPNTOPOLOGY::AddPath(v13, v34, D3DKMDT_MCC_ENFORCE);
  LODWORD(v21) = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry4(7LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), v13, v27);
    WdLogGlobalForLineNumber = 3112;
LABEL_30:
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v31);
    return (unsigned int)v21;
  }
  v34 = 0LL;
  v28 = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v13, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v31);
  return v28;
}
