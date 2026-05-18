/*
 * XREFs of sub_180039EB0 @ 0x180039EB0
 * Callers:
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 *     sub_180084280 @ 0x180084280 (sub_180084280.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_180039D9C @ 0x180039D9C (sub_180039D9C.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

_QWORD *__fastcall sub_180039EB0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rcx
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rax
  char v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  sub_18003BE3C(a1);
  v6 = sub_180039D9C(a1, *a3);
  if ( v6 )
  {
    v7 = (__int64 *)sub_180011D64(v6 + 8, &v14);
    v8 = 5;
    v9 = *v7;
  }
  else
  {
    v13 = 0LL;
    v7 = (__int64 *)&v12;
    v9 = 0LL;
    v8 = 6;
  }
  *v7 = 0LL;
  *a2 = v9;
  v10 = v7[1];
  v7[1] = 0LL;
  a2[1] = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v13 )
      sub_18001060C(v13);
  }
  if ( (v8 & 1) != 0 && v15 )
    sub_18001060C(v15);
  return a2;
}
