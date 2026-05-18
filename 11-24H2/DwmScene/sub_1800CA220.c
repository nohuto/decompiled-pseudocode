/*
 * XREFs of sub_1800CA220 @ 0x1800CA220
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_1800BC61C @ 0x1800BC61C (sub_1800BC61C.c)
 *     sub_1800C3044 @ 0x1800C3044 (sub_1800C3044.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CA220(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v4 = sub_1800BC61C(&v7, a2);
  sub_180011110((_QWORD *)(a1 + 104), v4);
  if ( v8 )
    sub_18001060C(v8);
  sub_1800C3044(*(_QWORD *)(a1 + 104), &v9);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 216LL))(v9, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 0;
  result = sub_18000E954(&v9);
  v6 = a2[1];
  if ( v6 )
    return sub_18001060C(v6);
  return result;
}
