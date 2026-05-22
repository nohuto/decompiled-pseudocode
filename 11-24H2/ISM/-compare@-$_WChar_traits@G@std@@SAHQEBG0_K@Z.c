/*
 * XREFs of ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180065058
 * Callers:
 *     ??$?RAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x180064FF4 (--$-RAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV-$basic_string_view@GU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<unsigned short>::compare(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  unsigned __int16 v5; // cx

  result = 0LL;
  v4 = a1 - (_QWORD)a2;
  while ( a3 )
  {
    v5 = *(unsigned __int16 *)((char *)a2 + v4);
    if ( v5 != *a2 )
      return v5 < *a2 ? -1 : 1;
    --a3;
    ++a2;
  }
  return result;
}
