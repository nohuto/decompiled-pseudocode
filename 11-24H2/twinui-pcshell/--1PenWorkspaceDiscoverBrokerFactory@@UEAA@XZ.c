/*
 * XREFs of ??1PenWorkspaceDiscoverBrokerFactory@@UEAA@XZ @ 0x1803EEB40
 * Callers:
 *     ??_EPenWorkspaceDiscoverBrokerFactory@@UEAAPEAXI@Z @ 0x1803EED50 (--_EPenWorkspaceDiscoverBrokerFactory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PenWorkspaceDiscoverBrokerFactory::~PenWorkspaceDiscoverBrokerFactory(
        PenWorkspaceDiscoverBrokerFactory *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
