/*
 * XREFs of UsbhSetEnumerationFailed @ 0x140058C08
 * Callers:
 *     UsbhReset1Complete @ 0x1400188C0 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhReset1Timeout @ 0x140058340 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140058930 (UsbhReset2Timeout.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     UsbhBusConnectPdo @ 0x1400243D4 (UsbhBusConnectPdo.c)
 *     UsbhFreeID @ 0x14002796C (UsbhFreeID.c)
 *     UsbhReleaseEnumBusLockEx @ 0x140028B10 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhDisablePort @ 0x140029930 (UsbhDisablePort.c)
 *     UsbhBusUnlatchPdo @ 0x140029F90 (UsbhBusUnlatchPdo.c)
 *     UsbhSignalSyncDeviceReset @ 0x140047888 (UsbhSignalSyncDeviceReset.c)
 *     UsbhBuildUnknownIds @ 0x140059908 (UsbhBuildUnknownIds.c)
 */

__int64 __fastcall UsbhSetEnumerationFailed(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        const void *a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  _DWORD *v13; // rax
  __int64 v14; // rbp
  unsigned __int32 v15; // r14d
  _DWORD *v16; // r13
  __int64 v17; // rcx
  _DWORD *v18; // rax
  KIRQL v19; // dl
  int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // r9

  FdoExt(a1);
  v13 = PdoExt(a3);
  v14 = *(_QWORD *)(a2 + 376);
  v15 = *(_DWORD *)(a2 + 428);
  v16 = v13;
  UsbhDisablePort(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhAcquirePdoStateLock(v17, v14, 2);
  v18 = PdoExt(a3);
  Log(a1, 1024, 1701737761, a3, (int)v18[281]);
  *(_DWORD *)(v14 + 136) = 0;
  qword_14006F5E0 = 0LL;
  *(_DWORD *)(v14 + 88) = 1734964085;
  v19 = *(_BYTE *)(v14 + 132);
  if ( v20 == 3 )
  {
    KeReleaseSpinLock(&HubG, v19);
    UsbhBusUnlatchPdo(a1, a3, a2, v21, 0LL);
    UsbhSignalSyncDeviceReset(a1, a3, a2, -1073741823);
  }
  else
  {
    KeReleaseSpinLock(&HubG, v19);
    v16[355] |= 0x1000u;
    UsbhBuildUnknownIds(a1, a3);
    *((_QWORD *)v16 + 107) = UsbhIncHubBusy(a1, *(_QWORD *)(a2 + 376), a1, 1430414956, 1);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), a4, a5, 0xCu, a6, -1, usbfile_busfunc_c, a9, 0);
    UsbhFreeID((__int64)(v16 + 532));
    v16[355] &= ~0x200u;
    UsbhBusUnlatchPdo(a1, a3, a2, v22, 0LL);
    v16[283] |= 4u;
    UsbhBusConnectPdo(a1, a2);
    v15 = 2;
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), v15);
  return v15;
}
