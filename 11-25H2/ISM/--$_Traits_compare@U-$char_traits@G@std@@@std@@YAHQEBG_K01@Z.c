/*
 * XREFs of ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180064B70
 * Callers:
 *     ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180064B2C (--$-RAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@AEBV-$basic_string@GU-$char_traits@G@s.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Traits_compare<std::char_traits<unsigned short>>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rbx
  unsigned __int16 v6; // cx
  int v7; // eax

  v4 = a4;
  if ( a4 >= a2 )
    v4 = a2;
  v5 = a1 - (_QWORD)a3;
  while ( v4 )
  {
    v6 = *(unsigned __int16 *)((char *)a3 + v5);
    if ( v6 != *a3 )
      return v6 < *a3 ? -1 : 1;
    --v4;
    ++a3;
  }
  if ( a2 < a4 )
    LOBYTE(v7) = -1;
  else
    LOBYTE(v7) = a2 > a4;
  return v7;
}
