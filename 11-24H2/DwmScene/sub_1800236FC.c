/*
 * XREFs of sub_1800236FC @ 0x1800236FC
 * Callers:
 *     sub_180024EC0 @ 0x180024EC0 (sub_180024EC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180016F68 @ 0x180016F68 (sub_180016F68.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800236FC(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-20h]
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF

  sub_180016F68(a2);
  sub_18002867C(a1 + 808, v16);
  sub_180015274(&v14, a2);
  v7 = *(_QWORD *)(a1 + 872);
  if ( v7 == *(_QWORD *)(a1 + 880) )
    sub_180010C10(v6, v7, (__int64)&v14);
  else
    sub_180010BE8((__int64)v6, &v14);
  if ( v15 )
    sub_180010644(v15);
  sub_180011044((__int64)v16);
  v8 = unknown_libname_81(v16, a3);
  v9 = *a2;
  *(_QWORD *)(v9 + 72) = a1;
  if ( (*(_BYTE *)(v9 + 40) & 1) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 16LL))(v9, v8);
    if ( !*(_DWORD *)(a1 + 552) )
    {
      LOBYTE(v10) = 1;
      sub_180027DD0(v9, 8LL, v10);
    }
  }
  v11 = v8[1];
  if ( v11 )
    sub_18001060C(v11);
  v12 = a3[1];
  if ( v12 )
    sub_18001060C(v12);
  return a2;
}
