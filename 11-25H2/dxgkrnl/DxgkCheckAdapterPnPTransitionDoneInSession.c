/*
 * XREFs of DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1401F6328
 * Callers:
 *     _lambda_ec9be0798148cde4307a409e56f7cee0_::operator() @ 0x1401BF350 (_lambda_ec9be0798148cde4307a409e56f7cee0_--operator().c)
 *     _lambda_f44fa2b0187a36f67bd7075047dd61ad_::operator() @ 0x1401BF5A4 (_lambda_f44fa2b0187a36f67bd7075047dd61ad_--operator().c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckAdapterPnPTransitionDoneInCurrentSession@DXGSESSIONMGR@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401F3798 (-CheckAdapterPnPTransitionDoneInCurrentSession@DXGSESSIONMGR@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DxgkCheckAdapterPnPTransitionDoneInSession(struct DXGADAPTER *a1)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::CheckAdapterPnPTransitionDoneInCurrentSession(*((DXGSESSIONMGR **)Global + 118), a1);
}
