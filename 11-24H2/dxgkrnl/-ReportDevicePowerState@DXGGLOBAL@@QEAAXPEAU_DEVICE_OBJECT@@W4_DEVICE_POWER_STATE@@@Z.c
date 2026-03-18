/*
 * XREFs of ?ReportDevicePowerState@DXGGLOBAL@@QEAAXPEAU_DEVICE_OBJECT@@W4_DEVICE_POWER_STATE@@@Z @ 0x1402E6C64
 * Callers:
 *     DpiReportDevicePowerStateWorkItemCallback @ 0x1402E6C20 (DpiReportDevicePowerStateWorkItemCallback.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x14002B770 (-CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1402E7180 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReportDevicePowerState(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        enum _DEVICE_POWER_STATE a3)
{
  __int64 v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( DXGGLOBAL::CSAccountingInProgress(this) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGFASTMUTEX *const)(v5 + 2096), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    if ( a3 == PowerDeviceD3 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((DXGGLOBAL *)((char *)this + 2264));
      *((_BYTE *)this + 304393) = 1;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
}
