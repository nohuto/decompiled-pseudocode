/*
 * XREFs of sub_18001FBF0 @ 0x18001FBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D614 @ 0x18001D614 (sub_18001D614.c)
 */

__int64 __fastcall sub_18001FBF0(__int64 a1)
{
  unsigned __int8 *v2; // rbx
  unsigned __int8 v3; // cl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = (unsigned __int8 *)std::streambuf::gptr(a1);
  if ( v2 )
  {
    if ( (unsigned __int64)v2 < std::streambuf::egptr(a1) )
    {
      v3 = *v2;
      return sub_18001D614(v3);
    }
    v5 = std::streambuf::pptr(a1);
    if ( v5 && (*(_BYTE *)(a1 + 112) & 4) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 104);
      if ( v6 < v5 )
        v6 = v5;
      if ( v6 > (unsigned __int64)v2 )
      {
        *(_QWORD *)(a1 + 104) = v6;
        v7 = std::streambuf::gptr(a1);
        v8 = std::streambuf::eback(a1);
        std::streambuf::setg(a1, v8, v7, v6);
        v3 = *(_BYTE *)std::streambuf::gptr(a1);
        return sub_18001D614(v3);
      }
    }
  }
  return 0xFFFFFFFFLL;
}
