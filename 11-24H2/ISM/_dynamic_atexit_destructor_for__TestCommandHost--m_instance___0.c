/*
 * XREFs of _dynamic_atexit_destructor_for__TestCommandHost::m_instance___0 @ 0x1801DA310
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VTestCommandHost@@@std@@QEBAXPEAVTestCommandHost@@@Z @ 0x18010AEE4 (--R-$default_delete@VTestCommandHost@@@std@@QEBAXPEAVTestCommandHost@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__TestCommandHost::m_instance___0(__int64 a1)
{
  if ( TestCommandHost::m_instance )
    std::default_delete<TestCommandHost>::operator()(a1, (TestCommandHost *)TestCommandHost::m_instance);
}
