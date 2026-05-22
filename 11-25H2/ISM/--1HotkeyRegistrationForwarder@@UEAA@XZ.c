/*
 * XREFs of ??1HotkeyRegistrationForwarder@@UEAA@XZ @ 0x18010473C
 * Callers:
 *     ??_GHotkeyRegistrationForwarder@@UEAAPEAXI@Z @ 0x1801047B0 (--_GHotkeyRegistrationForwarder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall HotkeyRegistrationForwarder::~HotkeyRegistrationForwarder(HotkeyRegistrationForwarder *this)
{
  char *v2; // rcx

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)(4 * ((__int64)(*((_QWORD *)this + 4) - (_QWORD)v2) >> 2)));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_DWORD *)this + 3) = -1073741823;
}
