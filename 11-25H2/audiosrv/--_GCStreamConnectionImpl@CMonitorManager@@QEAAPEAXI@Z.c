/*
 * XREFs of ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x18010FA0C
 * Callers:
 *     ??1?$_Temporary_owner@VCStreamConnectionImpl@CMonitorManager@@@std@@QEAA@XZ @ 0x18010F514 (--1-$_Temporary_owner@VCStreamConnectionImpl@CMonitorManager@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VCStreamConnectionImpl@CMonitorManager@@@std@@EEAAXXZ @ 0x180113F30 (-_Destroy@-$_Ref_count@VCStreamConnectionImpl@CMonitorManager@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStreamConnectionImpl@CMonitorManager@@QEAA@XZ @ 0x18010F690 (--1CStreamConnectionImpl@CMonitorManager@@QEAA@XZ.c)
 */

CMonitorManager::CStreamConnectionImpl *__fastcall CMonitorManager::CStreamConnectionImpl::`scalar deleting destructor'(
        CMonitorManager::CStreamConnectionImpl *this)
{
  CMonitorManager::CStreamConnectionImpl::~CStreamConnectionImpl(this);
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
