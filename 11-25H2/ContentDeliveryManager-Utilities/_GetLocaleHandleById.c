/*
 * XREFs of _GetLocaleHandleById @ 0x18000DD64
 * Callers:
 *     _Tolower @ 0x180005D98 (_Tolower.c)
 *     _Toupper @ 0x18000E818 (_Toupper.c)
 *     _Strcoll @ 0x180021AE8 (_Strcoll.c)
 *     _Getdateorder @ 0x180021BE0 (_Getdateorder.c)
 *     _Wcscoll @ 0x180021C40 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x180021D44 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021E74 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
