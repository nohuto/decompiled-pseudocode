/*
 * XREFs of ModuleFailFastForHRESULT @ 0x140004440
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000EDA0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x140004450 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn ModuleFailFastForHRESULT(int a1, const void *a2)
{
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x140004449LL);
}
