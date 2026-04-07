/*
 * XREFs of ??1?$vector_range_nothrow@U?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA@XZ @ 0x1800A2DF8
 * Callers:
 *     _CAnalogCompositorManager::OnMonitorChangedNotification_::_1_::dtor$2 @ 0x1800F8261 (_CAnalogCompositorManager--OnMonitorChangedNotification_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::~vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 32));
}
