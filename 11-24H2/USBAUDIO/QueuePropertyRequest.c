/*
 * XREFs of QueuePropertyRequest @ 0x14003E450
 * Callers:
 *     PropertyGetSetChannelConfiguration @ 0x140032D10 (PropertyGetSetChannelConfiguration.c)
 *     PropertySetFeatureValue @ 0x140033780 (PropertySetFeatureValue.c)
 *     PropertySetMixerLevels @ 0x1400338F0 (PropertySetMixerLevels.c)
 *     PropertySetTopologyNodeEnable @ 0x140033AC0 (PropertySetTopologyNodeEnable.c)
 *     PropertySetBoolean @ 0x14003DED0 (PropertySetBoolean.c)
 *     PropertySetDbLevel @ 0x14003E180 (PropertySetDbLevel.c)
 *     PropertyGetSetMuxSource @ 0x140040270 (PropertyGetSetMuxSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QueuePropertyRequest(
        PIRP Irp,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        struct _LIST_ENTRY *a4)
{
  PKSFILTER FilterFromIrp; // rax
  PKSDEVICE Device; // rax
  char *Context; // rdi
  struct _LIST_ENTRY *Pool2; // rax

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    return 3221225473LL;
  Device = KsGetDevice(FilterFromIrp);
  if ( !Device )
    return 3221225473LL;
  Context = (char *)Device->Context;
  if ( !Context )
    return 3221225473LL;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 48LL, 1096972357LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->Flink = a4;
  Pool2->Blink = a2;
  Pool2[1].Flink = a3;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = Pool2;
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = -1073741823;
  IoCsqInsertIrp((PIO_CSQ)(Context + 584), Irp, 0LL);
  return 259LL;
}
