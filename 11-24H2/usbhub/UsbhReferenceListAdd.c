/*
 * XREFs of UsbhReferenceListAdd @ 0x14002CB80
 * Callers:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 *     UsbhSetTimer @ 0x14002CAD0 (UsbhSetTimer.c)
 *     UsbhGetTopOfBusStack @ 0x14003C6C0 (UsbhGetTopOfBusStack.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x14003D254 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x14003D4F0 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x14003EEB0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x14003F020 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x140047620 (UsbhResetPortTimerDpc.c)
 *     UsbhTimerPnpStart @ 0x140049380 (UsbhTimerPnpStart.c)
 *     UsbhReferenceListOpen @ 0x14004E4EC (UsbhReferenceListOpen.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // di
  _DWORD *v7; // rbx
  __int64 Pool2; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdx

  v6 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5E0 = (__int64)&dword_14006F5E8;
  v7 = FdoExt(a1);
  if ( *((_BYTE *)v7 + 2480) )
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1397515890;
      *(_DWORD *)(Pool2 + 40) = a3;
      *(_QWORD *)(Pool2 + 16) = a2;
      *(_QWORD *)(Pool2 + 8) = a1;
      v9 = (_QWORD *)(Pool2 + 24);
      v10 = (_QWORD *)*((_QWORD *)v7 + 315);
      if ( (_DWORD *)*v10 != v7 + 628 )
        __fastfail(3u);
      *v9 = v7 + 628;
      v9[1] = v10;
      *v10 = v9;
      *((_QWORD *)v7 + 315) = v9;
    }
    else
    {
      ++v7[632];
    }
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v6);
    return 0LL;
  }
  else
  {
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v6);
    return 3221225473LL;
  }
}
