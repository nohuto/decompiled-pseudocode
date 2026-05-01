/*
 * XREFs of ??1CScrollViewerHost@@UEAA@XZ @ 0x1804CA254
 * Callers:
 *     ??_ECScrollViewerHost@@UEAAPEAXI@Z @ 0x1804CA2F0 (--_ECScrollViewerHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CScrollViewerHost::~CScrollViewerHost(CScrollViewerHost *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 472);
  if ( *v2 )
    *(_QWORD *)(*v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 57);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 56);
  *((_DWORD *)this + 55) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
