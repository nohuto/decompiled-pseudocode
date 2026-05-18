/*
 * XREFs of sub_180052F4C @ 0x180052F4C
 * Callers:
 *     sub_180036450 @ 0x180036450 (sub_180036450.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 *     sub_180030050 @ 0x180030050 (sub_180030050.c)
 *     sub_1800306BC @ 0x1800306BC (sub_1800306BC.c)
 *     sub_180036868 @ 0x180036868 (sub_180036868.c)
 *     sub_180052EAC @ 0x180052EAC (sub_180052EAC.c)
 *     sub_180053474 @ 0x180053474 (sub_180053474.c)
 *     sub_180053F40 @ 0x180053F40 (sub_180053F40.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180052F4C(__int64 a1)
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
    sub_180029840((__int64)v6, a1 + 128);
    if ( *(_DWORD *)(v1 + 36) == 1 )
      sub_180053474(v1, v6);
    sub_180029CE0((__int64)v6);
  }
  catch ( const std::system_error *v5 )
  {
    (*(void (__fastcall **)(const std::system_error *))(*(_QWORD *)v5 + 8LL))(v5);
    sub_18001CAFC(&stru_1801B9368, 3);
    v1 = a1;
    v2 = v9;
  }
  if ( *(_DWORD *)(v1 + 112) )
    sub_180053F40(v1 + 104);
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 304));
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 232));
  _Cnd_destroy_in_situ((_Cnd_t)(v1 + 160));
  _Mtx_destroy_in_situ(v2);
  sub_1800306BC(v1 + 104);
  sub_180052EAC((void **)(v1 + 88));
  sub_180030050(v1 + 64);
  result = sub_180036868(v1 + 40);
  v4 = *(volatile signed __int32 **)(v1 + 8);
  if ( v4 )
    return sub_180010644(v4);
  return result;
}
