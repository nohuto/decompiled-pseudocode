/*
 * XREFs of UsbhDecHubBusy @ 0x14000F560
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002820 (Usbh_PCE_Resume_Action.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14000E640 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhHubProcessChangeWorker @ 0x14000F8C0 (UsbhHubProcessChangeWorker.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140010050 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140010ED0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhSshSetPortsBusyState @ 0x140015B70 (UsbhSshSetPortsBusyState.c)
 *     UsbhSshPortsBusy @ 0x14001626C (UsbhSshPortsBusy.c)
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x14001D150 (UsbhPdoPnp_StartDevice.c)
 *     UsbhBusResume_Action @ 0x140020514 (UsbhBusResume_Action.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1400213E0 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x140021A20 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetHubCaps @ 0x140023CE4 (UsbhIoctlGetHubCaps.c)
 *     UsbhReleaseEnumBusLockEx @ 0x140028B10 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhPdoPnp_QueryId @ 0x14002BB40 (UsbhPdoPnp_QueryId.c)
 *     UsbhSshExitSx @ 0x14002C3A4 (UsbhSshExitSx.c)
 *     UsbhSshResumeUpstream @ 0x140030B38 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140036200 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshBusIdle @ 0x140036E94 (UsbhSshBusIdle.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x14003F610 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhSshBusBusy @ 0x140040A2C (UsbhSshBusBusy.c)
 *     UsbhHubResetIrqPipeWorker @ 0x140046BB0 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004B1E0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhHardReset_Action @ 0x14004B668 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x14004C4B0 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004CD78 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004D008 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlResetStuckHub @ 0x14004D718 (UsbhIoctlResetStuckHub.c)
 *     UsbhDriverResetPort @ 0x140057310 (UsbhDriverResetPort.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005CC70 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x14005E2A0 (UsbhSshDisabled.c)
 *     UsbhSshEnabled @ 0x14005E4D4 (UsbhSshEnabled.c)
 *     UsbhSshEnterSx @ 0x14005E5B0 (UsbhSshEnterSx.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhDecHubBusy(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KEVENT *v5; // rbx
  __int64 Signalling; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  volatile int Lock; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(struct _KEVENT **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v5->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5[142].Header.Type = 1;
  KeWaitForSingleObject(&v5[139], Executive, 0, 0, 0LL);
  Signalling = v5[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = 1667581000;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a3;
      *(_QWORD *)(v8 + 24) = Signalling;
    }
  }
  if ( v5[142].Header.Signalling )
  {
    if ( a3 == (_QWORD *)1936941672 )
    {
      Lock = v5[130].Header.Lock;
      if ( Lock )
        v5[130].Header.LockNV = Lock - 1;
    }
    else if ( a3 )
    {
      v11 = a3[1];
      v12 = a3 + 1;
      if ( *(_QWORD **)(v11 + 8) != a3 + 1 || (v13 = (_QWORD *)a3[2], (_QWORD *)*v13 != v12) )
        __fastfail(3u);
      *v13 = v11;
      *(_QWORD *)(v11 + 8) = v13;
      a3[2] = a3 + 1;
      *v12 = v12;
      ExFreePoolWithTag(a3, 0);
    }
  }
  return KeSetEvent(v5 + 139, 0, 0);
}
