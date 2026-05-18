/*
 * XREFs of sub_1800CBBA8 @ 0x1800CBBA8
 * Callers:
 *     sub_1800CB460 @ 0x1800CB460 (sub_1800CB460.c)
 *     sub_1800CB6B0 @ 0x1800CB6B0 (sub_1800CB6B0.c)
 *     sub_1800CB8C0 @ 0x1800CB8C0 (sub_1800CB8C0.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800CBBA8(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v10; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v9);
  v4 = (__int64 *)sub_180011C04(v3, &v7);
  v5 = *v4;
  a2[1] = 0LL;
  *a2 = v5;
  a2[1] = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v8 )
    sub_18001060C(v8);
  if ( v10 )
    sub_180010644(v10);
  return a2;
}
