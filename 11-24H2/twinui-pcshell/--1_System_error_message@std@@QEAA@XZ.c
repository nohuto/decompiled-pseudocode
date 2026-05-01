/*
 * XREFs of ??1_System_error_message@std@@QEAA@XZ @ 0x180315440
 * Callers:
 *     _std::_System_error_category::message_::_1_::dtor$0 @ 0x1806DF963 (_std--_System_error_category--message_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_System_error_message::~_System_error_message(HLOCAL *this)
{
  _std_system_error_deallocate_message(*this);
}
