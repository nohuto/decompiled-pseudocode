/*
 * XREFs of ??1SystemCursorServiceBase@@UEAA@XZ @ 0x1800F910C
 * Callers:
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$1 @ 0x1801D6900 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall SystemCursorServiceBase::~SystemCursorServiceBase(SystemCursorServiceBase *this)
{
  *(_QWORD *)this = &SystemCursorServiceBase::`vftable';
  std::unique_ptr<SystemCursors::WindowsCompositionGlobals>::~unique_ptr<SystemCursors::WindowsCompositionGlobals>((_QWORD *)this + 2);
}
