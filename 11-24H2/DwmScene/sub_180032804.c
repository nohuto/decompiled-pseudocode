/*
 * XREFs of sub_180032804 @ 0x180032804
 * Callers:
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_180025294 @ 0x180025294 (sub_180025294.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180032804(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  _QWORD *v5; // rax
  _BYTE v7[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF

  sub_180034808(a2, v10);
  v3 = (__int64 *)v10[0];
  v4 = (__int64 *)v10[1];
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      sub_1800131E0((__int64)v10);
      *(_OWORD *)a1 = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      return a1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 32LL))(*v3) )
      break;
LABEL_6:
    v3 += 2;
  }
  sub_18002867C(*v3 + 24, (__int64)v7);
  if ( !(unsigned int)sub_180025294(*v3) )
  {
    sub_180011044((__int64)v7);
    goto LABEL_6;
  }
  v5 = sub_180025240(*v3, &v8, 0);
  *(_QWORD *)a1 = *v5;
  *(_QWORD *)(a1 + 8) = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( v9 )
    sub_18001060C(v9);
  sub_180011044((__int64)v7);
  sub_1800131E0((__int64)v10);
  return a1;
}
