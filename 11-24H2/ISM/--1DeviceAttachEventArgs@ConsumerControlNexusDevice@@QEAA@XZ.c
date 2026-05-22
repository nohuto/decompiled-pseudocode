/*
 * XREFs of ??1DeviceAttachEventArgs@ConsumerControlNexusDevice@@QEAA@XZ @ 0x1800E6D64
 * Callers:
 *     ??1?$unique_ptr@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E6BB0 (--1-$unique_ptr@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@U-$default_delete@UDeviceAtta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall ConsumerControlNexusDevice::DeviceAttachEventArgs::~DeviceAttachEventArgs(
        ConsumerControlNexusDevice::DeviceAttachEventArgs *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
