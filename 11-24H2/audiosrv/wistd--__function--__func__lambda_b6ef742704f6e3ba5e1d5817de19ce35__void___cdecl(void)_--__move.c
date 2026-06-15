/*
 * XREFs of wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_::__move @ 0x1800D95F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl_void__::__move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  a2[1] = 0LL;
  a2[2] = 0LL;
  *a2 = &off_18017BFB8;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a1[1] = 0LL;
  a1[2] = 0LL;
  result = a1[3];
  a2[3] = result;
  return result;
}
