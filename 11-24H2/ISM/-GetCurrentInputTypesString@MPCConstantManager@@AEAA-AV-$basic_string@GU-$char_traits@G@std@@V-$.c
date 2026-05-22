/*
 * XREFs of ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800B4144
 * Callers:
 *     ?GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x1800B3BA0 (-GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoA.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007F9D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A7A60 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B3404 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800B5974 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800B5A60 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCConstantManager::GetCurrentInputTypesString(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int128 *v8; // rcx
  void *v9; // rax
  __int64 v10; // rax
  __int128 *v11; // xmm0_8
  __m128i v12; // xmm1
  __int128 *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-48h] BYREF
  __m128i v20; // [rsp+48h] [rbp-38h]
  _BYTE v21[32]; // [rsp+58h] [rbp-28h] BYREF

  v18[1] = a2;
  std::wstring::wstring(a2, &WindowName);
  v4 = 1;
  v5 = **(_QWORD **)(a1 + 56);
  v18[0] = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = *(unsigned int *)(v5 + 32);
    if ( *(_QWORD *)(a2 + 16) )
    {
      v9 = (void *)std::to_wstring(v21, v6);
      v10 = std::wstring::insert(v9);
      v19 = *(_OWORD *)v10;
      v11 = (__int128 *)v19;
      v20 = *(__m128i *)(v10 + 16);
      v12 = v20;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)(v10 + 24) = 7LL;
      *(_WORD *)v10 = 0;
      v4 |= 2u;
      v13 = &v19;
      if ( _mm_srli_si128(v12, 8).m128i_u64[0] > 7 )
        v13 = v11;
      std::wstring::append((const void **)a2, v13, v12.m128i_u64[0]);
      std::wstring::_Tidy_deallocate((__int64)&v19);
      v8 = (__int128 *)v21;
    }
    else
    {
      v7 = std::to_wstring(&v19, v6);
      std::wstring::operator=((_OWORD *)a2, v7);
      v8 = &v19;
    }
    std::wstring::_Tidy_deallocate((__int64)v8);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      v18,
      v14,
      v15,
      v16);
    v5 = v18[0];
  }
  return a2;
}
