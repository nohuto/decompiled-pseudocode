/*
 * XREFs of ??1CSharedSectionWrapper@@MEAA@XZ @ 0x1802A62EC
 * Callers:
 *     ??_GCSharedSectionWrapper@@MEAAPEAXI@Z @ 0x1802A6320 (--_GCSharedSectionWrapper@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSharedSectionWrapper::~CSharedSectionWrapper(CCachedVisualImage **this, __int64 a2, __int64 a3)
{
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    this + 9,
    a2,
    a3);
  CResource::~CResource((CResource *)this);
}
