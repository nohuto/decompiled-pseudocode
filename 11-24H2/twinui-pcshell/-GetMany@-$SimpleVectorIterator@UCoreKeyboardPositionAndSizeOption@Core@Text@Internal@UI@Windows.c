/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x18048A4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@AEBV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1804895DC (--$Do@V_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@V_lambda_990521e561bc13f238039e7a89bd70b9_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  unsigned int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v9; // [rsp+78h] [rbp+18h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v12; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _DWORD *);
  v9 = a2;
  v2 = 0;
  for ( *v12 = 0; v2 < v9; *(_QWORD *)(v4 + 48) = 0LL )
  {
    v3 = 56LL * v2++;
    v4 = v10 + v3;
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 32);
  va_copy((va_list)v7, va1);
  v8[0] = a1;
  va_copy((va_list)&v7[1], va);
  v8[1] = (__int64)&v9;
  va_copy((va_list)&v8[2], va);
  va_copy((va_list)&v8[3], va1);
  v8[4] = (__int64)v7;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,XWinRT::IntVersionTag>::Do<_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_,_lambda_990521e561bc13f238039e7a89bd70b9_>(
           (unsigned int *)(a1 + 48),
           v5,
           v8,
           (__int64)v7);
}
