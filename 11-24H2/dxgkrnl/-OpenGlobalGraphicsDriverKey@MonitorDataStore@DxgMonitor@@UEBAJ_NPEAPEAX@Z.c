/*
 * XREFs of ?OpenGlobalGraphicsDriverKey@MonitorDataStore@DxgMonitor@@UEBAJ_NPEAPEAX@Z @ 0x14027E610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::OpenGlobalGraphicsDriverKey(
        DxgMonitor::MonitorDataStore *this,
        __int64 a2,
        void **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, void **))(**((_QWORD **)this + 2) + 24LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
