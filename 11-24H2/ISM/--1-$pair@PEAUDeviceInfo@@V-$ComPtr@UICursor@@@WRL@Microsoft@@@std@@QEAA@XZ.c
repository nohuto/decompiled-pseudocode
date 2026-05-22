/*
 * XREFs of ??1?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@QEAA@XZ @ 0x18009C4BC
 * Callers:
 *     _MPCMouseProcessor::AttachMouse_::_1_::dtor$1 @ 0x1801D15A1 (_MPCMouseProcessor--AttachMouse_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>::~pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
