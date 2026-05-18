/*
 * XREFs of sub_18008CAD8 @ 0x18008CAD8
 * Callers:
 *     sub_1800698AC @ 0x1800698AC (sub_1800698AC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_18008C99C @ 0x18008C99C (sub_18008C99C.c)
 *     sub_18008CBB8 @ 0x18008CBB8 (sub_18008CBB8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008CAD8(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 i; // rbx
  _QWORD *v6; // rax
  void (__fastcall *v7)(__int64, _BYTE *, _QWORD *); // r9
  __int64 v8; // r10
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  sub_180011B30(a1 + 48);
  sub_18001244C((__int64 *)(a1 + 32), a2);
  sub_18008C99C((__int64 **)&v14, (__int64 **)a1);
  sub_18008CBB8(a1);
  Mtx_unlock(v4);
  for ( i = v14; i != *((_QWORD *)&v14 + 1); i += 16LL )
  {
    v6 = unknown_libname_81(&v11, a2);
    v7(v8, v12, v6);
    if ( v13 )
      sub_18001050C(v13);
  }
  result = sub_1800130E0((__int64)&v14);
  v10 = a2[1];
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
