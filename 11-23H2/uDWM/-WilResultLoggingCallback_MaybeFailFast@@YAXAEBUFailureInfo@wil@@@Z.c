/*
 * XREFs of ?WilResultLoggingCallback_MaybeFailFast@@YAXAEBUFailureInfo@wil@@@Z @ 0x1800CC9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall WilResultLoggingCallback_MaybeFailFast(const struct wil::FailureInfo *a1)
{
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, *((_DWORD *)a1 + 2), *((_DWORD *)a1 + 16));
}
