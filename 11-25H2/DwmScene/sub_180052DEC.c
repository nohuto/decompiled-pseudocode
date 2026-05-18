/*
 * XREFs of sub_180052DEC @ 0x180052DEC
 * Callers:
 *     sub_1800362F0 @ 0x1800362F0 (sub_1800362F0.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_1800296E0 @ 0x1800296E0 (sub_1800296E0.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_18002FEF0 @ 0x18002FEF0 (sub_18002FEF0.c)
 *     sub_18003055C @ 0x18003055C (sub_18003055C.c)
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 *     sub_180052D4C @ 0x180052D4C (sub_180052D4C.c)
 *     sub_180053314 @ 0x180053314 (sub_180053314.c)
 *     sub_180053DE0 @ 0x180053DE0 (sub_180053DE0.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180052DEC(__int64 a1)
{
  __int64 v1; // rbx
  struct _Mtx_internal_imp_t *v2; // rdi
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx
  const std::system_error *v5; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  struct _Mtx_internal_imp_t *v9; // [rsp+58h] [rbp+10h]

  try
  {
    v1 = a1;
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v9 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    sub_1800296E0((__int64)v6, a1 + 128);
    if ( *(_DWORD *)(v1 + 36) == 1 )
      sub_180053314(v1, v6);
    sub_180029B80((__int64)v6);
  }
  catch ( const std::system_error *v5 )
  {
    (*(void (__fastcall **)(const std::system_error *))(*(_QWORD *)v5 + 8LL))(v5);
    sub_18001C99C(&stru_1801B8368, 3);
    v1 = a1;
    v2 = v9;
  }
  if ( *(_DWORD *)(v1 + 112) )
    sub_180053DE0(v1 + 104);
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 304));
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 232));
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 160));
  _Mtx_destroy_in_situ(v2);
  sub_18003055C(v1 + 104);
  sub_180052D4C((void **)(v1 + 88));
  sub_18002FEF0(v1 + 64);
  result = sub_180036708(v1 + 40);
  v4 = *(volatile signed __int32 **)(v1 + 8);
  if ( v4 )
    return sub_180010544(v4);
  return result;
}
