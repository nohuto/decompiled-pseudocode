/*
 * XREFs of ?Invoke@FxPnpDeviceFilterResourceRequirements@@QEAAJPEAUWDFDEVICE__@@PEAUWDFIORESREQLIST__@@@Z @ 0x1400A440C
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400743C8 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int (__fastcall *__fastcall FxPnpDeviceFilterResourceRequirements::Invoke(
        FxPnpDeviceFilterResourceRequirements *this,
        WDFDEVICE__ *Device,
        WDFIORESREQLIST__ *Collection))(WDFDEVICE__ *, WDFIORESREQLIST__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax

  result = this->m_Method;
  if ( this->m_Method )
    return (int (__fastcall *)(WDFDEVICE__ *, WDFIORESREQLIST__ *))((__int64 (__fastcall *)(WDFDEVICE__ *, WDFIORESREQLIST__ *))result)(
                                                                     Device,
                                                                     Collection);
  return result;
}
