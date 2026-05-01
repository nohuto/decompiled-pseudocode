/*
 * XREFs of ??1?$unique_ptr@VStartupApproval@StartupDB@@U?$default_delete@VStartupApproval@StartupDB@@@std@@@std@@QEAA@XZ @ 0x180583900
 * Callers:
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x1805842E0 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 *     _StartupAppMonitor::IsStartupAppEnabled_::_1_::dtor$0 @ 0x1806F55BF (_StartupAppMonitor--IsStartupAppEnabled_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x180584888 (-Uninitialize@StartupApproval@StartupDB@@QEAAXXZ.c)
 */

void __fastcall std::unique_ptr<StartupDB::StartupApproval>::~unique_ptr<StartupDB::StartupApproval>(
        StartupDB::StartupApproval **a1)
{
  StartupDB::StartupApproval *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    StartupDB::StartupApproval::Uninitialize(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
