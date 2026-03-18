/*
 * XREFs of ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x140344E08
 * Callers:
 *     DxgkQueryDmmInterface @ 0x140344CD8 (DxgkQueryDmmInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::QueryDxgDmmInterface(VIDPN_MGR *this, const struct _DXGDMM_INTERFACE **a2)
{
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1608;
  }
  *a2 = (const struct _DXGDMM_INTERFACE *)*((_QWORD *)this + 57);
}
