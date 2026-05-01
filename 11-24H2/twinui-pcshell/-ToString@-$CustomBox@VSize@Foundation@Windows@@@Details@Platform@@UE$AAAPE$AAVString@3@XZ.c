/*
 * XREFs of ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x18069D4E8
 * Callers:
 *     ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@WBA@E$AAAPE$AAVString@3@XZ @ 0x18069D550 (-ToString@-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@WBA@E$AAAPE$AAVString@3@XZ.c)
 *     ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@VSize@Foundation@Windows@@@23@UE$AAAJPEAPE$AAVString@3@@Z @ 0x18069D7C8 (-__abi_Platform_Details_IPrintable____abi_ToString@-QIPrintable@Details@Platform@@-$CustomBox@VS.c)
 * Callees:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x1801CF7D8 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     WindowsDeleteString_0 @ 0x1802D2D72 (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING __fastcall Platform::Details::CustomBox<Windows::Foundation::Size>::ToString(__int64 a1)
{
  HSTRING v1; // rbx
  HSTRING v2; // rdi
  HSTRING v3; // rbx

  v1 = (HSTRING)__abi_details::__abi_ObjectToString(a1, 0LL);
  v2 = __abi_winrt_ptrto_string_ctor(v1);
  WindowsDeleteString_0(v1);
  v3 = __abi_winrt_ptrto_string_ctor(v2);
  WindowsDeleteString_0(v2);
  return v3;
}
