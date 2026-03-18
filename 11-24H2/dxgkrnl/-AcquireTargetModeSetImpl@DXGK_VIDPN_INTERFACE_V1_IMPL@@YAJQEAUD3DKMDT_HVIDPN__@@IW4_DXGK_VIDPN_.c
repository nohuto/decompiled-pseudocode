/*
 * XREFs of ?AcquireTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140367EF4
 * Callers:
 *     ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140367EA0 (-AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVI.c)
 *     ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140367ED0 (-AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVI.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSetImpl(
        DXGK_VIDPN_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        __int64 *a4,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a5)
{
  int v6; // esi
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v14; // rdx
  char *v15; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v16; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v17; // rsi
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGK_VIDPN_INTERFACE_V1_IMPL *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+20h] [rbp-20h] BYREF
  __int64 v34; // [rsp+28h] [rbp-18h]
  char v35; // [rsp+30h] [rbp-10h]

  v33 = -1;
  v6 = a3;
  v7 = (unsigned int)a2;
  v34 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 7048);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 7048);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = this;
  v13[4] = v7;
  v13[5] = a4;
  v13[6] = a5;
  WdLogGlobalForLineNumber = 3934;
  if ( !a4 )
  {
    WdLogSingleEntry3(2LL, 0LL, v7, this);
    WdLogGlobalForLineNumber = 3942;
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v33);
    return 3221225485LL;
  }
  if ( !a5 )
  {
    WdLogSingleEntry3(2LL, 0LL, v7, this);
    WdLogGlobalForLineNumber = 3951;
    goto LABEL_36;
  }
  *a4 = 0LL;
  *a5 = 0LL;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
  {
    v14 = this[15];
    if ( v14 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) || (v15 = (char *)v14 - 8) == 0LL )
    {
LABEL_24:
      WdLogSingleEntry2(2LL, v7, this);
      WdLogGlobalForLineNumber = 3985;
    }
    else
    {
      while ( *(_DWORD *)(*((_QWORD *)v15 + 12) + 24LL) != (_DWORD)v7 )
      {
        v24 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v15 + 1);
        v15 = (char *)v24 - 8;
        if ( v24 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) )
          v15 = 0LL;
        if ( !v15 )
          goto LABEL_24;
      }
    }
    v16 = this[6];
    if ( v6 == 1 )
      v17 = (struct D3DKMDT_HVIDPNTARGETMODESET__ *)*((_QWORD *)v16 + 55);
    else
      v17 = (struct D3DKMDT_HVIDPNTARGETMODESET__ *)*((_QWORD *)v16 + 56);
    v18 = (_QWORD *)((char *)this[39] + 24);
    if ( (_QWORD *)*v18 == v18 || (v19 = *v18 - 8LL, *v18 == 8LL) )
    {
LABEL_18:
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 4012;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v33);
      }
      return 3223192325LL;
    }
    while ( *(_DWORD *)(v19 + 24) != (_DWORD)v7 )
    {
      v20 = *(_QWORD **)(v19 + 8);
      v19 = (__int64)(v20 - 1);
      if ( v20 == v18 )
        v19 = 0LL;
      if ( !v19 )
        goto LABEL_18;
    }
    v25 = *(_QWORD *)(v19 + 104);
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
      v26 = *(_QWORD *)(v19 + 104);
      if ( v26 )
        goto LABEL_29;
    }
    else
    {
      v26 = 0LL;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4021;
LABEL_29:
    *a4 = v26 & -(__int64)(v26 != -137);
    *a5 = v17;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v33);
    return 0LL;
  }
  WdLogSingleEntry1(2LL, this);
  WdLogGlobalForLineNumber = 3973;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v33);
  return 3223192323LL;
}
