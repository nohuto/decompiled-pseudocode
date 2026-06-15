/*
 * XREFs of ??1DeviceStateChangedContext@CMonitorManager@@QEAA@XZ @ 0x18000B64C
 * Callers:
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18000B620 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::DeviceStateChangedContext::~DeviceStateChangedContext(
        CMonitorManager::DeviceStateChangedContext *this)
{
  struct _TP_WORK *v2; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 2);
  if ( v2 )
    CloseThreadpoolWork(v2);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(this);
}
