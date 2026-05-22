/*
 * XREFs of ??R?$default_delete@VSessionMonitor@@@std@@QEBAXPEAVSessionMonitor@@@Z @ 0x1800A2DE8
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C55C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??1?$unique_ptr@VSessionMonitor@@U?$default_delete@VSessionMonitor@@@std@@@std@@QEAA@XZ @ 0x1800A2C4C (--1-$unique_ptr@VSessionMonitor@@U-$default_delete@VSessionMonitor@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SessionMonitor@@QEAA@XZ @ 0x1800A4430 (--1SessionMonitor@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<SessionMonitor>::operator()(__int64 a1, SessionMonitor *a2)
{
  if ( a2 )
  {
    SessionMonitor::~SessionMonitor(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x28);
  }
}
