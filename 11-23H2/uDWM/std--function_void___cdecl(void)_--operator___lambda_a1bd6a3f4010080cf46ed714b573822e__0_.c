/*
 * XREFs of std::function_void___cdecl(void)_::operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_ @ 0x1800A2100
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A261C (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006B904 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x1800A3CA8 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::function_void___cdecl_void__::operator___lambda_a1bd6a3f4010080cf46ed714b573822e__0_(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD v5[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v7; // [rsp+98h] [rbp-20h]

  v7 = 0LL;
  v5[0] = off_180116540;
  v5[7] = v5;
  std::_Func_class<void,>::_Reset_move(v6, v5);
  std::_Func_class<void,>::_Reset_move(v5, a1);
  std::_Func_class<void,>::_Reset_move(a1, v6);
  std::_Func_class<void,>::_Tidy((__int64)v6, v2);
  std::_Func_class<void,>::_Tidy((__int64)v5, v3);
  return a1;
}
