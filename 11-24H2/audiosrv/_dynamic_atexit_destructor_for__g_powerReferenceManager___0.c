/*
 * XREFs of _dynamic_atexit_destructor_for__g_powerReferenceManager___0 @ 0x1801736C0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x1800CBC6C (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__g_powerReferenceManager___0(__int64 a1)
{
  if ( g_powerReferenceManager )
    std::default_delete<CPowerReferenceManager>::operator()(a1, (CPowerReferenceManager *)g_powerReferenceManager);
}
