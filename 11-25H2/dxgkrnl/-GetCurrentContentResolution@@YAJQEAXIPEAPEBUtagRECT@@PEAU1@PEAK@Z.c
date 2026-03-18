/*
 * XREFs of ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1403E9FDC
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall GetCurrentContentResolution(
        DXGADAPTER *a1,
        unsigned int a2,
        const struct tagRECT **a3,
        struct tagRECT *a4,
        unsigned int *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct tagRECT v11; // xmm0
  const struct tagRECT *v12; // rax
  unsigned int v13; // ecx

  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 989;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDxgAdapter->IsCoreResourceSharedOwner()",
      989LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 390) + 128LL) + 3984 * v6;
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 992;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplaySource != NULL", 992LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = *(_QWORD *)(v9 + 48);
  if ( v10 )
  {
    v11 = *(struct tagRECT *)(v9 + 688);
    v12 = (const struct tagRECT *)(v10 + 24);
    v13 = *(_DWORD *)(v10 + 40);
    *a3 = v12;
    *a4 = v11;
    *a5 = v13;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 999;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified display source 0x%I64x is owned by other session view, returning 0x%I64x.",
      v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
