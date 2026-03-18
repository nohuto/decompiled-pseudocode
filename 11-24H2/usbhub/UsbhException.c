/*
 * XREFs of UsbhException @ 0x1400094F8
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x140005410 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubRunPortChangeQueue @ 0x1400083A0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x14000BE94 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14000E640 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlValidateParameters @ 0x14000FC10 (UsbhIoctlValidateParameters.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140010050 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhSetHubRemoteWake @ 0x140013AD0 (UsbhSetHubRemoteWake.c)
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhHubIsr @ 0x140017140 (UsbhHubIsr.c)
 *     UsbhCreateDevice @ 0x140017858 (UsbhCreateDevice.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x14001D150 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 *     UsbhSyncSuspendPdoPort @ 0x14001E27C (UsbhSyncSuspendPdoPort.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1400213E0 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x140021A20 (UsbhIoctlGetNodeInformation.c)
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x140022D78 (UsbhFdoColdStartPdo.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1400232C8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhSyncResumePort @ 0x140023948 (UsbhSyncResumePort.c)
 *     UsbhIoctlGetHubCaps @ 0x140023CE4 (UsbhIoctlGetHubCaps.c)
 *     UsbhGetLanguageIdString @ 0x14002686C (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x1400277A4 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x140027A08 (UsbhGetSerialNumber.c)
 *     UsbhGetDeviceInformation @ 0x140027C88 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhDisablePort @ 0x140029930 (UsbhDisablePort.c)
 *     UsbhSuspendPort @ 0x140029D68 (UsbhSuspendPort.c)
 *     UsbhInitializeDevice @ 0x14002A2B4 (UsbhInitializeDevice.c)
 *     UsbhFdoD0Worker_Action @ 0x14002D060 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002E74C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhSshResumeUpstream @ 0x140030B38 (UsbhSshResumeUpstream.c)
 *     UsbhResumeSuspendedPort @ 0x14003279C (UsbhResumeSuspendedPort.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x140035350 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhFdoColdStartCheckPort @ 0x1400363A0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoSetD0Warm @ 0x140037CE4 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoPnp_EnablePdo @ 0x140039520 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhConfigureUsbHub @ 0x14003A328 (UsbhConfigureUsbHub.c)
 *     UsbhGetDescriptor @ 0x14003B63C (UsbhGetDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x14003BD64 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x14003BEFC (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x14003C0B0 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetStatus @ 0x14003C5F0 (UsbhGetStatus.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x14003D070 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x14003D390 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x14003E888 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x14003F6C0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x14003FA64 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x14003FC5C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140040684 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhBusSuspend_Action @ 0x1400408AC (UsbhBusSuspend_Action.c)
 *     UsbhParseDescriptors @ 0x140040FE0 (UsbhParseDescriptors.c)
 *     UsbhGetMSOS_Descriptor @ 0x140041B98 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOsContainerID @ 0x140041F94 (UsbhGetMsOsContainerID.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x14004590C (UsbhClearTt.c)
 *     UsbhFinishStart @ 0x14004604C (UsbhFinishStart.c)
 *     UsbhGetBillboardInfo @ 0x1400465D8 (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x140046BB0 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x140046FF8 (UsbhPortResumeTimeout.c)
 *     UsbhQueryHubState @ 0x140047294 (UsbhQueryHubState.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCheckHubPowerStatus @ 0x1400495EC (UsbhCheckHubPowerStatus.c)
 *     UsbhCompletePdoWakeIrps @ 0x140049810 (UsbhCompletePdoWakeIrps.c)
 *     UsbhPdoSetD0_Finish @ 0x14004AFF4 (UsbhPdoSetD0_Finish.c)
 *     UsbhHardReset_Action @ 0x14004B668 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x14004C4B0 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004C7CC (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004CA94 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004CD78 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004D008 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004D424 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004D718 (UsbhIoctlResetStuckHub.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x14004FAA0 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoPnp_StartDevice @ 0x14004FEC0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1400509A0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x140054F80 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBusIfAddDevice @ 0x1400567D0 (UsbhBusIfAddDevice.c)
 *     UsbhGetBusInterface @ 0x140057024 (UsbhGetBusInterface.c)
 *     UsbhHandleOvercurrent @ 0x14005750C (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x140057740 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140057830 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x140057C90 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1400580E0 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x140058340 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x140058550 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x140058B10 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 *     UsbhCheckDeviceErrata @ 0x14005A060 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x14005A3D4 (UsbhCheckHubErrata.c)
 *     UsbhValidateSerialNumberString @ 0x14005BA78 (UsbhValidateSerialNumberString.c)
 *     UsbhPdoCreateSymbolicLink @ 0x14005C500 (UsbhPdoCreateSymbolicLink.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     UsbhQueueWorkItemEx @ 0x14002BFA0 (UsbhQueueWorkItemEx.c)
 *     UsbhReferenceListAdd @ 0x14002CB80 (UsbhReferenceListAdd.c)
 *     UsbhExceptionWorker @ 0x140030730 (UsbhExceptionWorker.c)
 *     UsbhReferenceListRemove @ 0x14003090C (UsbhReferenceListRemove.c)
 *     UsbhExceptionTrace @ 0x1400343AC (UsbhExceptionTrace.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 *     memmove @ 0x140061040 (memmove.c)
 */

void __fastcall UsbhException(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 i; // rdx
  char *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int128 *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 *v26; // rcx
  int v27; // eax
  __int64 v28; // r12
  unsigned __int16 v29; // si
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // r14d
  unsigned int v33; // r13d
  __int64 Pool2; // rax
  char *v35; // rbx
  char *v36; // rcx
  unsigned int v37; // ecx
  _OWORD *v38; // rdx
  __int64 v39; // rax
  _OWORD *v40; // rax
  int v41; // eax
  unsigned __int16 v42; // [rsp+94h] [rbp-7Ch]
  int v43; // [rsp+B8h] [rbp-58h]
  char *v44; // [rsp+C0h] [rbp-50h]
  int v46; // [rsp+ECh] [rbp-24h]
  __int128 v47; // [rsp+F4h] [rbp-1Ch] BYREF
  __int64 v48; // [rsp+104h] [rbp-Ch]

  v11 = (int)a3;
  v43 = a3;
  v42 = a2;
  v12 = FdoExt(a1, a2, a3, a4);
  FdoExt(a1, v13, v14, v15);
  v16 = -1LL;
  if ( (UsbhLogMask & 0x80u) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 1061451877;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_QWORD *)(v18 + 24) = v11;
      }
    }
  }
  v44 = 0LL;
  for ( i = 0LL; (unsigned int)i < 0x8E; i = (unsigned int)(i + 1) )
  {
    v20 = (char *)&HubExceptionTable + 24 * (unsigned int)i;
    if ( (_DWORD)v11 == *(_DWORD *)v20 )
    {
      v44 = (char *)&HubExceptionTable + 24 * (unsigned int)i;
      goto LABEL_10;
    }
  }
  v20 = 0LL;
LABEL_10:
  v21 = -1LL;
  do
    ++v21;
  while ( *(_BYTE *)(*((_QWORD *)v20 + 1) + v21) );
  v47 = 0LL;
  v48 = 0LL;
  if ( dword_14006F6D0 )
  {
    v22 = FdoExt(a1, i, 0LL, 1LL);
    v23 = &v47;
    v24 = v22;
    v25 = 5LL;
    v26 = (unsigned __int16 *)(v22 + 5210);
    v46 = *(_WORD *)(v22 + 5208) != 0;
    do
    {
      v27 = *v26;
      *(_DWORD *)v23 = v27;
      if ( v27 )
        ++v46;
      v23 = (__int128 *)((char *)v23 + 4);
      ++v26;
      --v25;
    }
    while ( v25 );
    HIDWORD(v48) = *(_DWORD *)(v24 + 2536);
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_EXCEPTION, 0LL);
  }
  v28 = 16LL;
  if ( a10 )
  {
    v41 = *(_DWORD *)(v12 + 2560);
    if ( (v41 & 0x10) != 0 )
      return;
    *(_DWORD *)(v12 + 2560) = v41 | 0x10;
  }
  v29 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v29 = 4096;
  if ( (UsbhLogMask & 0x80u) != 0 )
  {
    if ( a1 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
        *(_DWORD *)v31 = 829973864;
        *(_QWORD *)(v31 + 16) = a4;
        *(_QWORD *)(v31 + 24) = v29;
        *(_QWORD *)(v31 + 8) = 0LL;
      }
    }
  }
  if ( (*(_DWORD *)(v12 + 2560) & 0x2000) != 0 )
  {
    do
      ++v16;
    while ( a8[v16] );
    v32 = v16 + 1;
    v33 = v32 + v29 + 600;
    Pool2 = ExAllocatePool2(64LL, v33, 1112885333LL);
    v35 = (char *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 4) = v33;
      if ( (int)UsbhReferenceListAdd(a1, Pool2, 1381516648LL) >= 0 )
      {
        *(_DWORD *)v35 = 1381516648;
        *((_QWORD *)v35 + 1) = a1;
        *((_WORD *)v35 + 16) = v29;
        if ( v29 )
        {
          *((_QWORD *)v35 + 5) = v35 + 600;
          memmove(v35 + 600, a4, v29);
        }
        v36 = &v35[v29 + 600];
        *((_QWORD *)v35 + 74) = v36;
        memmove(v36, a8, v32);
        *((_DWORD *)v35 + 146) = a9;
        *((_DWORD *)v35 + 6) = a7;
        *((_DWORD *)v35 + 7) = a6;
        *((_DWORD *)v35 + 4) = v43;
        *((_WORD *)v35 + 10) = v42;
        *((_QWORD *)v35 + 8) = MEMORY[0xFFFFF78000000014];
        if ( *(_QWORD *)(v12 + 888) )
        {
          v37 = *(_DWORD *)(v12 + 880);
          v38 = v35 + 72;
          do
          {
            v39 = *(_DWORD *)(v12 + 884) & v37;
            v37 = v39 + 1;
            v40 = (_OWORD *)(*(_QWORD *)(v12 + 888) + 32 * v39);
            *v38 = *v40;
            v38 += 2;
            *(v38 - 1) = v40[1];
            --v28;
          }
          while ( v28 );
        }
        UsbhExceptionTrace(a1, v35, v44);
        if ( !KeGetCurrentIrql() && !*((_QWORD *)v44 + 2) )
        {
          UsbhExceptionWorker(a1, v42, v35);
          return;
        }
        if ( (UsbhQueueWorkItemEx(a1, 1, (unsigned int)UsbhExceptionWorker, (_DWORD)v35, v42, 1230469221, 0LL) & 0xC0000000) != 0xC0000000 )
          return;
        UsbhReferenceListRemove(a1, v35);
      }
      ExFreePoolWithTag(v35, 0);
    }
  }
}
