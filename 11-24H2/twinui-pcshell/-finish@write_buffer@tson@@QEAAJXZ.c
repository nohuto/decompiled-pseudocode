/*
 * XREFs of ?finish@write_buffer@tson@@QEAAJXZ @ 0x180194394
 * Callers:
 *     ?finish@output_archive@tson@@QEAAJXZ @ 0x180194354 (-finish@output_archive@tson@@QEAAJXZ.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180287FFC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180288404 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall tson::write_buffer::finish(tson::write_buffer *this)
{
  unsigned int v1; // eax

  if ( *((_BYTE *)this + 8) )
  {
    *((_QWORD *)this + 258) = 0LL;
    *((_QWORD *)this + 259) = 0LL;
    *((_QWORD *)this + 260) = 0LL;
    return 2147942414LL;
  }
  else
  {
    v1 = *((_DWORD *)this + 518) - *((_DWORD *)this + 516);
    if ( v1 > 0xFFFFFFuLL )
      wil::details::in1diag3::FailFastImmediate_Unexpected(this);
    **((_DWORD **)this + 258) = v1 & 0x3F | (16 * v1) & 0x3F0000 | (4 * (_WORD)v1) & 0x3F00 | (v1 << 6) & 0x3F000000 | 0x80408040;
    return 0LL;
  }
}
