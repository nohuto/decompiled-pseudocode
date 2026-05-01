/*
 * XREFs of ??$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1804895DC
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x18048A4F0 (-GetMany@-$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows.c)
 * Callees:
 *     ??$?0V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@IntVersionTag@XWinRT@@QEAA@PEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x180127540 (--$-0V-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPo.c)
 *     ??$AtomicUpdate@V_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x18048923C (--$AtomicUpdate@V_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@V_lambda_990521e561bc13f238039e7a89b.c)
 *     ??R_lambda_990521e561bc13f238039e7a89bd70b9_@@QEBA@XZ @ 0x180489AA8 (--R_lambda_990521e561bc13f238039e7a89bd70b9_@@QEBA@XZ.c)
 *     ??R_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@QEBAJIPEAI@Z @ 0x180489B40 (--R_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,XWinRT::IntVersionTag>::Do<_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_,_lambda_990521e561bc13f238039e7a89bd70b9_>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // eax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v9 = a3[4];
    v14[0] = &v15;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v10 = a3[3];
    v15 = v8;
    v11 = *(_BYTE *)(v8 + 56) == 0;
    v14[3] = v10;
    if ( v11 )
      v12 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_,_lambda_990521e561bc13f238039e7a89bd70b9_>(
              (volatile signed __int32 *)(v8 + 40),
              (__int64)v14,
              v9);
    else
      v12 = _lambda_e1676b1ff0ce0ce1b3773cb9e38e9ed0_::operator()(v14, *(unsigned int *)(v8 + 40), v8 + 40);
    v4 = v12;
    XWinRT::IntVersionTag::IntVersionTag(&v15, a2);
    if ( a1[1] != (_DWORD)v15 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_990521e561bc13f238039e7a89bd70b9_::operator()(a4);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
