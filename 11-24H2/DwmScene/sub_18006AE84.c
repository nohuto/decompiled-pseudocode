/*
 * XREFs of sub_18006AE84 @ 0x18006AE84
 * Callers:
 *     sub_18006A554 @ 0x18006A554 (sub_18006A554.c)
 *     sub_18006AE84 @ 0x18006AE84 (sub_18006AE84.c)
 *     sub_180099188 @ 0x180099188 (sub_180099188.c)
 * Callees:
 *     sub_18006A7C8 @ 0x18006A7C8 (sub_18006A7C8.c)
 *     sub_18006A8B4 @ 0x18006A8B4 (sub_18006A8B4.c)
 *     sub_18006AA30 @ 0x18006AA30 (sub_18006AA30.c)
 *     sub_18006ADB4 @ 0x18006ADB4 (sub_18006ADB4.c)
 *     sub_18006AE84 @ 0x18006AE84 (sub_18006AE84.c)
 */

__int64 *__fastcall sub_18006AE84(
        __int64 *a1,
        char *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]

  while ( (__int64)((a2 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
  {
    if ( a3 <= 0 )
    {
      sub_18006A8B4((__int64)a1, (__int64)a2, (__int64)a4);
      return (__int64 *)sub_18006ADB4(a1, (__int64)a2, a4);
    }
    sub_18006AA30(&v9, (unsigned __int64)a1, a2, (unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v9 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((a2 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      sub_18006AE84(v10, a2, a3, a4, (_DWORD)v9);
      a2 = v9;
    }
    else
    {
      sub_18006AE84(a1, v9, a3, a4, (_DWORD)v9);
      a1 = v10;
    }
  }
  return sub_18006A7C8(a1, (__int64 *)a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a4);
}
