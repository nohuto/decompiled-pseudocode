/*
 * XREFs of UsbhDecPdoIoCount @ 0x140015600
 * Callers:
 *     UsbhFdoUrbPdoFilter @ 0x14000AF60 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x14000BE94 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnPortStatus @ 0x14000C4F0 (UsbhFdoReturnPortStatus.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x140016FD8 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhPdoPower_WaitWake @ 0x14001C2A0 (UsbhPdoPower_WaitWake.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x14001F3A0 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhCompletePdoWakeIrp @ 0x14002123C (UsbhCompletePdoWakeIrp.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1400296B0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1400369F0 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhPdoSystemControl @ 0x1400371A0 (UsbhPdoSystemControl.c)
 *     UsbhDeleteOrphanPdo @ 0x1400397FC (UsbhDeleteOrphanPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x14003AAD4 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x14003AB8C (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoCyclePdoPort @ 0x14003F6C0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x14003F828 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x14003F88C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14003F97C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x14003FA64 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x14003FC5C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x14004005C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1400400C0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140040180 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x140040390 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x140040438 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1400404D8 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1400405C8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140040684 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x14004AD00 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x14004AF70 (UsbhPdoPower_Sequence.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004B1E0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDeviceControl @ 0x14005C670 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x14005D060 (UsbhPdoSuccess.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x14004E8F4 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  KIRQL v6; // r15
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  int v10; // eax

  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  v5 = (_QWORD *)(v4 + 1224);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1216));
  v7 = *(_QWORD **)(v4 + 1224);
  if ( v7 != (_QWORD *)(v4 + 1224) && v7 )
  {
    while ( v7 != v5 )
    {
      v8 = (_QWORD *)*v7;
      if ( v7[2] == BugCheckParameter4 )
      {
        if ( (_QWORD *)v8[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        ExFreePoolWithTag(v7 - 1, 0);
        goto LABEL_12;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  v10 = *(_DWORD *)(v4 + 1264);
  if ( !v10 )
  {
    USBHUB_TriggerCallBacks(BugCheckParameter3);
    KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
  }
  *(_DWORD *)(v4 + 1264) = v10 - 1;
LABEL_12:
  if ( (_QWORD *)*v5 != v5 || *(_DWORD *)(v4 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 1216), v6);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 1216), v6);
    KeSetEvent((PRKEVENT)(v4 + 1240), 0, 0);
  }
}
