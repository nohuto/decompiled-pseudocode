/*
 * XREFs of ?AcquireSourceSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEBU_DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE@@@Z @ 0x140261060
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireSourceSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  char v19; // [rsp+60h] [rbp-10h]

  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 6048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6048);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 6048);
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 5917;
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v17);
    }
    return 3221225485LL;
  }
  if ( !a3 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 5926;
    goto LABEL_9;
  }
  *a2 = 0LL;
  *a3 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 5947;
    goto LABEL_19;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5955;
  }
  v10 = *((_QWORD *)this + 390);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 5960;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v17);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v10 + 104);
  v14 = *(struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **)(v13 + 464);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 112) + 72LL));
  *a2 = *(_QWORD *)(v13 + 112) & -(__int64)(*(_QWORD *)(v13 + 112) != -112LL);
  *a3 = v14;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v17);
  return 0LL;
}
