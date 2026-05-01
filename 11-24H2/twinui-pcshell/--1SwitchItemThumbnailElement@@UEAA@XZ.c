/*
 * XREFs of ??1SwitchItemThumbnailElement@@UEAA@XZ @ 0x1804C1690
 * Callers:
 *     ??_ESwitchItemThumbnailElement@@UEAAPEAXI@Z @ 0x1804C18E0 (--_ESwitchItemThumbnailElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall SwitchItemThumbnailElement::~SwitchItemThumbnailElement(SwitchItemThumbnailElement *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 600);
  if ( *v2 )
    *(_QWORD *)(*v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 74);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 73);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 72);
  *((_DWORD *)this + 73) = -1073741823;
  CShrinkButtonElement::~CShrinkButtonElement(this);
}
