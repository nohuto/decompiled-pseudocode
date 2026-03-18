/*
 * XREFs of UsbhSignalDriverResetEvent @ 0x1400356CC
 * Callers:
 *     UsbhDropDevice @ 0x14001846C (UsbhDropDevice.c)
 *     UsbhSignalSyncDeviceReset @ 0x140047888 (UsbhSignalSyncDeviceReset.c)
 * Callees:
 *     UsbhLogSignalDriverResetEvent @ 0x14003581C (UsbhLogSignalDriverResetEvent.c)
 */

void __fastcall UsbhSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  KIRQL v7; // al
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rdx

  v3 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_DWORD *)v6 = 827486820;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = v3;
      }
    }
  }
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2, v3) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v8 = *(unsigned __int16 *)(a2 + 4);
    v9 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 448) = 1;
    if ( (UsbhLogMask & 0x10) != 0 && a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_DWORD *)v11 = 1986359664;
        *(_QWORD *)(v11 + 16) = v9;
        *(_QWORD *)(v11 + 24) = v8;
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1404) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
  }
}
