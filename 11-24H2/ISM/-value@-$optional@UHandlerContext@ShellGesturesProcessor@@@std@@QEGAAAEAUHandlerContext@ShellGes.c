/*
 * XREFs of ?value@?$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEGAAAEAUHandlerContext@ShellGesturesProcessor@@XZ @ 0x18009C108
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180089560 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B78C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<ShellGesturesProcessor::HandlerContext>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 32) )
    std::_Throw_bad_optional_access();
  return a1;
}
