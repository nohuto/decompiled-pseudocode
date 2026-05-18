/*
 * XREFs of sub_180038810 @ 0x180038810
 * Callers:
 *     sub_180038810 @ 0x180038810 (sub_180038810.c)
 *     sub_180038AC4 @ 0x180038AC4 (sub_180038AC4.c)
 *     sub_18005E5FC @ 0x18005E5FC (sub_18005E5FC.c)
 * Callees:
 *     sub_180037CDC @ 0x180037CDC (sub_180037CDC.c)
 *     sub_180037E8C @ 0x180037E8C (sub_180037E8C.c)
 *     sub_1800385F0 @ 0x1800385F0 (sub_1800385F0.c)
 *     sub_180038810 @ 0x180038810 (sub_180038810.c)
 */

void __fastcall sub_180038810(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, unsigned __int64))
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (__int64)&a1[2 * v10];
    if ( v10 > a5 )
    {
      sub_180038810((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_180038810((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_180037E8C((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_180037E8C((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_180037CDC(a1, &a1[2 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_1800385F0(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a6);
  }
}
