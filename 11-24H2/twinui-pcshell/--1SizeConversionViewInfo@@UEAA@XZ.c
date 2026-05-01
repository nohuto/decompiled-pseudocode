/*
 * XREFs of ??1SizeConversionViewInfo@@UEAA@XZ @ 0x18006C8A8
 * Callers:
 *     ??_GSizeConversionViewInfo@@UEAAPEAXI@Z @ 0x18006B450 (--_GSizeConversionViewInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall SizeConversionViewInfo::~SizeConversionViewInfo(SizeConversionViewInfo *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
