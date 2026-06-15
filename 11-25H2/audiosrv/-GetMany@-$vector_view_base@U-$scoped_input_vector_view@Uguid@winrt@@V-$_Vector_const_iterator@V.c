/*
 * XREFs of ?GetMany@?$vector_view_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@QEBAIIU?$array_view@Uguid@winrt@@@2@@Z @ 0x1800E11E4
 * Callers:
 *     ?GetMany@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUguid@3@PEAI@Z @ 0x1800E1070 (-GetMany@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector.c)
 * Callees:
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

__int64 __fastcall winrt::vector_view_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v7; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edx

  v3 = a2;
  v4 = a1 + 15;
  if ( !a1 )
    v4 = 48LL;
  v5 = a1 + 7;
  v7 = *(_QWORD *)v4;
  if ( !a1 )
    v5 = 40LL;
  if ( a2 >= (unsigned int)((v7 - *(_QWORD *)v5) >> 4) )
    return 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  v10 = a1 + 7;
  v11 = a1 + 15;
  if ( !a1 )
  {
    v10 = 40LL;
    v11 = 48LL;
  }
  v12 = *(_QWORD *)v11 - *(_QWORD *)v10;
  v13 = a1 + 7;
  v14 = (v12 >> 4) - v3;
  if ( v9 >= v14 )
    v9 = v14;
  if ( !a1 )
    v13 = 40LL;
  if ( v9 )
    memmove_0(*(void **)a3, (const void *)(*(_QWORD *)v13 + 16 * v3), 16LL * v9);
  return v9;
}
