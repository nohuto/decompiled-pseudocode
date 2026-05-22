/*
 * XREFs of ??1HotkeyClientRegistration@@UEAA@XZ @ 0x1801CA440
 * Callers:
 *     ??_EHotkeyClientRegistration@@UEAAPEAXI@Z @ 0x1801CAA10 (--_EHotkeyClientRegistration@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall HotkeyClientRegistration::~HotkeyClientRegistration(HotkeyClientRegistration *this)
{
  *(_QWORD *)this = &HotkeyClientRegistration::`vftable';
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
  *((_DWORD *)this + 3) = -1073741823;
}
