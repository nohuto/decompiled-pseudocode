/*
 * XREFs of ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x1801317EC
 * Callers:
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x180131A24 (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 *     ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x18013B3F8 (--0-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@AEBV-$regex_traits@G@1@PEBG1W4syntax_option_.c)
 * Callees:
 *     ?_Xlen@?$vector@_NV?$allocator@_N@std@@@std@@SAXXZ @ 0x180131858 (-_Xlen@-$vector@_NV-$allocator@_N@std@@@std@@SAXXZ.c)
 */

__int64 __fastcall std::vector<bool>::_Trim(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // edx

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<bool>::_Xlen(a1, a2, a1);
  result = *a1;
  v4 = (a2 + 31) >> 5;
  if ( v4 < (a1[1] - *a1) >> 2 )
  {
    v5 = result + 4 * v4;
    if ( v5 != a1[1] )
      a1[1] = v5;
  }
  a1[3] = a2;
  v6 = a2 & 0x1F;
  if ( v6 )
    *(_DWORD *)(result + 4 * v4 - 4) &= (1 << v6) - 1;
  return result;
}
