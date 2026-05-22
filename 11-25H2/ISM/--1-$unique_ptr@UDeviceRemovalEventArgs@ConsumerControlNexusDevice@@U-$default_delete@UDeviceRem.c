/*
 * XREFs of ??1?$unique_ptr@UDeviceRemovalEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UDeviceRemovalEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E5770
 * Callers:
 *     ?NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E6114 (-NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ.c)
 *     ?NotifyDeviceRemovalCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800E61F0 (-NotifyDeviceRemovalCallback@ConsumerControlNexusDevice@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<ConsumerControlNexusDevice::DeviceRemovalEventArgs>::~unique_ptr<ConsumerControlNexusDevice::DeviceRemovalEventArgs>(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
