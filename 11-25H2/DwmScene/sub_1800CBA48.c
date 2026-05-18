/*
 * XREFs of sub_1800CBA48 @ 0x1800CBA48
 * Callers:
 *     sub_1800CB300 @ 0x1800CB300 (sub_1800CB300.c)
 *     sub_1800CB550 @ 0x1800CB550 (sub_1800CB550.c)
 *     sub_1800CB760 @ 0x1800CB760 (sub_1800CB760.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800CBA48(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v10; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v9);
  v4 = (__int64 *)sub_180011B04(v3, &v7);
  v5 = *v4;
  a2[1] = 0LL;
  *a2 = v5;
  a2[1] = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v8 )
    sub_18001050C(v8);
  if ( v10 )
    sub_180010544(v10);
  return a2;
}
