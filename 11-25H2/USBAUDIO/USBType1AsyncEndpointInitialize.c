/*
 * XREFs of USBType1AsyncEndpointInitialize @ 0x140039C1C
 * Callers:
 *     USBType1RenderCreatePin @ 0x14003D8A0 (USBType1RenderCreatePin.c)
 * Callees:
 *     memset @ 0x14001CA40 (memset.c)
 *     USBHwAllocateAndBag @ 0x14002D688 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1AsyncEndpointInitialize(__int64 a1)
{
  _QWORD *v1; // rsi
  void *v2; // r9
  __int64 v4; // r14
  int v5; // ebx
  PIRP Irp; // rax
  IRP *v7; // rdi
  __int64 v8; // r15
  PIO_WORKITEM WorkItem; // rax
  PVOID v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 16);
  v2 = *(void **)(a1 + 8);
  v11 = 0LL;
  v4 = v1[19];
  v5 = USBHwAllocateAndBag(&v11, 0xA4u, 64LL, v2);
  if ( v5 >= 0 )
  {
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v1[2] + 40LL) + 76LL), 0);
    v7 = Irp;
    if ( !Irp )
      return (unsigned int)-1073741670;
    v8 = *(_QWORD *)(v1[18] + 176LL);
    v5 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
    if ( v5 < 0 )
    {
      IoFreeIrp(v7);
      return (unsigned int)v5;
    }
    memset((void *)(v4 + 888), 0, 0x70uLL);
    *(_QWORD *)(v4 + 880) = v11;
    *(_QWORD *)(v4 + 888) = v7;
    *(_QWORD *)(v4 + 896) = v1;
    *(_DWORD *)(v4 + 916) = 1 << *(_BYTE *)(v8 + 7);
    KeInitializeEvent((PRKEVENT)(v4 + 936), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v4 + 960), SynchronizationEvent, 0);
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v1[2] + 40LL));
    *(_QWORD *)(v4 + 984) = WorkItem;
    if ( !WorkItem )
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
