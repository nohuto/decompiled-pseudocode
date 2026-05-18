/*
 * XREFs of sub_180029E70 @ 0x180029E70
 * Callers:
 *     sub_18002B560 @ 0x18002B560 (sub_18002B560.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x18006D130 (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 */

LPVOID __fastcall sub_180029E70(LPVOID lpMem, char a2)
{
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
