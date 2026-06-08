/*
 * XREFs of AcpiNotifyCallback @ 0x140003660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003804 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 */

void __fastcall AcpiNotifyCallback(__int64 a1, int a2)
{
  int v4; // edx
  struct _IO_WORKITEM *WorkItem; // rbx
  IO_WORKITEM_ROUTINE *v6; // rdx

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  if ( WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        2,
        87,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        a2,
        *(_DWORD *)(a1 + 56));
    }
    switch ( a2 )
    {
      case 8:
        v6 = (IO_WORKITEM_ROUTINE *)&AcpiOSCNotifyWorker;
        goto LABEL_9;
      case 128:
        v6 = AcpiPStateNotifyWorker;
        goto LABEL_9;
      case 129:
        v6 = (IO_WORKITEM_ROUTINE *)&AcpiCStateNotifyWorker;
LABEL_9:
        IoQueueWorkItem(WorkItem, v6, CriticalWorkQueue, WorkItem);
        return;
      case 130:
        v6 = (IO_WORKITEM_ROUTINE *)&AcpiTStateNotifyWorker;
        goto LABEL_9;
      case 131:
        v6 = (IO_WORKITEM_ROUTINE *)AcpiCppcGuaranteedNotifyWorker;
        goto LABEL_9;
      case 133:
        v6 = (IO_WORKITEM_ROUTINE *)AcpiCppcHighestNotifyWorker;
        goto LABEL_9;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        1,
        88,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        a2);
    }
    IoFreeWorkItem(WorkItem);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      4,
      86,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
  }
}
