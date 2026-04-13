/*
 * XREFs of ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B0570
 * Callers:
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B1C70 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800B1C70.c)
 * Callees:
 *     ??$_Chunked_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@_JUless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B0888 (--$_Chunked_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFrame_ea_1800B0888.c)
 *     ??$_Chunked_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@_JUless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@_J2Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B0A74 (--$_Chunked_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFrame_ea_1800B0A74.c)
 *     ??$_Insertion_sort1@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@V12@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B0DF0 (--$_Insertion_sort1@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFra_ea_1800B0DF0.c)
 */

__int64 __fastcall std::_Buffered_merge_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  int v9; // r15d
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF

  v5 = 32LL;
  v7 = a3;
  v9 = a1;
  if ( a3 >= 32 )
  {
    v10 = (unsigned __int64)a3 >> 5;
    do
    {
      v11 = a1 + 512;
      LOBYTE(a3) = a5;
      std::_Insertion_sort1<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        a1,
        a1 + 512,
        a3);
      a1 = v11;
      --v10;
    }
    while ( v10 );
  }
  LOBYTE(a3) = a5;
  result = std::_Insertion_sort1<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
             a1,
             a2,
             a3);
  while ( v5 < v7 )
  {
    LOBYTE(v13) = a5;
    *(_QWORD *)(*(_QWORD *)(a4 + 32) + 8LL) = **(_QWORD **)(a4 + 32);
    std::_Chunked_merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,__int64,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
      v9,
      a2,
      (unsigned int)&v14,
      v5,
      v7,
      v13,
      0LL,
      0LL,
      0LL,
      0LL,
      *(_QWORD *)(a4 + 32));
    result = std::_Chunked_merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
               **(_QWORD **)(a4 + 32),
               *(_QWORD *)(*(_QWORD *)(a4 + 32) + 8LL),
               v9,
               2 * (int)v5,
               v7,
               a5);
    v5 *= 4LL;
  }
  return result;
}
