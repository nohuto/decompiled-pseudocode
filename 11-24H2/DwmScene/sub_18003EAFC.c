/*
 * XREFs of sub_18003EAFC @ 0x18003EAFC
 * Callers:
 *     sub_18003DD58 @ 0x18003DD58 (sub_18003DD58.c)
 *     sub_18003EE4C @ 0x18003EE4C (sub_18003EE4C.c)
 *     sub_18003F3C8 @ 0x18003F3C8 (sub_18003F3C8.c)
 *     sub_1800613B0 @ 0x1800613B0 (sub_1800613B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_180039F68 @ 0x180039F68 (sub_180039F68.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003EAFC(__int64 a1, _QWORD *a2, __int64 *a3)
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
  sub_180028890(a1 + 16);
  sub_180039F68(*a3, &v12);
  v6 = **(_QWORD **)(a1 + 88);
  v16 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = (_QWORD *)(v6 + 64);
    v8 = (_QWORD *)sub_18003ECF8(*(_QWORD *)(v6 + 64), v14);
    v9 = *v8 == v12;
    if ( v15 )
      sub_18001060C(v15);
    if ( v9 )
    {
      unknown_libname_81(a2, v7);
      goto LABEL_9;
    }
    sub_18001C420(&v16);
    v6 = v16;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_9:
  if ( v13 )
    sub_18001060C(v13);
  v10 = a3[1];
  if ( v10 )
    sub_18001060C(v10);
  return a2;
}
