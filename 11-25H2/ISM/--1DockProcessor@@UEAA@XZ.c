/*
 * XREFs of ??1DockProcessor@@UEAA@XZ @ 0x1801B05E0
 * Callers:
 *     ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801B0650 (--_EDockProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18008322C (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall DockProcessor::~DockProcessor(DockProcessor *this)
{
  wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)this + 9);
  NonPointerProcessor::~NonPointerProcessor(this);
}
