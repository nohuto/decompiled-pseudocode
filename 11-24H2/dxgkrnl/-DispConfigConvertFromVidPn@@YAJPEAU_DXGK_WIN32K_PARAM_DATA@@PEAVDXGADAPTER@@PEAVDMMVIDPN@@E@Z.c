/*
 * XREFs of ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1401C3488
 * Callers:
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402577C4 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140269054 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1402D6294 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall DispConfigConvertFromVidPn(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct DXGADAPTER *a2,
        struct DMMVIDPN *a3,
        char a4)
{
  __int64 v7; // rdi
  unsigned __int64 *Pool2; // rax
  unsigned __int64 *v9; // rsi
  CCD_BTL *v11; // rax
  int v12; // ebx
  unsigned __int64 *v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-1Ch]
  unsigned __int64 *v18; // [rsp+58h] [rbp-18h]
  unsigned __int64 *v19; // [rsp+60h] [rbp-10h]
  struct D3DKMT_GETPATHSMODALITY *v20; // [rsp+A0h] [rbp+30h] BYREF

  if ( !a1 || !a2 || !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1855;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"io_pContext && i_pAdapter && i_pDmmVidPn",
      1855LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1->NumModeArrayElements || a1->NumPathArrayElements )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1856;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(io_pContext->NumModeArrayElements == 0) && (io_pContext->NumPathArrayElements == 0)",
      1856LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1->PathsArray || a1->ModesArray )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1857;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(io_pContext->PathsArray == NULL) && (io_pContext->ModesArray == NULL)",
      1857LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((unsigned int *)a3 + 34);
  a1->NumPathArrayElements = v7;
  v16 = 0;
  v19 = 0LL;
  v17 = v7;
  Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, 216 * v7, 1313891414LL);
  v18 = Pool2;
  v9 = Pool2;
  a1->PathsArray = Pool2;
  if ( Pool2 )
  {
    if ( (_DWORD)v7 )
      memset(Pool2, 0, 216 * v7);
    v19 = v9;
    LOBYTE(v16) = 0;
    v20 = 0LL;
    a1->SDCFlags = (a4 != 0 ? 16 : 4640) | 0x80;
    v11 = CCD_BTL::Global();
    v12 = CCD_BTL::ConvertVidPnToPathsModality(v11, a3, &v20);
    if ( v12 >= 0 )
    {
      v12 = ConvertPathModalityToDisplayConfig(v20, 0, 0, (struct QDC_CONTEXT *)&v16);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v20);
      if ( v17 )
      {
        v13 = v18;
        v14 = v17;
        do
        {
          v15 = *v13 | 0x8000000000000000uLL;
          *v13 = v15;
          if ( a4 )
            *v13 = v15 & 0xFFFFFBFFFFFCF478uLL;
          v13 += 27;
          --v14;
        }
        while ( v14 );
      }
    }
    else
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v20);
    }
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(6LL, (unsigned int)v7);
    WdLogGlobalForLineNumber = 1879;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Unable to allocate %I64u dispconfig paths for conversion.",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
