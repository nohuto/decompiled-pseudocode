/*
 * XREFs of ??1?$_Temporary_owner@VCStreamConnectionImpl@CMonitorManager@@@std@@QEAA@XZ @ 0x18010F514
 * Callers:
 *     ??$reset@VCStreamConnectionImpl@CMonitorManager@@$0A@@?$shared_ptr@VCStreamConnection@@@std@@QEAAXPEAVCStreamConnectionImpl@CMonitorManager@@@Z @ 0x18010EF80 (--$reset@VCStreamConnectionImpl@CMonitorManager@@$0A@@-$shared_ptr@VCStreamConnection@@@std@@QEA.c)
 * Callees:
 *     ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x18010FA0C (--_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<CMonitorManager::CStreamConnectionImpl>::~_Temporary_owner<CMonitorManager::CStreamConnectionImpl>(
        CMonitorManager::CStreamConnectionImpl **a1,
        unsigned int a2)
{
  CMonitorManager::CStreamConnectionImpl *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CMonitorManager::CStreamConnectionImpl::`scalar deleting destructor'(v2, a2);
  return result;
}
