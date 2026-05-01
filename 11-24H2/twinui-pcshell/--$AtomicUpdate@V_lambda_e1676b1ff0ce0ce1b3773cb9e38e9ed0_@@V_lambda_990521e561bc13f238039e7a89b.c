/*
 * XREFs of ??$AtomicUpdate@V_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x18048923C
 * Callers:
 *     ??$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1804895DC (--$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@-.c)
 * Callees:
 *     ??R_lambda_990521e561bc13f238039e7a89bd70b9_@@QEBA@XZ @ 0x180489AA8 (--R_lambda_990521e561bc13f238039e7a89bd70b9_@@QEBA@XZ.c)
 *     ??R_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@QEBAJIPEAI@Z @ 0x180489B40 (--R_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_,_lambda_990521e561bc13f238039e7a89bd70b9_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  bool v7; // zf
  signed __int32 v8; // eax
  int v9; // r9d
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v11 = 0;
    v9 = _lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_::operator()(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    _lambda_990521e561bc13f238039e7a89bd70b9_::operator()(a3);
  }
  return (unsigned int)v9;
}
