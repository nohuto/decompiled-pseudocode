/*
 * XREFs of UsbhSyncBusPause @ 0x14001397C
 * Callers:
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhHardReset_Action @ 0x14004B668 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x14004BEAC (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x14004F168 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051310 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusPause(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = a3;
  FdoExt(a1);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_DWORD *)v7 = 1045578064;
        *(_QWORD *)(v7 + 16) = v3;
        *(_QWORD *)(v7 + 24) = a2;
      }
    }
  }
  *(_DWORD *)(a2 + 128) = v3;
  v8 = (int)UsbhDispatch_BusEvent(a1, a2, 7LL);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)v10 = 1012023632;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  return (unsigned int)v8;
}
