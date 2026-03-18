/*
 * XREFs of ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00AE784
 * Callers:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000F41C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00A40E8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     NtUserGetForegroundWindow @ 0x1C00AE710 (NtUserGetForegroundWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B2DB0 (PostIAMShellHookMessageEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01389E0 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01C9A08 (_GetNextQueueWindow.c)
 *     NtUserNavigateFocus @ 0x1C01D72E0 (NtUserNavigateFocus.c)
 *     _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C01E84D0 (_lambda_543ccbf82fb17ad955b7b487bb59a6ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00AE7EC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindowOrSelf(const struct tagWND *a1)
{
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *result; // rax

  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
  result = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
  if ( !result )
    return a1;
  return result;
}
