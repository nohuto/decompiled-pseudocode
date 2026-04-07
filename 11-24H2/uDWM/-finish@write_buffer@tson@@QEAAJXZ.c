/*
 * XREFs of ?finish@write_buffer@tson@@QEAAJXZ @ 0x1800E2960
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180097D50 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800A0808 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
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
      wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
    **((_DWORD **)this + 258) = v1 & 0x3F | (16 * v1) & 0x3F0000 | (4 * (_WORD)v1) & 0x3F00 | (v1 << 6) & 0x3F000000 | 0x80408040;
    return 0LL;
  }
}
