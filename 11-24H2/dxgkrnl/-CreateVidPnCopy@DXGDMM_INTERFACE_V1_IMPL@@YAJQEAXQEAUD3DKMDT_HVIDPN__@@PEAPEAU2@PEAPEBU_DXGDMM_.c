/*
 * XREFs of ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x140261B20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003DD80 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316CB4 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnCopy(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3,
        struct D3DKMDT_HVIDPN__ **a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  struct DMMVIDPN *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r8
  VIDPN_MGR *v17; // rbx
  struct D3DKMDT_HVIDPN__ *v18; // rdi
  int VidPnCopyForClient; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  int v27; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]
  char v29; // [rsp+68h] [rbp-8h]
  __int64 v30; // [rsp+B0h] [rbp+40h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 6054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6054);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6054);
  if ( !a3 )
  {
    WdLogSingleEntry2(2LL, 0LL, a2);
    WdLogGlobalForLineNumber = 6661;
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v27);
    }
    return 3221225485LL;
  }
  if ( !a4 )
  {
    WdLogSingleEntry2(2LL, 0LL, a2);
    WdLogGlobalForLineNumber = 6670;
    goto LABEL_9;
  }
  *(_QWORD *)a3 = 0LL;
  *a4 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 6691;
    goto LABEL_19;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6699;
  }
  if ( !*((_QWORD *)this + 390) )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 6704;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v27);
    return 3223191554LL;
  }
  v14 = (struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  if ( v14 )
  {
    v17 = *(VIDPN_MGR **)(v13 + 104);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, (__int64)v17);
    v18 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)v17 + 60);
    v30 = 0LL;
    VidPnCopyForClient = VIDPN_MGR::CreateVidPnCopyForClient(v17, v14);
    v20 = VidPnCopyForClient;
    if ( VidPnCopyForClient >= 0 )
    {
      v23 = v30 + 88;
      v30 = 0LL;
      *(_QWORD *)a3 = (v23 - 88) & -(__int64)(v23 != 0);
      *a4 = v18;
      auto_rc<DMMVIDPN>::reset(&v30, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v27);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(7LL, VidPnCopyForClient);
      WdLogGlobalForLineNumber = 6745;
      auto_rc<DMMVIDPN>::reset(&v30, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v27);
      return v20;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 6719;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v27);
    return 3223192323LL;
  }
}
