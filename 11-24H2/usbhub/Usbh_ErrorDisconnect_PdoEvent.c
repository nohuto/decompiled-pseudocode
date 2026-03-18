/*
 * XREFs of Usbh_ErrorDisconnect_PdoEvent @ 0x1400242E4
 * Callers:
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhCreatePdo @ 0x14001A420 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 */

void __fastcall Usbh_ErrorDisconnect_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // dl

  UsbhAcquirePdoStateLock(a1, a3, 4);
  if ( (UsbhLogMask & 2) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = 0LL;
        *(_DWORD *)v7 = 1985106790;
        *(_QWORD *)(v7 + 24) = a3;
      }
    }
  }
  if ( PdoExt(a2)[281] == 1 )
  {
    UsbhDeletePdo(a1, a2, 1, 4, a3);
  }
  else
  {
    *(_DWORD *)(a3 + 136) = 0;
    qword_14006F5E0 = 0LL;
    v8 = *(_BYTE *)(a3 + 132);
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v8);
  }
}
