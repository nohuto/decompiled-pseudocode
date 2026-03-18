/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x14002ABC4
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x14002AB00 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerState @ 0x14002AC88 (DpiRequestDevicePowerState.c)
 *     ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x14002B770 (-CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ.c)
 *     DpiIsNeedWakeUpAdapter @ 0x14002B81C (DpiIsNeedWakeUpAdapter.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, char a2)
{
  unsigned int v3; // edi
  DXGGLOBAL *Global; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( *((_BYTE *)this + 204) )
  {
    if ( a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 404));
  }
  else
  {
    if ( a2 )
    {
      Global = DXGGLOBAL::GetGlobal();
      v3 = 1;
      if ( (unsigned int)DXGGLOBAL::CSAccountingInProgress(Global)
        && (unsigned __int8)DpiIsNeedWakeUpAdapter(*((_QWORD *)this + 27)) )
      {
        WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 27));
        if ( WorkItem )
          IoQueueWorkItemEx(WorkItem, DXGGLOBAL::ReportGpuWakeupWorkItemCallback, DelayedWorkQueue, 0LL);
      }
    }
    else
    {
      v3 = 4;
    }
    DpiRequestDevicePowerState(*((_QWORD *)this + 27), v3);
  }
}
