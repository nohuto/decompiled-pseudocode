/*
 * XREFs of UsbhIncHubBusy @ 0x14000F6F0
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002820 (Usbh_PCE_Resume_Action.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14000E640 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhHubProcessChangeWorker @ 0x14000F8C0 (UsbhHubProcessChangeWorker.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140010050 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140010ED0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSshPortsBusy @ 0x14001626C (UsbhSshPortsBusy.c)
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhAcquireEnumBusLock @ 0x140018F14 (UsbhAcquireEnumBusLock.c)
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x14001D150 (UsbhPdoPnp_StartDevice.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1400213E0 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x140021A20 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetHubCaps @ 0x140023CE4 (UsbhIoctlGetHubCaps.c)
 *     UsbhPdoPnp_QueryId @ 0x14002BB40 (UsbhPdoPnp_QueryId.c)
 *     UsbhSshResumeUpstream @ 0x140030B38 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140036200 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshBusBusy @ 0x140040A2C (UsbhSshBusBusy.c)
 *     UsbhHubResetIrqPipeWorker @ 0x140046BB0 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x14004B668 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x14004C4B0 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004CD78 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004D008 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlResetStuckHub @ 0x14004D718 (UsbhIoctlResetStuckHub.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x140058E10 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005CC70 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x14005E2A0 (UsbhSshDisabled.c)
 *     UsbhSshEnterSx @ 0x14005E5B0 (UsbhSshEnterSx.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIncHubBusy(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _KEVENT *v9; // rbx
  struct _KEVENT *v10; // rbp
  __int64 Signalling; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 Pool2; // rax
  __int64 v16; // rsi
  _LIST_ENTRY *p_WaitListHead; // rbx
  char *v18; // rax
  char **Blink; // rcx
  __int64 v20; // r9

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(struct _KEVENT **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v9->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9 + 139;
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1668172104;
      *(_QWORD *)(v13 + 16) = a5;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = Signalling;
    }
  }
  if ( v9[142].Header.Signalling )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    v16 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1215918946;
      p_WaitListHead = &v9[129].Header.WaitListHead;
      *(_QWORD *)(Pool2 + 24) = a3;
      *(_DWORD *)(Pool2 + 32) = a4;
      v18 = (char *)(Pool2 + 8);
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v18 = p_WaitListHead;
      *((_QWORD *)v18 + 1) = Blink;
      *Blink = v18;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v18;
    }
    else
    {
      ++v9[130].Header.LockNV;
      v16 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
    if ( a5 == 1 )
      Usbh_SSH_Event(a1, 6LL, a2, v20);
    return v16;
  }
  else
  {
    KeSetEvent(v9 + 139, 0, 0);
    return 0LL;
  }
}
