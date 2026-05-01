/*
 * XREFs of ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x1801CF7D8
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x1801CF5B4 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x1801CF6FC (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x18069D4E8 (-ToString@-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ.c)
 *     ?to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z @ 0x1806A2E9C (-to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x1806B3140 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 *     ?get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Platform@@XZ @ 0x1806B9260 (-get@Name@IVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVString@Plat.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     WindowsDuplicateString_0 @ 0x1802D3223 (WindowsDuplicateString_0.c)
 */

HSTRING __fastcall __abi_winrt_ptrto_string_ctor(HSTRING a1)
{
  HRESULT v1; // eax
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  newString = 0LL;
  v1 = WindowsDuplicateString_0(a1, &newString);
  __abi_ThrowIfFailed(v1);
  return newString;
}
