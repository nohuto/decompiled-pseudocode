/*
 * XREFs of ModuleFailFastForHRESULT @ 0x1400048D4
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x140010780 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1400048E4 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn ModuleFailFastForHRESULT(int a1, const void *a2)
{
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x1400048DDLL);
}
