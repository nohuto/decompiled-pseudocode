/*
 * XREFs of ??1UTMRecentItem@Discover@PenWorkspace@@UEAA@XZ @ 0x1803F25C0
 * Callers:
 *     ??_GUTMRecentItem@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803F2670 (--_GUTMRecentItem@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PenWorkspace::Discover::UTMRecentItem::~UTMRecentItem(PenWorkspace::Discover::UTMRecentItem *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 7);
  PenWorkspace::Discover::RecentItem::~RecentItem(this);
}
