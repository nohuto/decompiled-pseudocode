/*
 * XREFs of Usbh_Disconnect_PdoEvent @ 0x140016318
 * Callers:
 *     UsbhDropDevice @ 0x14001846C (UsbhDropDevice.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhPortDisconnect @ 0x14002A520 (UsbhPortDisconnect.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x140043CB4 (Usbh_PCE_BusDisconnect_Action.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhDeregisterPdo @ 0x140045D8C (UsbhDeregisterPdo.c)
 */

void __fastcall Usbh_Disconnect_PdoEvent(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  KIRQL v11; // dl

  *(_BYTE *)(a4 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(a4 + 136) = 1;
  *(_DWORD *)(a4 + 88) = 2018460752;
  *(_DWORD *)(a4 + 92) = a3;
  qword_14006F5E0 = a4;
  *(_QWORD *)(a4 + 24) = KeGetCurrentThread();
  if ( (UsbhLogMask & 2) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_DWORD *)v9 = 1985106790;
        *(_QWORD *)(v9 + 24) = a4;
      }
    }
  }
  FdoExt(a1);
  if ( (PdoExt(a2)[355] & 0x200) != 0 )
    USBD_MarkDeviceAsDisconnected(a2);
  v10 = PdoExt(a2)[281];
  if ( v10 == 1 || v10 == 2 )
  {
    UsbhDeletePdo(a1, a2, v10, a3, a4);
  }
  else if ( v10 == 3 )
  {
    UsbhDeregisterPdo(a1, a2, 3, a3, a4);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    qword_14006F5E0 = 0LL;
    v11 = *(_BYTE *)(a4 + 132);
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v11);
  }
}
