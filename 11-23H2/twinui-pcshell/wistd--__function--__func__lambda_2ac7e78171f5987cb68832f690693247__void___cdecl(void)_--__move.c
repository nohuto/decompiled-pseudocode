/*
 * XREFs of wistd::__function::__func__lambda_2ac7e78171f5987cb68832f690693247__void___cdecl(void)_::__move @ 0x1800A29B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_2ac7e78171f5987cb68832f690693247__void___cdecl_void__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_1807A02C8;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  a2[2] = result;
  return result;
}
