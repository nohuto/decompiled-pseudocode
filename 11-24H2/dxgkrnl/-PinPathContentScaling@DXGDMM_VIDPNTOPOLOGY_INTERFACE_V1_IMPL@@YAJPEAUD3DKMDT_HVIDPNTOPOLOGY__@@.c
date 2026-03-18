/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x140317920
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14000D23C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14003DEE0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x14004F5D4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a5)
{
  __int64 v5; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v13; // r13d
  int v14; // eax
  __int64 v15; // r15
  __int64 Container; // rax
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // [rsp+50h] [rbp-20h] BYREF
  int v38; // [rsp+58h] [rbp-18h] BYREF
  __int64 v39; // [rsp+60h] [rbp-10h]
  char v40; // [rsp+68h] [rbp-8h]

  v38 = -1;
  v5 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v39 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 6026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 6026);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 6026);
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v37 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v5 == 254 )
    {
      WdLogSingleEntry4(2LL, 254LL, v8, v7, this);
      WdLogGlobalForLineNumber = 3068;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
      if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v38);
      return 3223192389LL;
    }
    else
    {
      v10 = v9 + 24;
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 == v9 + 24 )
        goto LABEL_20;
      v12 = v11 - 8;
      while ( v12 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v12 + 88) + 24LL) == (_DWORD)v8
          && *(_DWORD *)(*(_QWORD *)(v12 + 96) + 24LL) == (_DWORD)v7 )
        {
          break;
        }
        v23 = *(_QWORD *)(v12 + 8);
        v12 = v23 - 8;
        if ( v23 == v10 )
          v12 = 0LL;
      }
      if ( !v12 )
      {
LABEL_20:
        WdLogSingleEntry3(3LL, v8, v7, this);
        WdLogGlobalForLineNumber = 3081;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v38);
        return 3223192359LL;
      }
      else
      {
        v13 = *(_DWORD *)(v12 + 112);
        v14 = DMMVIDPNPRESENTPATH::PinContentScaling(
                (DMMVIDPNPRESENTPATH *)v12,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v5);
        v15 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry4(2LL, v5, v8, v7, v14);
          WdLogGlobalForLineNumber = 3098;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Unable to pin scaling transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
            v5,
            v8,
            v7,
            v15,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
          if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v38);
          return (unsigned int)v15;
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer(v37 + 160);
          LOBYTE(v17) = a5;
          v37 = __PAIR64__(v7, v8);
          v18 = VIDPN_MGR::FormalizeVidPnChange(
                  *(_QWORD *)(Container + 48),
                  Container & -(__int64)(Container != -88),
                  7LL,
                  v17,
                  &v37);
          v19 = v18;
          if ( v18 < 0 )
          {
            if ( v18 == -1071774970 )
            {
              WdLogSingleEntry3(3LL, v8, v7, v5);
              WdLogGlobalForLineNumber = 3129;
            }
            else
            {
              WdLogSingleEntry4(2LL, v5, v8, v7, v18);
              WdLogGlobalForLineNumber = 3134;
            }
            if ( v13 == D3DKMDT_VPPS_UNPINNED )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling((DMMVIDPNPRESENTPATH *)v12, v32, v33, v34) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 3143;
              }
            }
            else if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling((DMMVIDPNPRESENTPATH *)v12, v13) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3150;
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
            if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v38);
            return v19;
          }
          else
          {
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
            if ( v40 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v38);
            }
            return 0LL;
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 3059;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v38);
    return 3223192320LL;
  }
}
