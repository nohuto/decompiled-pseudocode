/*
 * XREFs of UsbhHandleOvercurrent @ 0x14005750C
 * Callers:
 *     UsbhWaitConnect @ 0x140006D60 (UsbhWaitConnect.c)
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     UsbhHandleSuspend @ 0x1400325D0 (UsbhHandleSuspend.c)
 *     UsbhEnumerate1 @ 0x140034800 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x140034CF0 (UsbhEnumerate2.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhCancelEnumeration @ 0x140034170 (UsbhCancelEnumeration.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x140058E10 (Usbh_OvercurrentRefHubBusy.c)
 */

__int64 __fastcall UsbhHandleOvercurrent(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v8; // rax
  __int64 v9; // r8
  const void *v10; // r9

  v8 = FdoExt(a1);
  if ( (*(_WORD *)(a4 + 420) & 0x100) == 0 || (v8[640] & 0x10000000) != 0 )
  {
    ++*(_DWORD *)(a4 + 2404);
    if ( a5 && PdoExt(a5)[280] == 101 )
    {
      Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
      UsbhException(
        a1,
        *(unsigned __int16 *)(a4 + 4),
        115LL,
        (const void *)a4,
        0xB70u,
        0,
        0,
        usbfile_busfunc_c,
        2868,
        0);
      a2 = 4;
      _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
    }
    else
    {
      UsbhCancelEnumeration(a1, a2, a4, a5);
      if ( *(_DWORD *)(a4 + 2404) >= 3u )
      {
        Log(a1, 1024, 1884247634, a4, 0LL);
        UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 107LL, v10, 0xB70u, 0, 0, usbfile_busfunc_c, 2907, 0);
        a2 = 4;
        _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
        Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
        UsbhException(
          a1,
          *(unsigned __int16 *)(a4 + 4),
          6LL,
          (const void *)a4,
          0xB70u,
          0,
          0,
          usbfile_busfunc_c,
          2918,
          0);
      }
      else
      {
        LOBYTE(v9) = 1;
        Usbh_OvercurrentRefHubBusy(a1, a4, v9);
        UsbhException(
          a1,
          *(unsigned __int16 *)(a4 + 4),
          108LL,
          (const void *)a4,
          0xB70u,
          0,
          0,
          usbfile_busfunc_c,
          2893,
          0);
        return 4;
      }
    }
  }
  else
  {
    UsbhException(
      a1,
      *(unsigned __int16 *)(a4 + 4),
      (unsigned int)((*(_WORD *)(a4 + 420) & 8) != 0) + 105,
      (const void *)a4,
      0xB70u,
      0,
      0,
      usbfile_busfunc_c,
      (*(_WORD *)(a4 + 420) & 8) != 0 ? 2843 : 2831,
      0);
  }
  return a2;
}
