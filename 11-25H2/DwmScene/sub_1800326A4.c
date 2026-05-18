/*
 * XREFs of sub_1800326A4 @ 0x1800326A4
 * Callers:
 *     sub_1800350F8 @ 0x1800350F8 (sub_1800350F8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 *     sub_180025134 @ 0x180025134 (sub_180025134.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800326A4(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  _QWORD *v5; // rax
  _BYTE v7[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF

  sub_1800346A8(a2, v10);
  v3 = (__int64 *)v10[0];
  v4 = (__int64 *)v10[1];
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      sub_1800130E0((__int64)v10);
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
  sub_18002851C(*v3 + 24, (__int64)v7);
  if ( !(unsigned int)sub_180025134(*v3) )
  {
    sub_180010F44((__int64)v7);
    goto LABEL_6;
  }
  v5 = sub_1800250E0(*v3, &v8, 0);
  *(_QWORD *)a1 = *v5;
  *(_QWORD *)(a1 + 8) = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( v9 )
    sub_18001050C(v9);
  sub_180010F44((__int64)v7);
  sub_1800130E0((__int64)v10);
  return a1;
}
