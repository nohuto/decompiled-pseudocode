/*
 * XREFs of ??1DockProcessor@@UEAA@XZ @ 0x1801B7B70
 * Callers:
 *     ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801B7BE0 (--_EDockProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800831EC (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall DockProcessor::~DockProcessor(DockProcessor *this)
{
  wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)this + 9);
  NonPointerProcessor::~NonPointerProcessor(this);
}
