/*
 * XREFs of sub_180096D6C @ 0x180096D6C
 * Callers:
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_18006C8F0 @ 0x18006C8F0 (sub_18006C8F0.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180095D4C @ 0x180095D4C (sub_180095D4C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180096D6C(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = sub_18003741C(*a2, &v8);
  sub_180036AF4((__int64)v3, &v6);
  if ( v9 )
    sub_180010644(v9);
  if ( v6 )
  {
    v4 = sub_180095D4C(v6, &v10);
    sub_180030718(a1, v4);
    if ( v11 )
      sub_180010644(v11);
  }
  if ( v7 )
    sub_18001060C(v7);
  return a1;
}
