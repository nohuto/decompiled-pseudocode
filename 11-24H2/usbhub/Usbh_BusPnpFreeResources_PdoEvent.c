/*
 * XREFs of Usbh_BusPnpFreeResources_PdoEvent @ 0x140048428
 * Callers:
 *     UsbhAsyncStop @ 0x14004F168 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051310 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x140015900 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

void __fastcall Usbh_BusPnpFreeResources_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 v6; // bp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 PortData; // rax
  __int64 v10; // rdi
  int v11; // r14d
  __int64 v12; // rcx
  KIRQL v13; // dl

  Log(a1, 2, 1716671314, 0LL, a2);
  UsbhAcquirePdoStateLock(v5, a2, v4 + 17);
  v6 = 1;
  if ( *((_BYTE *)FdoExt(a1) + 2938) )
  {
    while ( 1 )
    {
      PortData = UsbhGetPortData(a1, v6, v7, v8);
      if ( !PortData )
        goto LABEL_10;
      v10 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526258, v10, 0LL);
      if ( !v10 )
        goto LABEL_10;
      v11 = PdoExt(v10)[281];
      PdoExt(v10);
      if ( v11 == 1 || v11 == 2 )
        break;
      if ( v11 == 3 )
      {
        *(_DWORD *)(a2 + 136) = 0;
        qword_14006F5E0 = 0LL;
        *(_DWORD *)(a2 + 88) = 1734964085;
        KeReleaseSpinLock(&HubG, *(_BYTE *)(a2 + 132));
        UsbhUnlinkPdoDeviceHandle(a1, v10, 2017740849, 1);
LABEL_9:
        UsbhAcquirePdoStateLock(v12, a2, 17);
      }
LABEL_10:
      if ( ++v6 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
        goto LABEL_11;
    }
    UsbhDeletePdo(a1, v10, v11, 17, a2);
    goto LABEL_9;
  }
LABEL_11:
  *(_DWORD *)(a2 + 136) = 0;
  qword_14006F5E0 = 0LL;
  v13 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, v13);
}
