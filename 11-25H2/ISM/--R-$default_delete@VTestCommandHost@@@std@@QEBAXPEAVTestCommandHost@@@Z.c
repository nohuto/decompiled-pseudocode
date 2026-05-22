/*
 * XREFs of ??R?$default_delete@VTestCommandHost@@@std@@QEBAXPEAVTestCommandHost@@@Z @ 0x180108FD4
 * Callers:
 *     ?Initialize@TestCommandHost@@SAXXZ @ 0x18009BFD0 (-Initialize@TestCommandHost@@SAXXZ.c)
 *     _dynamic_atexit_destructor_for__TestCommandHost::m_instance___0 @ 0x1801D2860 (_dynamic_atexit_destructor_for__TestCommandHost--m_instance___0.c)
 * Callees:
 *     ??1TestCommandHost@@QEAA@XZ @ 0x18007D910 (--1TestCommandHost@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<TestCommandHost>::operator()(__int64 a1, TestCommandHost *a2)
{
  if ( a2 )
  {
    TestCommandHost::~TestCommandHost(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x88);
  }
}
