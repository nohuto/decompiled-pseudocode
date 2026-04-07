/*
 * XREFs of std::function_void___cdecl(void)_::operator___lambda_fe545bda8eea4d2e77db634168ef197a__0_ @ 0x1800A1F44
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180068CA0 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180021D08 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Swap@?$_Func_class@X$$V@std@@IEAAXAEAV12@@Z @ 0x180067CA4 (-_Swap@-$_Func_class@X$$V@std@@IEAAXAEAV12@@Z.c)
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x1800715E0 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

CFadeOut *__fastcall std::function_void___cdecl_void__::operator___lambda_fe545bda8eea4d2e77db634168ef197a__0_(
        CFadeOut *a1)
{
  __int64 v2; // rdx
  _QWORD v4[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v5; // [rsp+58h] [rbp-20h]

  v5 = 0LL;
  if ( CFadeOut::IsIndependent(a1) )
  {
    v4[0] = off_1800FEF20;
    v5 = v4;
  }
  std::_Func_class<void,>::_Swap((__int64)v4, (__int64)a1);
  std::_Func_class<void,>::_Tidy((__int64)v4, v2);
  return a1;
}
