/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x14039E2D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14001C81C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14003EA0C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x14004FB54 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A3F00 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
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
  int v17; // eax
  unsigned int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // [rsp+50h] [rbp-20h] BYREF
  int v37; // [rsp+58h] [rbp-18h] BYREF
  __int64 v38; // [rsp+60h] [rbp-10h]
  char v39; // [rsp+68h] [rbp-8h]

  v37 = -1;
  v5 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v38 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 6026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 6026);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 6026);
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v36 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v5 == 254 )
    {
      WdLogSingleEntry4(2LL, 254LL, v8, v7, this);
      WdLogGlobalForLineNumber = 3068;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
      if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v37);
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
        v22 = *(_QWORD *)(v12 + 8);
        v12 = v22 - 8;
        if ( v22 == v10 )
          v12 = 0LL;
      }
      if ( !v12 )
      {
LABEL_20:
        WdLogSingleEntry3(3LL, v8, v7, this);
        WdLogGlobalForLineNumber = 3081;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v37);
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
            0x40000,
            0xFFFFFFFFLL,
            L"Unable to pin scaling transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
            v5,
            v8,
            v7,
            v15,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
          if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v37);
          return (unsigned int)v15;
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer(v36 + 160);
          v36 = __PAIR64__(v7, v8);
          v17 = VIDPN_MGR::FormalizeVidPnChange(
                  *(VIDPN_MGR **)(Container + 48),
                  (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
                  7,
                  a5,
                  (unsigned int *)&v36);
          v18 = v17;
          if ( v17 < 0 )
          {
            if ( v17 == -1071774970 )
            {
              WdLogSingleEntry3(3LL, v8, v7, v5);
              WdLogGlobalForLineNumber = 3129;
            }
            else
            {
              WdLogSingleEntry4(2LL, v5, v8, v7, v17);
              WdLogGlobalForLineNumber = 3134;
            }
            if ( v13 == D3DKMDT_VPPS_UNPINNED )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling((DMMVIDPNPRESENTPATH *)v12, v31, v32, v33) < 0 )
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
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
            if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v37);
            return v18;
          }
          else
          {
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
            if ( v39 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v37);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v37);
    return 3223192320LL;
  }
}
