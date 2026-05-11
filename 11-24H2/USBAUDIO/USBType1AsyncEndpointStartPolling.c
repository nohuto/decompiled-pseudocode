/*
 * XREFs of USBType1AsyncEndpointStartPolling @ 0x14000D2D4
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x1400024C0 (USBType1ProcessStreamPointer.c)
 * Callees:
 *     USBHwGetCurrentFrame @ 0x1400021E0 (USBHwGetCurrentFrame.c)
 */

__int64 __fastcall USBType1AsyncEndpointStartPolling(_QWORD *Context)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int CurrentFrame; // edi
  int v5; // r8d
  int v6; // r9d
  struct _IO_WORKITEM *v7; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = Context[2];
  v3 = *(_QWORD *)(v2 + 152);
  CurrentFrame = USBHwGetCurrentFrame(*(_QWORD *)(v2 + 16), &v9);
  if ( CurrentFrame >= 0 )
  {
    v5 = *(_DWORD *)(v3 + 916);
    v6 = v9;
    v7 = *(struct _IO_WORKITEM **)(v3 + 984);
    *(_BYTE *)(v3 + 932) = 1;
    *(_DWORD *)(v3 + 920) = v6 + 2;
    *(_DWORD *)(v3 + 912) = v5 + v6 + 2;
    *(_DWORD *)(v3 + 924) = v5 + 18;
    IoQueueWorkItem(v7, (PIO_WORKITEM_ROUTINE)USBType1AsyncEndpointPoll, CriticalWorkQueue, Context);
  }
  return (unsigned int)CurrentFrame;
}
