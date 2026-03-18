/*
 * XREFs of ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401887D0
 * Callers:
 *     _lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_ @ 0x140194460 (_lambda_8c4f9d5363fac7cd16350590c99b22c5_--_lambda_invoker_cdecl_.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1403F7880 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1402D8EE4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessAdapterReset(ADAPTER_DISPLAY **this)
{
  ADAPTER_DISPLAY *v2; // rcx
  unsigned int i; // edi

  v2 = *this;
  if ( v2 && !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1422;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      1422LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 0LL, 0, 2);
}
