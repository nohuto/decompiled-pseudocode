/*
 * XREFs of ?OnInitialized@MonitorDisplayPortState@DxgMonitor@@QEAAXXZ @ 0x140056E70
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DxgMonitor::MonitorDisplayPortState::OnInitialized(DxgMonitor::MonitorDisplayPortState *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // eax

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this) == 1
    && ((*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this) == 10
     || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this) == 11) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2) >= 3000 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 80LL))(v3, (char *)this + 12);
      if ( v4 >= 0 )
      {
        *((_BYTE *)this + 8) = 1;
      }
      else
      {
        *((_BYTE *)this + 8) = 0;
        WdLogSingleEntry1(3LL, v4);
        WdLogGlobalForLineNumber = 28;
      }
      if ( *((_BYTE *)this + 24) > 0xFu )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 34;
      }
    }
  }
}
