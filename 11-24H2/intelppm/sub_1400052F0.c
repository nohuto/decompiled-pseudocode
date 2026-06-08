/*
 * XREFs of sub_1400052F0 @ 0x1400052F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400052F0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax
  int v4; // edx

  v1 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_140019120 + 1616))(
         qword_140019128,
         a1,
         off_140018040);
  v2 = *(_QWORD *)(v1 + 280);
  if ( (v2 & 0x80000000) == 0 && *(_BYTE *)(v1 + 76) )
  {
    *(_BYTE *)(v1 + 76) = 0;
    if ( (v2 & 0x800000000000LL) != 0 && qword_140019460 )
      qword_140019460(v1);
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)v1);
    if ( WorkItem )
    {
      IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)sub_140004DF0, CriticalWorkQueue, WorkItem);
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v4) = 3;
      sub_140003D28(off_140018050->DeviceExtension, v4, 3, 22, (__int64)&unk_1400130B0);
    }
  }
  return 0LL;
}
