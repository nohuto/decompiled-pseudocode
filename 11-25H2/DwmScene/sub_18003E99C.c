/*
 * XREFs of sub_18003E99C @ 0x18003E99C
 * Callers:
 *     sub_18003DBF8 @ 0x18003DBF8 (sub_18003DBF8.c)
 *     sub_18003ECEC @ 0x18003ECEC (sub_18003ECEC.c)
 *     sub_18003F268 @ 0x18003F268 (sub_18003F268.c)
 *     sub_180061250 @ 0x180061250 (sub_180061250.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_180039E08 @ 0x180039E08 (sub_180039E08.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003E99C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  bool v9; // bp
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  _BYTE v14[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = (__int64)a3;
  sub_180028730(a1 + 16);
  sub_180039E08(*a3, &v12);
  v6 = **(_QWORD **)(a1 + 88);
  v16 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = (_QWORD *)(v6 + 64);
    v8 = (_QWORD *)sub_18003EB98(*(_QWORD *)(v6 + 64), v14);
    v9 = *v8 == v12;
    if ( v15 )
      sub_18001050C(v15);
    if ( v9 )
    {
      unknown_libname_81(a2, v7);
      goto LABEL_9;
    }
    sub_18001C2C0(&v16);
    v6 = v16;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_9:
  if ( v13 )
    sub_18001050C(v13);
  v10 = a3[1];
  if ( v10 )
    sub_18001050C(v10);
  return a2;
}
