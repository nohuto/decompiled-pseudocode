/*
 * XREFs of _GetLocaleHandleByColl @ 0x18000DD58
 * Callers:
 *     _Towlower @ 0x180005C34 (_Towlower.c)
 *     _Tolower @ 0x180005D98 (_Tolower.c)
 *     _Towupper @ 0x1800062C0 (_Towupper.c)
 *     _Toupper @ 0x18000E818 (_Toupper.c)
 *     _Strcoll @ 0x180021AE8 (_Strcoll.c)
 *     _Wcscoll @ 0x180021C40 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x180021D44 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021E74 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
