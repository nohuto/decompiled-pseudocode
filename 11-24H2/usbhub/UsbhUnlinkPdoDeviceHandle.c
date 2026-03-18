/*
 * XREFs of UsbhUnlinkPdoDeviceHandle @ 0x140015900
 * Callers:
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhInitializeDevice @ 0x14002A2B4 (UsbhInitializeDevice.c)
 *     UsbhPortDisconnect @ 0x14002A520 (UsbhPortDisconnect.c)
 *     UsbhDeregisterPdo @ 0x140045D8C (UsbhDeregisterPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048428 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhReset2Timeout @ 0x140058930 (UsbhReset2Timeout.c)
 *     UsbhPdoPnp_StopDevice @ 0x14005CE20 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     Usbh_HubDerefDeviceHandle @ 0x140033290 (Usbh_HubDerefDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x140048868 (Usbh_HubRemoveUsbDevice.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x140056E20 (UsbhBusIf_SetClearRootPortResumeTime.c)
 */

void __fastcall UsbhUnlinkPdoDeviceHandle(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rsi
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // r13
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // [rsp+30h] [rbp-38h]

  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = PdoExt(a2);
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1146121333;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = 0LL;
      }
    }
  }
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        HIBYTE(v19) = a3;
        LOBYTE(v19) = HIBYTE(a3);
        BYTE1(v19) = BYTE2(a3);
        BYTE2(v19) = BYTE1(a3);
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = v19;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = a2;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
  }
  v16 = (int)v11[288];
  if ( (unsigned int)v16 > 1 )
  {
    if ( (_DWORD)v16 == 2 )
    {
      if ( (v11[355] & 0x20000000) != 0 )
      {
        UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v11 + 145), 0LL, 0LL);
        v11[355] &= ~0x20000000u;
      }
      v8 = *((_QWORD *)v11 + 145);
      *((_QWORD *)v11 + 145) = 0xFEFEFEFEFEFEFEFEuLL;
      v11[288] = 1;
      Log(a1, 256, 1970032690, 0, v8);
      Usbh_HubDerefDeviceHandle(a1, v8, a2, 1212441712LL);
    }
  }
  else if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 827354229;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_QWORD *)(v18 + 24) = v16;
      }
    }
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( a4 )
      Usbh_HubRemoveUsbDevice(a1, v8);
  }
}
