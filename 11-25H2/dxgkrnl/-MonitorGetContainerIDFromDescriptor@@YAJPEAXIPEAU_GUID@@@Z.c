/*
 * XREFs of ?MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z @ 0x1401882C8
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F6A3C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140030B40 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MonitorGetContainerIDFromDescriptor(__int64 a1, unsigned int a2, struct _GUID *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( a1 )
  {
    if ( a2 == -1 )
      return -1073741275LL;
    MONITOR_MGR::AcquireMonitorShared(v7, a1, a2, 1u);
    if ( v7[0] )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v7[0] + 216LL) + 160LL);
      if ( !v6 || (*(int (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v6 + 216LL))(v6, a3) < 0 )
        v3 = -1073741275;
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 6745;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v7);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6734;
  }
  return v3;
}
