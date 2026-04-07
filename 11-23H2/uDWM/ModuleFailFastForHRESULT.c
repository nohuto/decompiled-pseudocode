/*
 * XREFs of ModuleFailFastForHRESULT @ 0x1800CCA2C
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180028E80 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18010DC5C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x18010DD24 (-_Dwm_Xbad_function_call@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18010DBCC (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn ModuleFailFastForHRESULT(int a1, const void *a2)
{
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x1800CCA35LL);
}
