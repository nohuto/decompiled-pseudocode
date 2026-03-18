/*
 * XREFs of Usbh_FDO_WaitPnpRemove @ 0x1C0044460
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C0031D14 (UsbhReleaseFdoPnpLock.c)
 *     GET_FDO_PNPSTATE @ 0x1C003BF34 (GET_FDO_PNPSTATE.c)
 *     UsbhSetFdoPnpState @ 0x1C0044248 (UsbhSetFdoPnpState.c)
 *     Usbh_PnpRemove @ 0x1C0044B44 (Usbh_PnpRemove.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpRemove(ULONG_PTR a1, int a2)
{
  __int64 v2; // rdi
  int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // r10d
  int v7; // edi
  __int64 v8; // rcx

  v2 = a2;
  GET_FDO_PNPSTATE(a1);
  Log(*(_QWORD *)(a1 + 8), 2, 2001882454, a1, 1LL);
  Log(*(_QWORD *)(a1 + 8), v5, v4, v2, v5);
  v7 = v2 - v6;
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v7 != 1 )
      UsbhTrapFatal_Dbg(v8, a1);
    UsbhSetFdoPnpState(v8, 4, 3);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  }
  else
  {
    Usbh_PnpRemove(a1, v6);
  }
  return 0LL;
}
