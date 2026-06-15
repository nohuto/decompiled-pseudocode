/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_5306e8013c9084f1ba6b78d0c08c093f_@@CA@XZ @ 0x140060DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 1u, &v1, &v2);
  if ( result )
  {
    if ( !v1 )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, 0LL);
  }
  return result;
}
