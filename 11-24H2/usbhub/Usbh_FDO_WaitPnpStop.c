/*
 * XREFs of Usbh_FDO_WaitPnpStop @ 0x140051310
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140012820 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusPause @ 0x14001397C (UsbhSyncBusPause.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhReleaseFdoPnpLock @ 0x14002DDF4 (UsbhReleaseFdoPnpLock.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048428 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     UsbhDisableHardReset @ 0x14004B550 (UsbhDisableHardReset.c)
 *     UsbhModuleDispatch @ 0x14005084C (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x140050CB4 (UsbhSetFdoPnpState.c)
 *     Usbh_PnpRemove @ 0x1400515C4 (Usbh_PnpRemove.c)
 *     UsbhSshDisabled @ 0x14005E2A0 (UsbhSshDisabled.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop(ULONG_PTR a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // edi
  __int64 v8; // rdx
  int v9; // ebp
  __int64 v10; // r9
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  Log(*(_QWORD *)(a1 + 8), 2, 2001949776, a1, a2);
  if ( a2 == 2 )
  {
    UsbhModuleDispatch(0LL, v4, *(struct _DRIVER_OBJECT **)(a1 + 8), 6, 0LL, a1);
    return Usbh_PnpRemove(a1, 2LL);
  }
  else
  {
    if ( a2 == 3 )
    {
      v9 = UsbhFdoCheckUpstreamConnectionState(*(_QWORD *)(a1 + 8), &v12);
      if ( v9 >= 0 )
        Usbh_SSH_Event(*(_QWORD *)(a1 + 8), 6LL, a1, v10);
      UsbhModuleDispatch(0LL, v8, *(struct _DRIVER_OBJECT **)(a1 + 8), 6, 0LL, a1);
      v7 = 4;
      if ( v9 >= 0 )
        Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
    else if ( a2 == 4 )
    {
      v7 = 5;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8);
      if ( a2 != 5 )
        UsbhTrapFatal_Dbg(v5, a1);
      UsbhDisableHardReset(v5);
      Usbh_SSH_Event(*(_QWORD *)(a1 + 8), 6LL, a1, v6);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(_QWORD *)(a1 + 8), a1, 4);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
      v7 = 7;
    }
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), v7, a2);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
