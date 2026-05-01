/*
 * XREFs of ?__clone@?$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEBAXPEAV?$__base@$$A6AXXZ@23@@Z @ 0x1804786B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void **__fastcall wistd::__function::__func<_lambda_27e2a3ac73e95be6f7403a2f326512f5_,void (void)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  void **result; // rax
  __int64 v3; // rcx

  result = &wistd::__function::__func<_lambda_27e2a3ac73e95be6f7403a2f326512f5_,void (void)>::`vftable';
  *a2 = &wistd::__function::__func<_lambda_27e2a3ac73e95be6f7403a2f326512f5_,void (void)>::`vftable';
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
