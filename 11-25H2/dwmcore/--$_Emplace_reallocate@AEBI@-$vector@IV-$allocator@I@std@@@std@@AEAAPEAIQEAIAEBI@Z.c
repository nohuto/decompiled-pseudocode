/*
 * XREFs of ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x18026CB3C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x180181020 (std--_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_uns.c)
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x180278E78 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x180288640 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1802136D0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(
        __int64 a1,
        _BYTE *a2,
        _DWORD *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8
  char *result; // rax

  v3 = 0x3FFFFFFFFFFFFFFFLL;
  v5 = (__int64)&a2[-*(_QWORD *)a1] >> 2;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[4 * v5];
  *(_DWORD *)v14 = *a3;
  v15 = v13;
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v15 = v14 + 4;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = v13;
  result = v14;
  *(_QWORD *)(a1 + 8) = &v13[4 * v9];
  *(_QWORD *)(a1 + 16) = &v13[4 * v3];
  return result;
}
