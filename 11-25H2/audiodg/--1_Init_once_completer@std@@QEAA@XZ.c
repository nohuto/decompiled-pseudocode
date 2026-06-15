/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x140061E58
 * Callers:
 *     std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___ @ 0x140056E28 (std--call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___.c)
 * Callees:
 *     __std_init_once_link_alternate_names_and_abort @ 0x140058A98 (__std_init_once_link_alternate_names_and_abort.c)
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    _std_init_once_link_alternate_names_and_abort();
}
