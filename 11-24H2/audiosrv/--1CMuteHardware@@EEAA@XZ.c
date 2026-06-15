/*
 * XREFs of ??1CMuteHardware@@EEAA@XZ @ 0x18010109C
 * Callers:
 *     ??_GCMuteHardware@@EEAAPEAXI@Z @ 0x1801015A0 (--_GCMuteHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CMuteHardware::~CMuteHardware(CMuteHardware *this)
{
  *(_QWORD *)this = &CMuteHardware::`vftable';
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 6);
  CMuteControlBase::~CMuteControlBase((void **)this);
}
