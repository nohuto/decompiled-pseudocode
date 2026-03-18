/*
 * XREFs of UsbhGetPortData @ 0x14000AE30
 * Callers:
 *     UsbhFdoSelectConfigurationPdo @ 0x14000BE94 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhResetPortData @ 0x140015EE0 (UsbhResetPortData.c)
 *     UsbhHubIsr @ 0x140017140 (UsbhHubIsr.c)
 *     UsbhSetPortData @ 0x14001BE40 (UsbhSetPortData.c)
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 *     UsbhPCE_Suspend @ 0x14001E150 (UsbhPCE_Suspend.c)
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1400232C8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhSyncResumePort @ 0x140023948 (UsbhSyncResumePort.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x140025314 (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1400296B0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSetSqmEnumerationData @ 0x14002C540 (UsbhSetSqmEnumerationData.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1400369F0 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoSetD0Warm @ 0x140037CE4 (UsbhFdoSetD0Warm.c)
 *     UsbhDisablePortIndicators @ 0x140038624 (UsbhDisablePortIndicators.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x140039B0C (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhGetExtendedHubInformation @ 0x14003BB6C (UsbhGetExtendedHubInformation.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x14003D254 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhEnablePortIndicators @ 0x14003E538 (UsbhEnablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x14003E7F0 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x14003EEB0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x14003EF54 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x14003F020 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x14003F0B0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x14003F320 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x14003F4A0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x14003FA64 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x140042FFC (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_BusReset @ 0x1400430BC (UsbhPCE_BusReset.c)
 *     UsbhPCE_HW_Stop @ 0x140043304 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChangeObject @ 0x1400433D4 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_QueueDriverReset @ 0x1400434E0 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_ResumeDone @ 0x1400435C8 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x140043688 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1400437F8 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x140045ADC (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x140045D8C (UsbhDeregisterPdo.c)
 *     UsbhFinishStart @ 0x14004604C (UsbhFinishStart.c)
 *     UsbhSoftDisconnectPdo @ 0x1400478C0 (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048428 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1400485C8 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x14004898C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x14004BA90 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004CD78 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004D424 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x14004F550 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x140050B64 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x1400547A8 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x140054A44 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1400555C0 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1400557A0 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x140055820 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1400558A0 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x140055FD0 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x140056060 (UsbhNotEnoughPowerPopup.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx

  v4 = (unsigned __int16)a2;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        v6 = *(_QWORD *)(a2 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v6 = 1413771367;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = v4;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  if ( !(_WORD)v4 )
    return 0LL;
  v7 = FdoExt(a1, a2, a3, a4);
  if ( (unsigned __int16)v4 > *(unsigned __int8 *)(FdoExt(a1, v8, v9, v10) + 2938) )
    return 0LL;
  v11 = *(_QWORD *)(v7 + 3056);
  if ( !v11 )
    return 0LL;
  if ( (UsbhLogMask & 8) != 0 && a1 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1044672615;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v4;
      *(_QWORD *)(v13 + 24) = v11 + 2928 * v4 - 2928;
    }
  }
  return v11 + 2928 * v4 - 2928;
}
