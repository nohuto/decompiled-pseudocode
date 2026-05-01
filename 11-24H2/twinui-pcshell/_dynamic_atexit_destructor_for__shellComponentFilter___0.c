/*
 * XREFs of _dynamic_atexit_destructor_for__shellComponentFilter___0 @ 0x1807076D0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z @ 0x1803EBB64 (--R-$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__shellComponentFilter___0(__int64 a1)
{
  if ( shellComponentFilter )
    std::default_delete<ShellComponentFilter>::operator()(a1, (HMODULE *)shellComponentFilter);
}
