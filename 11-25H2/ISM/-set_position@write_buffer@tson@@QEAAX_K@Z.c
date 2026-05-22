/*
 * XREFs of ?set_position@write_buffer@tson@@QEAAX_K@Z @ 0x1800A74A8
 * Callers:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800A6810 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800A23BC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall tson::write_buffer::set_position(tson::write_buffer *this, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 258);
  if ( a2 >= *((_QWORD *)this + 260) - v2 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(this);
  *((_QWORD *)this + 259) = v2 + a2;
}
