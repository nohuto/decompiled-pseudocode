/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18048ABB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_603221b9b6c913954c8435c703c54208_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_603221b9b6c913954c8435c703c54208_@@AEBV_lambda_31eb4188a7908574ef45863a494633c2_@@@Z @ 0x1804894E8 (--$Do@V_lambda_603221b9b6c913954c8435c703c54208_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rdx
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE **v5; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  *a2 = 0;
  v4[0] = a1;
  v5 = &v6;
  v2 = *(_QWORD *)(a1 + 32);
  v4[1] = (__int64)&v6;
  v4[2] = (__int64)&v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,XWinRT::IntVersionTag>::Do<_lambda_603221b9b6c913954c8435c703c54208_,_lambda_31eb4188a7908574ef45863a494633c2_>(
           (unsigned int *)(a1 + 48),
           v2,
           v4,
           &v5);
}
