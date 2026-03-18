/*
 * XREFs of ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14028F0B8
 * Callers:
 *     _lambda_79eef42207348a29c4e9c7f357f04a2a_::_lambda_invoker_cdecl_ @ 0x14028F0A0 (_lambda_79eef42207348a29c4e9c7f357f04a2a_--_lambda_invoker_cdecl_.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14028F114 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x14028F454 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(OUTPUTDUPL_MGR *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 1LL, 0, 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, 0LL, 0);
}
