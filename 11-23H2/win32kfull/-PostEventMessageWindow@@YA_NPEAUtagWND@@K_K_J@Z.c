/*
 * XREFs of ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B4EB0
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     ?TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C013CBB0 (-TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C013CC20 (-TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C01E84D0 (_lambda_543ccbf82fb17ad955b7b487bb59a6ad_--_lambda_invoker_cdecl_.c)
 *     ?MigrateWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1C021C950 (-MigrateWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C021CCE8 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C0225D0C (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

bool __fastcall PostEventMessageWindow(struct tagTHREADINFO **a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  return (unsigned int)PostEventMessageEx(a1[2], *((struct tagQ **)a1[2] + 54), a2, (struct tagWND *)a1, 0, a3, a4, 0LL) != 0;
}
