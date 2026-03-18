/*
 * XREFs of ?RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x140272F94
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403D545C (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032CC8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x1400508E0 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::RetrieveIntegratedPanelNativeOverride(struct _ERESOURCE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  int OwnerTable_high; // ecx
  SHORT *p_ActiveCount; // r8
  __int64 v10; // xmm1_8
  DxgMonitor::MonitorModes *v11; // rax
  DxgMonitor::MonitorModes **SharedWaiters; // rcx
  SHORT *i; // rcx
  SHORT *v14; // rax
  struct _ERESOURCE *v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h]
  __int128 v19; // [rsp+48h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-20h]

  v16 = this;
  if ( this )
    MonitorResourceLock::AcquireExclusive(this);
  v2 = *(_QWORD *)&this[2].ActiveCount;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 40LL))(v3, &v17);
  if ( v4 >= 0 )
  {
    v6 = operator new(0x78uLL, 0x4D677844u, 256LL, v5);
    v7 = v6;
    if ( v6 )
    {
      OwnerTable_high = HIDWORD(this[1].OwnerTable);
      p_ActiveCount = &this[1].ActiveCount;
      HIDWORD(this[1].OwnerTable) = OwnerTable_high + 1;
      *(_DWORD *)v6 = OwnerTable_high;
      *(_OWORD *)(v6 + 8) = v17;
      *(_OWORD *)(v6 + 24) = v18;
      *(_OWORD *)(v6 + 40) = v19;
      v10 = v20;
      *(_DWORD *)(v6 + 68) = 8;
      *(_DWORD *)(v6 + 72) = 8;
      *(_QWORD *)(v6 + 76) = 8LL;
      v11 = (DxgMonitor::MonitorModes *)(v6 + 96);
      *(_QWORD *)(v7 + 56) = v10;
      *(_DWORD *)(v7 + 64) = 2;
      *(_DWORD *)(v7 + 84) = 5;
      *(_DWORD *)(v7 + 88) = 1;
      SharedWaiters = (DxgMonitor::MonitorModes **)this[1].SharedWaiters;
      if ( *SharedWaiters != (DxgMonitor::MonitorModes *)&this[1].ActiveCount )
        __fastfail(3u);
      *(_QWORD *)v11 = p_ActiveCount;
      *(_QWORD *)(v7 + 104) = SharedWaiters;
      *SharedWaiters = v11;
      this[1].SharedWaiters = v11;
      ++LODWORD(this[1].OwnerTable);
      this[1].ExclusiveWaiters = (PVOID)v7;
      for ( i = *(SHORT **)p_ActiveCount; ; i = (SHORT *)*((_QWORD *)v14 + 12) )
      {
        if ( i == p_ActiveCount )
        {
          v14 = 0LL;
        }
        else
        {
          v14 = i - 48;
          if ( !i )
            v14 = 0LL;
        }
        if ( !v14 )
          break;
        if ( *((_DWORD *)v14 + 21) == 2 && *((_DWORD *)v14 + 22) == 1 )
        {
          *((_DWORD *)v14 + 22) = 2;
          break;
        }
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 2035;
      v4 = -1073741801;
    }
  }
  RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v16);
  return (unsigned int)v4;
}
