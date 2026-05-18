/*
 * XREFs of sub_1800386B0 @ 0x1800386B0
 * Callers:
 *     sub_1800386B0 @ 0x1800386B0 (sub_1800386B0.c)
 *     sub_180038964 @ 0x180038964 (sub_180038964.c)
 *     sub_18005E49C @ 0x18005E49C (sub_18005E49C.c)
 * Callees:
 *     sub_180037B7C @ 0x180037B7C (sub_180037B7C.c)
 *     sub_180037D2C @ 0x180037D2C (sub_180037D2C.c)
 *     sub_180038490 @ 0x180038490 (sub_180038490.c)
 *     sub_1800386B0 @ 0x1800386B0 (sub_1800386B0.c)
 */

void __fastcall sub_1800386B0(
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
      sub_1800386B0((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_1800386B0((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_180037D2C((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_180037D2C((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_180037B7C(a1, &a1[2 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_180038490(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a6);
  }
}
