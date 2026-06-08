/*
 * XREFs of EvtDeviceD0Entry @ 0x1400052E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax
  int v4; // edx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_140018040);
  v2 = *(_QWORD *)(v1 + 280);
  if ( (v2 & 0x80000000) == 0 && *(_BYTE *)(v1 + 76) )
  {
    *(_BYTE *)(v1 + 76) = 0;
    if ( (v2 & 0x800000000000LL) != 0 && qword_140019490 )
      qword_140019490(v1);
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)v1);
    if ( WorkItem )
    {
      IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)ProcLibOnD0StateChangeWorker, CriticalWorkQueue, WorkItem);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        22,
        (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids);
    }
  }
  return 0LL;
}
