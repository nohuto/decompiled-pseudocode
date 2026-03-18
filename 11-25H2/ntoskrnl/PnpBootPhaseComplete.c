/*
 * XREFs of PnpBootPhaseComplete @ 0x14070E4C4
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PiDmaGuardInitialize @ 0x1405A5580 (PiDmaGuardInitialize.c)
 *     PiPnpRtlInit @ 0x14071ACC4 (PiPnpRtlInit.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     Pdcv2ActivationClientRegister @ 0x14077E6A8 (Pdcv2ActivationClientRegister.c)
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  void *v1; // rcx
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v0 = PiPnpRtlInit(2LL);
  if ( v0 >= 0 )
  {
    PnpBootMode = 0;
    if ( PnpSetupOOBEInProgress
      && (int)ExSubscribeWnfStateChange(
                (unsigned int)&PnpSetupWnfSubscription,
                (unsigned int)&WNF_DEP_OOBE_COMPLETE,
                1,
                0,
                (__int64)PipUpdateSetupOobeCompleteWnfCallback,
                0LL) < 0 )
    {
      PnpSetupOOBEInProgress = 0;
    }
    v0 = PiDmaGuardInitialize(2);
    if ( v0 >= 0 )
    {
      v5 = 0LL;
      *(_QWORD *)&v4 = 1LL;
      *((_QWORD *)&v4 + 1) = AlpcMessageDeleteProcedure;
      Pdcv2ActivationClientRegister(121);
      v1 = (void *)*((_QWORD *)IopRootDeviceNode + 4);
      v4 = 0LL;
      DWORD2(v4) = 39;
      PnpRequestDeviceAction(v1, 2u, 0, &v4, 0LL, 0LL, 0LL);
      v0 = PpDevCfgProcessDevices();
      if ( v0 >= 0 )
      {
        Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          Pool2->List.Flink = 0LL;
          Pool2->WorkerRoutine = PipUpdateDeviceProducts;
          Pool2->Parameter = Pool2;
          ExQueueWorkItem(Pool2, NormalWorkQueue);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v0;
}
