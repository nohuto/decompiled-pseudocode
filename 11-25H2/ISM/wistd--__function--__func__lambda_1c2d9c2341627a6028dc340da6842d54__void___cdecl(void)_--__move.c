/*
 * XREFs of wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::__move @ 0x1801099D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl_void__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_1801DDB08;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  a2[1] = result;
  return result;
}
