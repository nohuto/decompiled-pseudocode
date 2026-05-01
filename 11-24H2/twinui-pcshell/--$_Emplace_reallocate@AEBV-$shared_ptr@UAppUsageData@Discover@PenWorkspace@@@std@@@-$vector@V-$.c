/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@QEAV21@AEBV21@@Z @ 0x1801B9894
 * Callers:
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18004BB84 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180048650 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x180072660 (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::_Emplace_reallocate<std::shared_ptr<PenWorkspace::Discover::AppUsageData> const &>(
        __int64 a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // r15
  __int64 v16; // rax
  char *v17; // rdx
  char *v18; // r9
  _QWORD *v19; // rcx
  _QWORD *result; // rax
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  v15 = (_QWORD *)((char *)v13 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v16 = a3[1];
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    *v15 = *a3;
    v15[1] = a3[1];
    v22 = (__int64)v15;
    v17 = *(char **)(a1 + 8);
    v18 = *(char **)a1;
    if ( a2 == v17 )
    {
      v19 = v14;
      while ( v18 != v17 )
      {
        *v19 = 0LL;
        v19[1] = 0LL;
        *v19 = *(_QWORD *)v18;
        v19[1] = *((_QWORD *)v18 + 1);
        *(_QWORD *)v18 = 0LL;
        *((_QWORD *)v18 + 1) = 0LL;
        v19 += 2;
        v18 += 16;
      }
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v19, (__int64)v19);
    }
    else
    {
      std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        *(char **)a1,
        a2,
        v14);
      v22 = (__int64)v14;
      std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        a2,
        *(char **)(a1 + 8),
        v15 + 2);
    }
    if ( *(_QWORD *)a1 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = &v14[2 * v9];
    *(_QWORD *)(a1 + 16) = &v14[2 * v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v22, (__int64)(v15 + 2));
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(16 * v8));
    throw;
  }
  return result;
}
