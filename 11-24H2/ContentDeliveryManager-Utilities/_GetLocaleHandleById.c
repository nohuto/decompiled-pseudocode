/*
 * XREFs of _GetLocaleHandleById @ 0x18000DD74
 * Callers:
 *     _Tolower @ 0x180005DA8 (_Tolower.c)
 *     _Toupper @ 0x18000E828 (_Toupper.c)
 *     _Strcoll @ 0x180021AF8 (_Strcoll.c)
 *     _Getdateorder @ 0x180021BF0 (_Getdateorder.c)
 *     _Wcscoll @ 0x180021C50 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x180021D54 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021E84 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleById(int a1)
{
  return *(unsigned int *)(___lc_handle_func() + 4LL * a1);
}
