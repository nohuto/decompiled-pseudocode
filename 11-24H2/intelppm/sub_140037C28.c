/*
 * XREFs of sub_140037C28 @ 0x140037C28
 * Callers:
 *     sub_140030C8C @ 0x140030C8C (sub_140030C8C.c)
 *     sub_140030F80 @ 0x140030F80 (sub_140030F80.c)
 *     sub_14003D4B0 @ 0x14003D4B0 (sub_14003D4B0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140037EB4 @ 0x140037EB4 (sub_140037EB4.c)
 *     sub_14003802C @ 0x14003802C (sub_14003802C.c)
 *     sub_140038BD4 @ 0x140038BD4 (sub_140038BD4.c)
 */

void __fastcall sub_140037C28(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1400197C8 == dword_140019154 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      v3 = *(_QWORD *)(a1 + 280);
      if ( (v3 & 0x20E0000000000LL) != 0 )
      {
        sub_140037EB4(a1);
      }
      else if ( (v3 & 0x200000200LL) != 0 )
      {
        sub_14003802C(a1);
        if ( !qword_140019800 )
          sub_140038BD4(a1);
      }
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, sub_14003A370, CriticalWorkQueue, WorkItem);
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v2) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v2, 4, 15, (__int64)&unk_140014AD0);
    }
  }
}
