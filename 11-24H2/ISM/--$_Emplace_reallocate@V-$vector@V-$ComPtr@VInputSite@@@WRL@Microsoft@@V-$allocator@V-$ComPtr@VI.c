/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18001B550
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019E50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18002F8B4 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1800493B0 (--$_Destroy_range@V-$allocator@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     ??$_Uninitialized_move@PEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@YAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x18005A188 (--$_Uninitialized_move@PEAV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  __int64 v13; // r13
  char *v14; // rdi
  char *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // r11
  __int64 *v20; // rcx
  _QWORD *v21; // r9
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  char *v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+70h] [rbp+8h]
  char *v29; // [rsp+88h] [rbp+20h]

  v5 = (unsigned __int128)(((char *)a2 - (char *)*a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 2);
  v7 = 0xAAAAAAAAAAAAAAABuLL * (a1[1] - *a1);
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (a1[2] - *a1);
  v10 = v9 >> 1;
  if ( v9 > 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v27 = 0xAAAAAAAAAAAAAAALL;
    v12 = -16LL;
    v13 = -16LL;
LABEL_17:
    v14 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v12);
    v29 = v14;
    goto LABEL_10;
  }
  v11 = v10 + v9;
  if ( v10 + v9 < v8 )
    v11 = v8;
  if ( v11 > 0xAAAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  v12 = 24 * v11;
  v13 = 24 * v11;
  v27 = v11;
  if ( 24 * v11 >= 0x1000 )
    goto LABEL_17;
  if ( v12 )
  {
    v14 = (char *)operator new(v12);
    v29 = v14;
  }
  else
  {
    v14 = 0LL;
    v29 = 0LL;
  }
  v27 = v11;
LABEL_10:
  v15 = &v14[24 * v6];
  v16 = a3[2];
  a3[2] = 0LL;
  v17 = a3[1];
  a3[1] = 0LL;
  v18 = *a3;
  *a3 = 0LL;
  *(_QWORD *)v15 = v18;
  *((_QWORD *)v15 + 1) = v17;
  *((_QWORD *)v15 + 2) = v16;
  v19 = a1[1];
  v20 = *a1;
  if ( a2 == v19 )
  {
    if ( v20 != v19 )
    {
      v21 = v14 + 16;
      do
      {
        v22 = v20[2];
        v20[2] = 0LL;
        v23 = v20[1];
        v20[1] = 0LL;
        v24 = *v20;
        *v20 = 0LL;
        *(v21 - 2) = v24;
        *(v21 - 1) = v23;
        *v21 = v22;
        v21 += 3;
        v20 += 3;
      }
      while ( v20 != v19 );
    }
  }
  else
  {
    try
    {
      std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
        v20,
        a2,
        v14);
      v26 = v14;
      std::_Uninitialized_move<std::vector<Microsoft::WRL::ComPtr<InputSite>> *,std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
        a2,
        a1[1],
        v15 + 24);
    }
    catch ( ... )
    {
      std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(v26, v15 + 24);
      std::_Deallocate<16,0>(v29, (const struct std::nothrow_t *)(24 * v27));
      throw;
    }
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)(8 * (a1[2] - *a1)));
  }
  *a1 = (__int64 *)v14;
  a1[1] = (__int64 *)&v14[24 * v8];
  a1[2] = (__int64 *)&v14[v13];
  return &v14[24 * v6];
}
