/*
 * XREFs of ?CopyPnpInstancePath@Win32kInterop@@AEAAXKPEBGKPEAG@Z @ 0x180051440
 * Callers:
 *     ?CreateDeviceInfo@Win32kInterop@@AEAA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180051338 (-CreateDeviceInfo@Win32kInterop@@AEAA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegac.c)
 * Callees:
 *     memcpy_s @ 0x1800514AC (memcpy_s.c)
 */

void __fastcall Win32kInterop::CopyPnpInstancePath(
        Win32kInterop *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        __int64 a4,
        unsigned __int16 *Destination)
{
  if ( a2 )
  {
    memcpy_s(Destination, 0x208uLL, a3, 2LL * a2);
    if ( a2 > 2 && *a3 == 92 && a3[1] == 63 && a3[2] == 63 )
      Destination[1] = 92;
  }
}
