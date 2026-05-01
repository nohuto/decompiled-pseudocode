/*
 * XREFs of std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681C14
 * Callers:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681C14 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180684008 (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1806816F4 (std--_Insertion_sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d66.c)
 *     std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681890 (std--_Partition_by_median_guess_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0.c)
 *     std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681A6C (std--_Pop_heap_hole_by_index_winrt--com_ptr_IApplicationView____winrt--com_ptr_IApplicationView_.c)
 *     std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681B58 (std--_Sort_heap_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41.c)
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681C14 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        char a4)
{
  __int64 *v6; // rbp
  __int64 *v7; // rdi
  signed __int64 i; // rax
  __int64 *v9; // r14
  __int64 v10; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2;
  v7 = a1;
  for ( i = (char *)a2 - (char *)a1; ; i = (char *)v6 - (char *)v7 )
  {
    if ( (__int64)(i & 0xFFFFFFFFFFFFFFF8uLL) <= 256 )
      return std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
               v7,
               v6);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
      &v14,
      (unsigned __int64)v7,
      v6);
    a3 = (a3 >> 2) + (a3 >> 1);
    v9 = v15;
    LOBYTE(v10) = a4;
    if ( (__int64)(((char *)v14 - (char *)v7) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)(((char *)v6 - (char *)v15) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        v15,
        v6,
        a3,
        v10);
      v6 = v14;
    }
    else
    {
      std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        v7,
        v14,
        a3,
        v10);
      v7 = v9;
    }
  }
  v12 = ((char *)v6 - (char *)v7) >> 4;
  while ( v12 > 0 )
  {
    v13 = v7[--v12];
    v7[v12] = 0LL;
    v16 = v13;
    std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
      (__int64)v7,
      v12,
      v6 - v7,
      &v16);
    if ( v16 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v16);
  }
  return (__int64 *)std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
                      v7,
                      (__int64)v6);
}
