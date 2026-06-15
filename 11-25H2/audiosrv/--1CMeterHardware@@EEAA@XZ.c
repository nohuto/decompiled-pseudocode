/*
 * XREFs of ??1CMeterHardware@@EEAA@XZ @ 0x1800FA8B4
 * Callers:
 *     ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x1800FA930 (--_GCMeterHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CMeterHardware::~CMeterHardware(CMeterHardware *this)
{
  *(_QWORD *)this = &CMeterHardware::`vftable';
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 4);
  CMeterControlBase::~CMeterControlBase(this);
}
