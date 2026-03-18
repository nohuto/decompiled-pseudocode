/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x140314DB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1400405F0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x14031545C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1403168E0 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  bool v3; // r15
  __int64 v5; // r14
  DMMVIDPNTARGETMODESET *v6; // rax
  struct DMMVIDPNTARGETMODESET *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 Container; // rax
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h]
  char v28; // [rsp+30h] [rbp-10h]

  v26 = -1;
  v3 = a3;
  v27 = 0LL;
  v5 = (unsigned int)a2;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 6014);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6014);
  v6 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v6;
  if ( v6 )
  {
    v10 = DMMVIDPNTARGETMODESET::PinMode(v6, v5);
    if ( v10 < 0 )
    {
      v21 = WdLogNewEntry5_WdTrace(v9, v8, v11, v12);
      *(_QWORD *)(v21 + 24) = v5;
      *(_QWORD *)(v21 + 32) = this;
      WdLogGlobalForLineNumber = 1489;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v26);
      return (unsigned int)v10;
    }
    else
    {
      v13 = *((_QWORD *)v7 + 14);
      if ( !v13 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1502;
      }
      if ( !*(_QWORD *)(v13 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v13 + 40) + 64LL);
      v15 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(Container + 48), v7, v5, v3);
      if ( v15 < 0 )
      {
        WdLogSingleEntry2(7LL, v5, this);
        WdLogGlobalForLineNumber = 1518;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v26);
        return (unsigned int)v15;
      }
      else
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v26);
        }
        return 0LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 1476;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v26);
    return 3223192329LL;
  }
}
