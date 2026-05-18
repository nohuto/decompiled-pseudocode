/*
 * XREFs of sub_18002B574 @ 0x18002B574
 * Callers:
 *     sub_180029BD8 @ 0x180029BD8 (sub_180029BD8.c)
 *     sub_180029C48 @ 0x180029C48 (sub_180029C48.c)
 *     sub_18002AF10 @ 0x18002AF10 (sub_18002AF10.c)
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x18006D130 (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180028CB4 @ 0x180028CB4 (sub_180028CB4.c)
 */

__int64 __fastcall sub_18002B574(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180028CB4((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
