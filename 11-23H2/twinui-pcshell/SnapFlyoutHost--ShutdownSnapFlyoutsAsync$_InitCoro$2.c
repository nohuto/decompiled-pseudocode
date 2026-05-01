/*
 * XREFs of SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2 @ 0x1802286F8
 * Callers:
 *     ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x180228A50 (-ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@V-$list@U-$com_ptr@USnap.c)
 * Callees:
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180228800 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::_parameters_ @ 0x1806794F8 (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync_--_13_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::_parameters_(a2 + 66, a5, a4);
  *(_QWORD *)a2 = SnapFlyoutHost::ShutdownSnapFlyoutsAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 65) = 0;
  return SnapFlyoutHost::ShutdownSnapFlyoutsAsync__ResumeCoro_1(a2);
}
