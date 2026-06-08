/*
 * XREFs of sub_140003690 @ 0x140003690
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 */

void __fastcall sub_140003690(__int64 a1, int a2)
{
  int v4; // edx
  struct _IO_WORKITEM *WorkItem; // rbx
  IO_WORKITEM_ROUTINE *v6; // rdx

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  if ( WorkItem )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v4) = 4;
      sub_140003834(off_140018050->DeviceExtension, v4, 2, 87, (__int64)&unk_140012FE8, a2, *(_DWORD *)(a1 + 56));
    }
    switch ( a2 )
    {
      case 8:
        v6 = (IO_WORKITEM_ROUTINE *)&sub_140032A00;
        goto LABEL_9;
      case 128:
        v6 = WorkerRoutine;
        goto LABEL_9;
      case 129:
        v6 = (IO_WORKITEM_ROUTINE *)&sub_14003EAA0;
LABEL_9:
        IoQueueWorkItem(WorkItem, v6, CriticalWorkQueue, WorkItem);
        return;
      case 130:
        v6 = (IO_WORKITEM_ROUTINE *)&sub_140033CF0;
        goto LABEL_9;
      case 131:
        v6 = (IO_WORKITEM_ROUTINE *)sub_140028E10;
        goto LABEL_9;
      case 133:
        v6 = (IO_WORKITEM_ROUTINE *)sub_140045980;
        goto LABEL_9;
    }
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v4) = 2;
      sub_1400050F8(off_140018050->DeviceExtension, v4, 1, 88, (__int64)&unk_140012FE8, a2);
    }
    IoFreeWorkItem(WorkItem);
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(v4) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v4, 4, 86, (__int64)&unk_140012FE8);
  }
}
