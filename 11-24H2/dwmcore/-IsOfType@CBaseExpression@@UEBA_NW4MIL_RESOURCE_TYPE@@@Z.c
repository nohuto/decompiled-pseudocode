/*
 * XREFs of ?IsOfType@CBaseExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180012990
 * Callers:
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180012630 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800BF2C0 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::IsOfType(__int64 a1, int a2)
{
  return a2 == 11 || a2 == 114;
}
