/*
 * XREFs of ModuleFailFastForHRESULT @ 0x180096744
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056928 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18008EB44 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800966C8 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x1800F4B84 (-_Dwm_Xbad_function_call@std@@YAXXZ.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1800890F4 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn ModuleFailFastForHRESULT(DWORD a1, void *a2)
{
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x18009674DLL);
}
