/*
 * XREFs of ??1last_error_context@wil@@QEAA@XZ @ 0x18009A9A0
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800025C4 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001A058 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800200F0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180024990 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180024B48 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     _wil::details_abi::heap_buffer::reserve_::_1_::dtor$0 @ 0x1800672B4 (_wil--details_abi--heap_buffer--reserve_--_1_--dtor$0.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18009C4A4 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::last_error_context::~last_error_context(wil::last_error_context *this)
{
  if ( !*(_BYTE *)this )
    SetLastError(*((_DWORD *)this + 1));
}
