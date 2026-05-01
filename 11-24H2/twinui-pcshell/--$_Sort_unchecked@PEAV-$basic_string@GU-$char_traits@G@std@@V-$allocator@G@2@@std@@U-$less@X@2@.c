/*
 * XREFs of ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803443B4
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803443B4 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 *     ?GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@3@@Z @ 0x180350CF8 (-GetSortedUniqueProcessList@GamingOverlayExperienceManager@@AEAAXAEBV-$vector@U-$pair@KV-$basic_.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0U?$less@X@0@@Z @ 0x180343B78 (--$_Insertion_sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 *     ??$_Make_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180343C6C (--$_Make_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180343E40 (--$_Partition_by_median_guess_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ??$_Pop_heap_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803440F8 (--$_Pop_heap_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@.c)
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803443B4 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 */

signed __int64 __fastcall std::_Sort_unchecked<std::wstring *,std::less<void>>(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // r9
  signed __int64 result; // rax
  unsigned __int16 *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int16 *v11; // [rsp+28h] [rbp-10h]

  while ( 1 )
  {
    if ( (__int64)(((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL) <= 1024 )
      return (signed __int64)std::_Insertion_sort_unchecked<std::wstring *,std::less<void>>(a1, a2);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<std::wstring *,std::less<void>>(&v10, (unsigned __int64)a1, a2);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v8) = a4;
    if ( (__int64)(((char *)v10 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL) >= (__int64)(((char *)a2 - (char *)v11) & 0xFFFFFFFFFFFFFFE0uLL) )
    {
      std::_Sort_unchecked<std::wstring *,std::less<void>>(v11, a2, a3, v8);
      a2 = v10;
    }
    else
    {
      std::_Sort_unchecked<std::wstring *,std::less<void>>(a1, v10, a3, v8);
      a1 = v11;
    }
  }
  std::_Make_heap_unchecked<std::wstring *,std::less<void>>((__int64)a1, (__int64)a2);
  do
  {
    std::_Pop_heap_unchecked<std::wstring *,std::less<void>>((__int64)a1, (__int64)a2);
    a2 -= 16;
    result = ((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFE0uLL;
  }
  while ( result >= 64 );
  return result;
}
