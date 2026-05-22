/*
 * XREFs of ?tson_size_to_marker@tson@@YAI_K@Z @ 0x1800A6404
 * Callers:
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x1800A53F0 (-finish@output_archive@tson@@QEAAJXZ.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800A278C (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall tson::tson_size_to_marker(tson *this)
{
  if ( (unsigned __int64)this > 0xFFFFFF )
    wil::details::in1diag3::FailFastImmediate_Unexpected(this);
  return (unsigned __int8)this & 0x3F | (16 * (_DWORD)this) & 0x3F0000 | (4 * (_WORD)this) & 0x3F00 | ((_DWORD)this << 6) & 0x3F000000 | 0x80408040;
}
