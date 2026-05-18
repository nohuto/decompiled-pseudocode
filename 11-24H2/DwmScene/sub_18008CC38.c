/*
 * XREFs of sub_18008CC38 @ 0x18008CC38
 * Callers:
 *     sub_180069A0C @ 0x180069A0C (sub_180069A0C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_18008CAFC @ 0x18008CAFC (sub_18008CAFC.c)
 *     sub_18008CD18 @ 0x18008CD18 (sub_18008CD18.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008CC38(__int64 a1, _QWORD *a2)
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
  sub_180011C30(a1 + 48);
  sub_18001254C((__int64 *)(a1 + 32), a2);
  sub_18008CAFC((__int64 **)&v14, (__int64 **)a1);
  sub_18008CD18(a1);
  Mtx_unlock(v4);
  for ( i = v14; i != *((_QWORD *)&v14 + 1); i += 16LL )
  {
    v6 = unknown_libname_81(&v11, a2);
    v7(v8, v12, v6);
    if ( v13 )
      sub_18001060C(v13);
  }
  result = sub_1800131E0((__int64)&v14);
  v10 = a2[1];
  if ( v10 )
    return sub_18001060C(v10);
  return result;
}
