/*
 * XREFs of ?CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x14039F344
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x14039F2F0 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x14039F320 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000DFE8 (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x140039D04 (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003DD80 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSetImpl(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        unsigned __int64 *a4,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a5)
{
  __int64 v6; // r12
  int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ **v14; // rdi
  __int64 v15; // rax
  DMMVIDPN *v16; // rcx
  __int64 v17; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v18; // r14
  DMMVIDPNTARGET *TargetFromId; // rax
  DMMVIDPNTARGET *v20; // rsi
  int NewCofuncModeSet; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+20h] [rbp-20h] BYREF
  __int64 v35; // [rsp+28h] [rbp-18h]
  char v36; // [rsp+30h] [rbp-10h]
  __int64 v37; // [rsp+70h] [rbp+30h] BYREF

  v34 = -1;
  v6 = (unsigned int)a2;
  v7 = a3;
  v35 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 7050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 7050);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 7050);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14 = a5;
  v13[3] = this;
  v13[4] = a4;
  v13[5] = v14;
  WdLogGlobalForLineNumber = 4178;
  if ( a4 )
  {
    if ( v14 )
    {
      *a4 = 0LL;
      *v14 = 0LL;
      v15 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
      v16 = (DMMVIDPN *)v15;
      if ( v15 )
      {
        v17 = *(_QWORD *)(v15 + 48);
        if ( v7 == 1 )
          v18 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v17 + 440);
        else
          v18 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v17 + 448);
        TargetFromId = DMMVIDPN::GetTargetFromId(v16, v6);
        v20 = TargetFromId;
        if ( TargetFromId )
        {
          v37 = 0LL;
          a5 = 0LL;
          NewCofuncModeSet = DMMVIDPNTARGET::CreateNewCofuncModeSet(TargetFromId, (struct DMMVIDPNTARGETMODESET **)&a5);
          v22 = NewCofuncModeSet;
          if ( NewCofuncModeSet < 0 )
          {
            WdLogSingleEntry2(7LL, *((unsigned int *)v20 + 6), NewCofuncModeSet);
            WdLogGlobalForLineNumber = 4258;
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, 0LL);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
            if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v34);
            return v22;
          }
          else
          {
            *a4 = (unsigned __int64)a5 & -(__int64)((struct D3DKMDT_HVIDPNTARGETMODESET__ **)((char *)a5 + 137) != 0LL);
            *v14 = v18;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
            if ( v36 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v34);
            }
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v6);
          WdLogGlobalForLineNumber = 4242;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
          if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v34);
          return 3223192325LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 4216;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
        if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v34);
        return 3223192323LL;
      }
    }
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 4195;
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 4186;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v34);
  return 3221225485LL;
}
