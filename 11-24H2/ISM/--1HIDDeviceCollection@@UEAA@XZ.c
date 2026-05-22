/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800DFDF8
 * Callers:
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800D3508 (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800D55B0 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D9F38 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800DB188 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800DBD58 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??1CallControlDeviceCollection@@UEAA@XZ @ 0x1800DBF3C (--1CallControlDeviceCollection@@UEAA@XZ.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x1800DC650 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x1800DC9F0 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800DD1B0 (--1DockDeviceCollection@@UEAA@XZ.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800DE1C4 (--1DockableDeviceCollection@@UEAA@XZ.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800DF580 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GHapticDeviceCollection@@UEAAPEAXI@Z @ 0x1800DF910 (--_GHapticDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x1800DFE50 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 *     _DockableDeviceCollection::Create_::_1_::dtor$2 @ 0x1801D1C70 (_DockableDeviceCollection--Create_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x1801D1C82 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1801D3CD6 (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
