/*
 * XREFs of ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1403C05D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001E5F8 (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003E4C0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004106C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        unsigned __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v5; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  DMMVIDPN *v13; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v14; // r15
  DMMVIDPNSOURCE *SourceFromId; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  DMMVIDPNSOURCE *v18; // r14
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  struct DMMVIDPNSOURCEMODESET *v35; // [rsp+80h] [rbp+40h] BYREF
  __int64 v36; // [rsp+90h] [rbp+50h] BYREF

  v32 = -1;
  v5 = (unsigned int)a2;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7045);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 7045);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = a3;
  v12[5] = a4;
  WdLogGlobalForLineNumber = 3607;
  if ( a3 )
  {
    if ( a4 )
    {
      *a3 = 0LL;
      *a4 = 0LL;
      v13 = (DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
      if ( v13 )
      {
        v14 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*((_QWORD *)v13 + 6) + 432LL);
        SourceFromId = DMMVIDPN::GetSourceFromId(v13, v5);
        v18 = SourceFromId;
        if ( SourceFromId )
        {
          v36 = 0LL;
          v35 = 0LL;
          v19 = DMMVIDPNSOURCE::CreateNewCofuncModeSet(SourceFromId, &v35, v16, v17);
          v20 = v19;
          if ( v19 < 0 )
          {
            WdLogSingleEntry2(7LL, *((unsigned int *)v18 + 6), v19);
            WdLogGlobalForLineNumber = 3687;
            auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v36, 0LL);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v32);
            return v20;
          }
          else
          {
            *a3 = (unsigned __int64)v35 & -(__int64)((struct DMMVIDPNSOURCEMODESET *)((char *)v35 + 137) != 0LL);
            *a4 = v14;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v32);
            }
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v5);
          WdLogGlobalForLineNumber = 3671;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
          if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v32);
          return 3223192324LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 3645;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v32);
        return 3223192323LL;
      }
    }
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 3624;
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 3615;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v32);
  return 3221225485LL;
}
