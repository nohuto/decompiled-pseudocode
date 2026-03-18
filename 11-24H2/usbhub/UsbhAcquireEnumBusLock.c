/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x140018F14
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDriverResetPort @ 0x140057310 (UsbhDriverResetPort.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhAcquireEnumBusLock(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r14
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  KIRQL v13; // al
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  KIRQL v18; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  v7 = (unsigned int)v6[768];
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)v9 = 1398096481;
        *(_QWORD *)(v9 + 16) = v7;
        *(_QWORD *)(v9 + 24) = v3;
      }
    }
  }
  v10 = (unsigned int)v6[768];
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_DWORD *)v12 = 1129071201;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = a2;
      }
    }
  }
  if ( *((_QWORD *)v6 + 549) )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 383);
    if ( v6[768] == (_DWORD)v3 || *((_QWORD *)v6 + 385) == a2 )
    {
      Log(a1, 4, 2017613139, v6[768], v3);
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v18);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v13);
      Usbh_SSH_Event(a1, 6LL, a2, v14);
      (*((void (__fastcall **)(_QWORD))v6 + 549))(*((_QWORD *)v6 + 529));
      v15 = (unsigned int)v6[768];
      if ( (UsbhLogMask & 4) != 0 && a1 )
      {
        v16 = *(_QWORD *)(a1 + 64);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_DWORD *)v17 = 1398096492;
          *(_QWORD *)(v17 + 16) = v15;
          *(_QWORD *)(v17 + 24) = v3;
        }
      }
      v6[768] = v3;
      *((_QWORD *)v6 + 385) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement(v6 + 774);
      *((_QWORD *)v6 + 386) = UsbhIncHubBusy(a1, a2, a1, 1430416236, 1);
    }
  }
}
