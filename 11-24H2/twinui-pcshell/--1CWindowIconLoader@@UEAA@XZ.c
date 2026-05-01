/*
 * XREFs of ??1CWindowIconLoader@@UEAA@XZ @ 0x180109C4C
 * Callers:
 *     ??_ECWindowIconLoader@@UEAAPEAXI@Z @ 0x180109C10 (--_ECWindowIconLoader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CWindowIconLoader::~CWindowIconLoader(CWindowIconLoader *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
