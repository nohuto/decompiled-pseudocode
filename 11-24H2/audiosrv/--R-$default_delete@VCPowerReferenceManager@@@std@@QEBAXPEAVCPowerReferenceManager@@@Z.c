/*
 * XREFs of ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x1800CBC6C
 * Callers:
 *     ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x1800CB900 (--1-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAXPEAVCPowerReferenceManager@@@Z @ 0x1800D0EE8 (-reset@-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@s.c)
 *     _dynamic_atexit_destructor_for__g_powerReferenceManager___0 @ 0x1801736C0 (_dynamic_atexit_destructor_for__g_powerReferenceManager___0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180109A64 (--1CPowerReferenceManager@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CPowerReferenceManager>::operator()(__int64 a1, CPowerReferenceManager *a2)
{
  if ( a2 )
  {
    CPowerReferenceManager::~CPowerReferenceManager(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x1E8);
  }
}
