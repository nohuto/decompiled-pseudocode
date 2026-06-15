/*
 * XREFs of _lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_ @ 0x180035E90
 * Callers:
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f302790ab0c__&_0_ @ 0x180035C40 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f30.c)
 *     std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Copy @ 0x180039AB0 (std--_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_--_Copy.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180017D74 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax

  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a1, a2);
  v3 = *(_QWORD *)(v2 + 16);
  *(_DWORD *)(v4 + 24) = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v4 + 28) = *(_DWORD *)(v2 + 28);
  result = v4;
  *(_QWORD *)(v4 + 16) = v3;
  return result;
}
