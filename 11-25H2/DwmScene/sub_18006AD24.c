/*
 * XREFs of sub_18006AD24 @ 0x18006AD24
 * Callers:
 *     sub_18006A3F4 @ 0x18006A3F4 (sub_18006A3F4.c)
 *     sub_18006AD24 @ 0x18006AD24 (sub_18006AD24.c)
 *     sub_180099028 @ 0x180099028 (sub_180099028.c)
 * Callees:
 *     sub_18006A668 @ 0x18006A668 (sub_18006A668.c)
 *     sub_18006A754 @ 0x18006A754 (sub_18006A754.c)
 *     sub_18006A8D0 @ 0x18006A8D0 (sub_18006A8D0.c)
 *     sub_18006AC54 @ 0x18006AC54 (sub_18006AC54.c)
 *     sub_18006AD24 @ 0x18006AD24 (sub_18006AD24.c)
 */

__int64 *__fastcall sub_18006AD24(
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
      sub_18006A754((__int64)a1, (__int64)a2, (__int64)a4);
      return (__int64 *)sub_18006AC54(a1, (__int64)a2, a4);
    }
    sub_18006A8D0(&v9, (unsigned __int64)a1, a2, (unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v9 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((a2 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      sub_18006AD24(v10, a2, a3, a4, (_DWORD)v9);
      a2 = v9;
    }
    else
    {
      sub_18006AD24(a1, v9, a3, a4, (_DWORD)v9);
      a1 = v10;
    }
  }
  return sub_18006A668(a1, (__int64 *)a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a4);
}
