/*
 * XREFs of _GetLocaleHandleByColl @ 0x18000DD68
 * Callers:
 *     _Towlower @ 0x180005C44 (_Towlower.c)
 *     _Tolower @ 0x180005DA8 (_Tolower.c)
 *     _Towupper @ 0x1800062D0 (_Towupper.c)
 *     _Toupper @ 0x18000E828 (_Toupper.c)
 *     _Strcoll @ 0x180021AF8 (_Strcoll.c)
 *     _Wcscoll @ 0x180021C50 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x180021D54 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021E84 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
