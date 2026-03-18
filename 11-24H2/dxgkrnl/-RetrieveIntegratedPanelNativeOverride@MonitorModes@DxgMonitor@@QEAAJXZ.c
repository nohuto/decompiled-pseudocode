/*
 * XREFs of ?RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14027A18C
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403CD4E8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140050354 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::RetrieveIntegratedPanelNativeOverride(struct _ERESOURCE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  int OwnerTable_high; // ecx
  SHORT *p_ActiveCount; // r8
  __int64 v9; // xmm1_8
  DxgMonitor::MonitorModes *v10; // rax
  DxgMonitor::MonitorModes **SharedWaiters; // rcx
  SHORT *i; // rcx
  SHORT *v13; // rax
  struct _ERESOURCE *v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-40h]
  __int128 v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-20h]

  v15 = this;
  if ( this )
    MonitorResourceLock::AcquireExclusive(this);
  v2 = *(_QWORD *)&this[2].ActiveCount;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 40LL))(v3, &v16);
  if ( v4 >= 0 )
  {
    v5 = operator new(0x78uLL, 0x4D677844u, 256LL);
    v6 = v5;
    if ( v5 )
    {
      OwnerTable_high = HIDWORD(this[1].OwnerTable);
      p_ActiveCount = &this[1].ActiveCount;
      HIDWORD(this[1].OwnerTable) = OwnerTable_high + 1;
      *(_DWORD *)v5 = OwnerTable_high;
      *(_OWORD *)(v5 + 8) = v16;
      *(_OWORD *)(v5 + 24) = v17;
      *(_OWORD *)(v5 + 40) = v18;
      v9 = v19;
      *(_DWORD *)(v5 + 68) = 8;
      *(_DWORD *)(v5 + 72) = 8;
      *(_QWORD *)(v5 + 76) = 8LL;
      v10 = (DxgMonitor::MonitorModes *)(v5 + 96);
      *(_QWORD *)(v6 + 56) = v9;
      *(_DWORD *)(v6 + 64) = 2;
      *(_DWORD *)(v6 + 84) = 5;
      *(_DWORD *)(v6 + 88) = 1;
      SharedWaiters = (DxgMonitor::MonitorModes **)this[1].SharedWaiters;
      if ( *SharedWaiters != (DxgMonitor::MonitorModes *)&this[1].ActiveCount )
        __fastfail(3u);
      *(_QWORD *)v10 = p_ActiveCount;
      *(_QWORD *)(v6 + 104) = SharedWaiters;
      *SharedWaiters = v10;
      this[1].SharedWaiters = v10;
      ++LODWORD(this[1].OwnerTable);
      this[1].ExclusiveWaiters = (PVOID)v6;
      for ( i = *(SHORT **)p_ActiveCount; ; i = (SHORT *)*((_QWORD *)v13 + 12) )
      {
        if ( i == p_ActiveCount )
        {
          v13 = 0LL;
        }
        else
        {
          v13 = i - 48;
          if ( !i )
            v13 = 0LL;
        }
        if ( !v13 )
          break;
        if ( *((_DWORD *)v13 + 21) == 2 && *((_DWORD *)v13 + 22) == 1 )
        {
          *((_DWORD *)v13 + 22) = 2;
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
  RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v15);
  return (unsigned int)v4;
}
