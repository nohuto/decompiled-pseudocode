/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x14000F240
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAdapterSendPowerToMiniport @ 0x14000F3E0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidPowerPassToMiniPort @ 0x14001018C (RaidPowerPassToMiniPort.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     McTemplateK0zqjdz_EtwWriteTransfer @ 0x140076F88 (McTemplateK0zqjdz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterPowerUpDeviceCompletion(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  _QWORD *DeviceExtension; // rsi
  int Status; // edi
  int v6; // eax
  struct _IO_WORKITEM *WorkItem; // rbp
  _QWORD *Pool; // rax
  void *v10; // r14
  int v11; // edx
  int v12; // ecx
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      30LL,
      &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
      DeviceExtension,
      a2);
  }
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_11;
  if ( (unsigned __int8)RaidIsAdapterControlSupported(DeviceExtension + 47, 6LL) )
  {
    v6 = RaidAdapterSendPowerToMiniport(DeviceExtension, a2);
    Status = v6;
    if ( v6 != -2147483631 )
    {
      if ( v6 >= 0 )
      {
LABEL_8:
        RaidAdapterPowerUpDeviceCompletionLastStep(a2);
        return 3221225494LL;
      }
LABEL_11:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqD(
          WPP_GLOBAL_Control->AttachedDevice,
          31LL,
          &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
          DeviceExtension,
          a2,
          Status);
      }
      goto LABEL_8;
    }
    WorkItem = IoAllocateWorkItem(DeviceObject);
    Pool = (_QWORD *)RaidAllocatePool(64LL, 16LL, 1230463314LL, (__int64)DeviceObject);
    v10 = Pool;
    if ( !WorkItem || !Pool )
    {
      Status = -1073741670;
      if ( WorkItem )
        IoFreeWorkItem(WorkItem);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x49576152u);
      goto LABEL_11;
    }
    *Pool = WorkItem;
    Pool[1] = a2;
    IoQueueWorkItem(WorkItem, RaidAdapterSendPowerToMiniportWorkItemRoutine, NormalWorkQueue, Pool);
    if ( StorEtwLoggingEnabled )
    {
      v13 = 0LL;
      IoGetActivityIdIrp(a2, &v13);
      if ( (byte_140171466 & 0x40) != 0 )
        McTemplateK0zqjdz_EtwWriteTransfer(
          v12,
          v11,
          (unsigned int)&v13,
          DeviceExtension[590],
          *((_DWORD *)DeviceExtension + 14),
          (__int64)(DeviceExtension + 633),
          17);
    }
  }
  else
  {
    Status = RaidPowerPassToMiniPort(DeviceObject, a2, RaidAdapterDevicePowerUpSrbComplete);
    if ( Status < 0 )
      goto LABEL_11;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      32LL,
      &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
      DeviceExtension,
      a2,
      Status);
  }
  return 3221225494LL;
}
