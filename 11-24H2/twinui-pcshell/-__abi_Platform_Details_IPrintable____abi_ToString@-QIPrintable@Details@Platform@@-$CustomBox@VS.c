/*
 * XREFs of ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@VSize@Foundation@Windows@@@23@UE$AAAJPEAPE$AAVString@3@@Z @ 0x18069D7C8
 * Callers:
 *     ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@VSize@Foundation@Windows@@@23@WBA@E$AAAJPEAPE$AAVString@3@@Z @ 0x18069D800 (-__abi_Platform_Details_IPrintable____abi_ToString@-QIPrintable@Details@Platform@@-_ea_18069D800.c)
 * Callees:
 *     ?ToString@?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x18069D4E8 (-ToString@-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ.c)
 */

__int64 __fastcall ___abi_Platform_Details_IPrintable____abi_ToString__QIPrintable_Details_Platform____CustomBox_VSize_Foundation_Windows___23_UE_AAAJPEAPE_AAVString_3__Z(
        __int64 a1,
        HSTRING *a2)
{
  try
  {
    *a2 = 0LL;
    *a2 = Platform::Details::CustomBox<Windows::Foundation::Size>::ToString(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
