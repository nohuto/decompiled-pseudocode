/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403D3668
 * Callers:
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006237C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     _lambda_d15561d970b8cd1158562b53bc5433ff_::operator() @ 0x1401BDBC0 (_lambda_d15561d970b8cd1158562b53bc5433ff_--operator().c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F5CF8 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403D3284 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071BE0 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
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
  char *v9; // rax
  char *v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rdi

  v6 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5, (_BYTE)a6);
  if ( v6 )
  {
    v8 = (TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, BYTE4(a6) & 1) + 4095) & 0xFFFFF000;
    v9 = (char *)operator new[](v8, 0x4B677844u, 256LL);
    v10 = v9;
    if ( v9 )
    {
      v11 = TdrCollectBugcheckSecondaryDumpData(v9, v8, 1, BYTE4(a6) & 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v6, v10, v11) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11563;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          11563LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    }
    else
    {
      WdLogSingleEntry1(6LL, v8);
      WdLogGlobalForLineNumber = 11570;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Out of memory allocating live dump data (size 0x%I64x)",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = WdDbgReportComplete(v6);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 11577;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"WdDbgReportComplete returned failed status while building live dump. Status = 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11550;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"WdDbgReportCreate failed", 11550LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
}
