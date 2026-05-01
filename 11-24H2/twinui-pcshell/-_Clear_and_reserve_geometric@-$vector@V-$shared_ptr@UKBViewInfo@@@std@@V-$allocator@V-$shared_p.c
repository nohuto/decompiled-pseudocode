/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAX_K@Z @ 0x1801A8548
 * Callers:
 *     ??$_Assign_counted_range@PEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@_K@Z @ 0x1801A8444 (--$_Assign_counted_range@PEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180048650 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 */

void *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Clear_and_reserve_geometric(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  size_t size_of; // rax
  void *result; // rax

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (a1[2] - *a1) >> 4;
  v6 = v5 >> 1;
  if ( v5 <= 0xFFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v2 = v6 + v5;
    if ( v6 + v5 < a2 )
      v2 = a2;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  size_of = std::_Get_size_of_n<16>(v2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = (__int64)result;
  a1[1] = (__int64)result;
  a1[2] = (__int64)result + 16 * v2;
  return result;
}
