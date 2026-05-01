/*
 * XREFs of ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x18021DD70
 * Callers:
 *     <none>
 * Callees:
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18021DD9C (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::TileStoreChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Tiles::ITileStore *a2,
        const struct winrt::Windows::Internal::Tiles::ITileStoreChangedEventArgs *a3)
{
  this[56].Ptr = (PVOID)winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(
                          a3,
                          a2);
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(this);
}
