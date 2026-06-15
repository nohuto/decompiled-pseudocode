/*
 * XREFs of ??1CVolumeHardware@@EEAA@XZ @ 0x1800A6140
 * Callers:
 *     ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x180087850 (--_ECVolumeHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CVolumeHardware::~CVolumeHardware(CVolumeHardware *this)
{
  *(_QWORD *)this = &CVolumeHardware::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 32);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 31);
  CVolumeControlBase::~CVolumeControlBase(this);
}
