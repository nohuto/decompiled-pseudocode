/*
 * XREFs of wistd::__function::__func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl(void)_::__clone @ 0x1804616A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_37f42a09d0b92423a36297eafa18de05__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_180742480;
  *a2 = &off_180742480;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
