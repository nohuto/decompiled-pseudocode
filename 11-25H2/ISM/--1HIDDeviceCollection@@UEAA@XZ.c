/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800DC7AC
 * Callers:
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800D0054 (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800D237C (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D6D48 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800D7F98 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800D8B68 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??1CallControlDeviceCollection@@UEAA@XZ @ 0x1800D8D4C (--1CallControlDeviceCollection@@UEAA@XZ.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x1800D9460 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x1800D9800 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800D9FC0 (--1DockDeviceCollection@@UEAA@XZ.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800DAFD4 (--1DockableDeviceCollection@@UEAA@XZ.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800DC420 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x1800DC800 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 *     _DockableDeviceCollection::Create_::_1_::dtor$2 @ 0x1801CADC0 (_DockableDeviceCollection--Create_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x1801CADD2 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1801CCA21 (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDeviceCollection::~HIDDeviceCollection(HIDDeviceCollection *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  v3 = (void *)*((_QWORD *)this + 343);
  if ( v3 )
  {
    operator delete(v3, a2);
    *((_QWORD *)this + 343) = 0LL;
  }
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
