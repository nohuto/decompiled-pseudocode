/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403DA558
 * Callers:
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x140061AC0 (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     _lambda_0e946522d05123f26763d9a2a20a36ba_::operator() @ 0x1401BAB6C (_lambda_0e946522d05123f26763d9a2a20a36ba_--operator().c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403DA174 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071260 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs2(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v8; // r14d
  __int64 v9; // r9
  char *v10; // rax
  char *v11; // rbx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rdi

  v6 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5, (_BYTE)a6);
  if ( v6 )
  {
    v8 = (TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, BYTE4(a6) & 1) + 4095) & 0xFFFFF000;
    v10 = (char *)operator new[](v8, 0x4B677844u, 256LL, v9);
    v11 = v10;
    if ( v10 )
    {
      v12 = TdrCollectBugcheckSecondaryDumpData(v10, v8, 1, BYTE4(a6) & 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v6, v11, v12) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11502;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          11502LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
    }
    else
    {
      WdLogSingleEntry1(6LL, v8);
      WdLogGlobalForLineNumber = 11509;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Out of memory allocating live dump data (size 0x%I64x)",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = WdDbgReportComplete(v6);
    v14 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 11516;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"WdDbgReportComplete returned failed status while building live dump. Status = 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v14;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11489;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"WdDbgReportCreate failed", 11489LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
}
