/*
 * XREFs of sub_180025B00 @ 0x180025B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180016AB8 @ 0x180016AB8 (sub_180016AB8.c)
 *     sub_180023C3C @ 0x180023C3C (sub_180023C3C.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180025B00(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]

  v4 = a1 + 8;
  v11 = a1 + 8;
  sub_18002811C(a1 + 8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  v5 = *(__int64 **)sub_180023C3C((__int64 *)(a1 + 24), (__int64)v9, &v10);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = v5[6];
  v7 = v5 + 5;
  if ( v6 == v5[7] )
    sub_180016AB8(v7, v6, a2);
  else
    sub_180010BE8((__int64)v7, a2);
  return sub_1800282BC(v4);
}
