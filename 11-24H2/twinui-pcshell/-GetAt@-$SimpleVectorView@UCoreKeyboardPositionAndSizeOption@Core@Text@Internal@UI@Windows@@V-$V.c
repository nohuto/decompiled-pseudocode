/*
 * XREFs of ?GetAt@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1800BED20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetAt(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // esi
  _QWORD *v6; // r14

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD **)(a1 + 40);
  if ( v5 < 0 )
  {
    RoOriginateError((unsigned int)v5, 0LL);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*v6 + 48LL))(*(_QWORD *)(a1 + 40));
  if ( *(_DWORD *)(a1 + 52) == (*(unsigned int (__fastcall **)(_QWORD *))(v6[3] + 24LL))(v6 + 3) )
    return (unsigned int)v5;
  *(_DWORD *)(a1 + 48) = -2147483636;
  if ( v5 < 0 )
  {
    RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
  }
  else
  {
    RoOriginateError(2147483660LL, 0LL);
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_OWORD *)(a3 + 32) = 0LL;
    *(_QWORD *)(a3 + 48) = 0LL;
  }
  return 2147483660LL;
}
