/*
 * XREFs of ?IsDebuggerPresent@details@wil@@YA_NXZ @ 0x1800340D0
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x180034BB8 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7PEAUFailureInfo@2@@Z @ 0x180076600 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7P.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::IsDebuggerPresent(wil::details *this)
{
  char v1; // bl

  v1 = 0;
  if ( wil::g_fIsDebuggerPresent )
    return 1;
  if ( wil::g_pfnIsDebuggerPresent ? (unsigned __int8)wil::g_pfnIsDebuggerPresent(this) : IsDebuggerPresent() )
    return 1;
  return v1;
}
