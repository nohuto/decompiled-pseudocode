/*
 * XREFs of ??1CVirtualDesktopFactory@@UEAA@XZ @ 0x1802C9E70
 * Callers:
 *     ??_GCGridTelemetryController@@UEAAPEAXI@Z @ 0x180216620 (--_GCGridTelemetryController@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CVirtualDesktopFactory::~CVirtualDesktopFactory(CVirtualDesktopFactory *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
