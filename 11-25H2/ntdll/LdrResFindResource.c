/*
 * XREFs of LdrResFindResource @ 0x180139D10
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrResFindResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  _QWORD Src[3]; // [rsp+40h] [rbp-28h] BYREF

  if ( (a9 & 0xC02) != 0 )
    return -1073741811;
  Src[0] = a2;
  Src[1] = a3;
  Src[2] = a4;
  return LdrResSearchResource(a1, Src, 3u, a9, a5, a6, a7, a8);
}
