/*
 * XREFs of _lambda_24d15fedd471cefb816ce8c43c2d04bf_::operator() @ 0x1804F96F4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_24d15fedd471cefb816ce8c43c2d04bf__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call @ 0x1805078F0 (std--_Func_impl_no_alloc__lambda_24d15fedd471cefb816ce8c43c2d04bf__void_HWND_____un_ea_1805078F0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_24d15fedd471cefb816ce8c43c2d04bf_::operator()(
        __int64 a1,
        HWND a2,
        __int64 a3,
        _OWORD *a4,
        int a5,
        _OWORD *a6)
{
  LONG v10; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  const char *v13; // r9
  _OWORD v14[3]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  LONG WindowLongW; // [rsp+90h] [rbp+8h] BYREF
  LONG v17; // [rsp+98h] [rbp+10h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+18h] BYREF
  HWND v19; // [rsp+A8h] [rbp+20h] BYREF

  WindowLongW = GetWindowLongW(a2, -20);
  v10 = GetWindowLongW(a2, -16);
  try
  {
    v17 = v10;
    v14[0] = *a6;
    a6 = a4;
    v18 = a3;
    v19 = a2;
    v11 = *(_QWORD *)(a1 + 56);
    if ( !v11 )
      std::_Xbad_function_call();
    result = (*(__int64 (__fastcall **)(__int64, HWND *, __int64 *, _OWORD **, int *, _OWORD *, LONG *, LONG *))(*(_QWORD *)v11 + 16LL))(
               v11,
               &v19,
               &v18,
               &a6,
               &a5,
               v14,
               &v17,
               &WindowLongW);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x101D,
             (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
             v13);
  }
  return result;
}
