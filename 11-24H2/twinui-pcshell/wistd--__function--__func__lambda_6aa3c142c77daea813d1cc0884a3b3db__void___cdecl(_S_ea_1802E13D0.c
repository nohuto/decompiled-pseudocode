/*
 * XREFs of wistd::__function::__func__lambda_6aa3c142c77daea813d1cc0884a3b3db__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__clone @ 0x1802E13D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_6aa3c142c77daea813d1cc0884a3b3db__void___cdecl__SEB_EVENT_HEADER_const____::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_18072C288;
  *a2 = &off_18072C288;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
