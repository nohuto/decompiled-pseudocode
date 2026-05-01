/*
 * XREFs of ??1PenWorkspaceDiscoverBroker@@UEAA@XZ @ 0x1803EEB08
 * Callers:
 *     ??_GPenWorkspaceDiscoverBroker@@UEAAPEAXI@Z @ 0x1803EED10 (--_GPenWorkspaceDiscoverBroker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PenWorkspaceDiscoverBroker::~PenWorkspaceDiscoverBroker(PenWorkspaceDiscoverBroker *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
