/*
 * XREFs of ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x18005B8E8
 * Callers:
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004CE20 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005D464 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 * Callees:
 *     ?sgetc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x18005E798 (-sgetc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 */

__int64 __fastcall std::istreambuf_iterator<wchar_t>::_Peek(__int64 *a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 || (v3 = std::wstreambuf::sgetc(v2), v3 == -1) )
    *a1 = 0LL;
  else
    *((_WORD *)a1 + 5) = v3;
  result = *((unsigned __int16 *)a1 + 5);
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
