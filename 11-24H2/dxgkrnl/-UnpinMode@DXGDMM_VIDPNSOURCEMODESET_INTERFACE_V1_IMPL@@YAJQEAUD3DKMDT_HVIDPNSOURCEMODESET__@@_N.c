/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1403D70E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x140039970 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x140058BD8 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  DMMVIDPNSOURCEMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DMMVIDPNSOURCEMODESET *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 Container; // rax
  unsigned int v18; // edx
  __int64 v19; // rsi
  VIDPN_MGR *v20; // rcx
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+38h] [rbp-18h]
  char v35; // [rsp+40h] [rbp-10h]
  unsigned int v36; // [rsp+80h] [rbp+30h] BYREF
  int v37; // [rsp+84h] [rbp+34h]

  v33 = -1;
  v3 = (char)a2;
  v34 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 6008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 6008);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 6008);
  v5 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v9 = v5;
  if ( v5 )
  {
    v10 = DMMVIDPNSOURCEMODESET::UnpinMode(v5, v6, v7, v8);
    v15 = v10;
    if ( v10 < 0 )
    {
      v28 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      *(_QWORD *)(v28 + 24) = this;
      *(_QWORD *)(v28 + 32) = v15;
      WdLogGlobalForLineNumber = 704;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v33);
      return (unsigned int)v15;
    }
    else
    {
      v16 = *((_QWORD *)v9 + 14);
      if ( !v16 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 719;
      }
      if ( !*(_QWORD *)(v16 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v16 + 40) + 64LL);
      v18 = *(_DWORD *)(v16 + 24);
      v19 = Container;
      v20 = *(VIDPN_MGR **)(Container + 48);
      v37 = -1;
      v36 = v18;
      v21 = VIDPN_MGR::FormalizeVidPnChange(
              v20,
              (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
              4,
              v3,
              &v36);
      v22 = v21;
      if ( v21 >= 0 )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v33);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry3(2LL, *(unsigned int *)(v16 + 24), v19, v21);
        WdLogGlobalForLineNumber = 739;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v33);
        }
        return v22;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 691;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v33);
    return 3223192328LL;
  }
}
