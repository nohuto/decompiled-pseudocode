/*
 * XREFs of DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1401FCC38
 * Callers:
 *     _lambda_4d219c55c1944bedc25da37a83fa6654_::operator() @ 0x1401C1D00 (_lambda_4d219c55c1944bedc25da37a83fa6654_--operator().c)
 *     _lambda_9212365dda97cb37a6803fd149b753fd_::operator() @ 0x1401C1F5C (_lambda_9212365dda97cb37a6803fd149b753fd_--operator().c)
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401C21B0 (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401C2A10 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckAdapterPnPTransitionDoneInCurrentSession@DXGSESSIONMGR@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401F9FE4 (-CheckAdapterPnPTransitionDoneInCurrentSession@DXGSESSIONMGR@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DxgkCheckAdapterPnPTransitionDoneInSession(struct DXGADAPTER *a1)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::CheckAdapterPnPTransitionDoneInCurrentSession(*((DXGSESSIONMGR **)Global + 122), a1);
}
