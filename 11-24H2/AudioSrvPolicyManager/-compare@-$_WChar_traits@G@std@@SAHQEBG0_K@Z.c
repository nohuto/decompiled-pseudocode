/*
 * XREFs of ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18000E930
 * Callers:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180046684 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<unsigned short>::compare(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int16 v4; // r9
  __int64 result; // rax

  v3 = a1 - (_QWORD)a2;
  while ( 1 )
  {
    if ( !a3 )
      return 0LL;
    v4 = *(unsigned __int16 *)((char *)a2 + v3);
    if ( v4 != *a2 )
      break;
    --a3;
    ++a2;
  }
  result = 1LL;
  if ( v4 < *a2 )
    return 0xFFFFFFFFLL;
  return result;
}
