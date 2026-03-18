/*
 * XREFs of ??1CSharedSectionWrapper@@MEAA@XZ @ 0x1802AFE2C
 * Callers:
 *     ??_GCSharedSectionWrapper@@MEAAPEAXI@Z @ 0x1802AFE60 (--_GCSharedSectionWrapper@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8938 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSharedSectionWrapper::~CSharedSectionWrapper(CResource **this)
{
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(this + 9);
  CResource::~CResource((CResource *)this);
}
