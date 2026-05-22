/*
 * XREFs of ??1?$unique_ptr@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E5740
 * Callers:
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800E5ED0 (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 *     ?NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800E6060 (-NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DeviceAttachEventArgs@ConsumerControlNexusDevice@@QEAA@XZ @ 0x1800E58F4 (--1DeviceAttachEventArgs@ConsumerControlNexusDevice@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<ConsumerControlNexusDevice::DeviceAttachEventArgs>::~unique_ptr<ConsumerControlNexusDevice::DeviceAttachEventArgs>(
        ConsumerControlNexusDevice::DeviceAttachEventArgs **a1)
{
  ConsumerControlNexusDevice::DeviceAttachEventArgs *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    ConsumerControlNexusDevice::DeviceAttachEventArgs::~DeviceAttachEventArgs(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
