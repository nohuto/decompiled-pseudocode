/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1800EEE64
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1800EF864 (--$_Uninitialized_move@PEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$alloc.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x1800F0FAC (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@_K1@Z @ 0x1800F222C (-_Change_array@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::string>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 >= 0x10 )
        result = std::_Deallocate<16,0>(*(void **)v3, v4 + 1);
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 15LL;
      *(_BYTE *)v3 = 0;
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
