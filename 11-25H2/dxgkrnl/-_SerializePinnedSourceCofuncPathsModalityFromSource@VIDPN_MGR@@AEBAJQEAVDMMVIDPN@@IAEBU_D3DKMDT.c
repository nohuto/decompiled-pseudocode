/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1402564F4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004106C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1402545D4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x14025D540 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        DMMVIDPN *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  DMMVIDPNTARGET *SourceFromId; // rax
  __int64 result; // rax
  struct DMMVIDPNTARGETMODESET *v11; // rbx
  struct DMMVIDPNSOURCEMODESET *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  _QWORD *v19; // rax
  int v20; // eax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DMMVIDPNSOURCEMODESET *v22; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4180;
  }
  if ( (_DWORD)v5 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4181;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4182;
  }
  SourceFromId = DMMVIDPN::GetSourceFromId(a2, v5);
  if ( !SourceFromId )
  {
    WdLogSingleEntry1(2LL, v5);
    result = 3223192324LL;
    WdLogGlobalForLineNumber = 4195;
    return result;
  }
  v22 = 0LL;
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4207;
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v22, (__int64)v11);
  v12 = v22;
  v13 = VIDPN_MGR::PinVidPnSourceMode(this, v22, a4);
  v18 = v13;
  if ( v13 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    v19[3] = a4;
    v19[4] = v12;
    v19[5] = v18;
    WdLogGlobalForLineNumber = 4220;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v22, 0LL);
    return (unsigned int)v18;
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v22, 0LL);
  v20 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPN *)((char *)a2 + 96), v5);
  v18 = v20;
  if ( v20 < 0 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry3(2LL, v5, ContainingAdapter, v18);
    WdLogGlobalForLineNumber = 4238;
    return (unsigned int)v18;
  }
  return 0LL;
}
