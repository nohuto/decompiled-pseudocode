/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_70bc263229c7881e4aa0a680059fb776_@@CA@XZ @ 0x1803F16B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int _lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(&`PenWorkspaceBrokerLogging::Instance'::`2'::wrapper, 1u, &v1, &v2);
  if ( result )
  {
    if ( !v1 )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, 0LL);
  }
  return result;
}
