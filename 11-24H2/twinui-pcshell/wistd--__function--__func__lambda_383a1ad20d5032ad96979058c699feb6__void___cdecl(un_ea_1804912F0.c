/*
 * XREFs of wistd::__function::__func__lambda_383a1ad20d5032ad96979058c699feb6__void___cdecl(unsigned_long_const_&)_::__clone @ 0x1804912F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_383a1ad20d5032ad96979058c699feb6__void___cdecl_unsigned_long_const____::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_1807437E8;
  *a2 = &off_1807437E8;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
