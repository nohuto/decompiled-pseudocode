/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1403BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14003B498 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14003EA0C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140055508 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A3F00 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v5; // r12
  __int64 v7; // rdi
  __int64 v8; // rsi
  DMMVIDPNTOPOLOGY *v9; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  DMMVIDPNPRESENTPATH *v11; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // r13d
  int v13; // eax
  __int64 v14; // r15
  __int64 Container; // rax
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // [rsp+50h] [rbp-20h] BYREF
  int v35; // [rsp+58h] [rbp-18h] BYREF
  __int64 v36; // [rsp+60h] [rbp-10h]
  char v37; // [rsp+68h] [rbp-8h]

  v35 = -1;
  v5 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v36 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 6028);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 6028);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v34 = (unsigned __int64)v9;
  if ( v9 )
  {
    if ( (_DWORD)v5 == 254 )
    {
      WdLogSingleEntry4(2LL, 254LL, v8, v7, this);
      WdLogGlobalForLineNumber = 3361;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v35);
      return 3223192389LL;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
      v11 = Path;
      if ( Path )
      {
        v12 = *((_DWORD *)Path + 29);
        v13 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v5);
        v14 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry4(2LL, v5, v8, v7, v13);
          WdLogGlobalForLineNumber = 3391;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Unable to pin rotation transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
            v5,
            v8,
            v7,
            v14,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
          if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v35);
          return (unsigned int)v14;
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer(v34 + 160);
          v34 = __PAIR64__(v7, v8);
          v16 = VIDPN_MGR::FormalizeVidPnChange(
                  *(VIDPN_MGR **)(Container + 48),
                  (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
                  9,
                  a5,
                  (unsigned int *)&v34);
          v17 = v16;
          if ( v16 < 0 )
          {
            if ( v16 == -1071774970 )
            {
              WdLogSingleEntry3(3LL, v8, v7, v5);
              WdLogGlobalForLineNumber = 3422;
            }
            else
            {
              WdLogSingleEntry4(2LL, v5, v8, v7, v16);
              WdLogGlobalForLineNumber = 3427;
            }
            if ( v12 == D3DKMDT_VPPR_UNPINNED )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(v11, v29, v30, v31) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 3435;
              }
            }
            else if ( (int)DMMVIDPNPRESENTPATH::PinContentRotation(v11, v12) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3441;
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
            if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v35);
            return v17;
          }
          else
          {
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
            if ( v37 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v35);
            }
            return 0LL;
          }
        }
      }
      else
      {
        WdLogSingleEntry3(3LL, v8, v7, this);
        WdLogGlobalForLineNumber = 3374;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v35);
        return 3223192359LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 3352;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v35);
    return 3223192320LL;
  }
}
