/*
 * XREFs of _dynamic_atexit_destructor_for__WinUICohabitationFunctions::s_instance___0 @ 0x180707700
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z @ 0x18044EDD8 (--R-$default_delete@VWinUICohabitationFunctions@@@std@@QEBAXPEAVWinUICohabitationFunctions@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__WinUICohabitationFunctions::s_instance___0(__int64 a1)
{
  if ( WinUICohabitationFunctions::s_instance )
    std::default_delete<WinUICohabitationFunctions>::operator()(a1, (HMODULE *)WinUICohabitationFunctions::s_instance);
}
