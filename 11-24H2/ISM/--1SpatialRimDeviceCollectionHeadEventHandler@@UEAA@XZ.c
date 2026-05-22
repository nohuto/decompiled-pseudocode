/*
 * XREFs of ??1SpatialRimDeviceCollectionHeadEventHandler@@UEAA@XZ @ 0x1800D5644
 * Callers:
 *     ??_GSpatialRimDeviceCollectionHeadEventHandler@@UEAAPEAXI@Z @ 0x1800D5850 (--_GSpatialRimDeviceCollectionHeadEventHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall SpatialRimDeviceCollectionHeadEventHandler::~SpatialRimDeviceCollectionHeadEventHandler(
        SpatialRimDeviceCollectionHeadEventHandler *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_DWORD *)this + 3) = -1073741823;
}
