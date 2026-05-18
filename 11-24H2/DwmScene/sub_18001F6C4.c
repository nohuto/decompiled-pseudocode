/*
 * XREFs of sub_18001F6C4 @ 0x18001F6C4
 * Callers:
 *     sub_18001F424 @ 0x18001F424 (sub_18001F424.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18001F6C4(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  void *v4; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::streambuf::pptr(a1) )
      v2 = std::streambuf::epptr(a1);
    else
      v2 = std::streambuf::egptr(a1);
    v3 = v2 - std::streambuf::eback(a1);
    v4 = (void *)std::streambuf::eback(a1);
    sub_180010234(v4, v3);
  }
  std::streambuf::setg(a1, 0LL, 0LL, 0LL);
  result = std::streambuf::setp(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return result;
}
