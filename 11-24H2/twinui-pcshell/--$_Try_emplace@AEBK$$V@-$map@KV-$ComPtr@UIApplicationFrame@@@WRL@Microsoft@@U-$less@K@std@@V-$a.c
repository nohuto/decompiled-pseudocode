/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18006B778
 * Callers:
 *     _lambda_c8a2fb21ce249544899dca467e4f9e40_::operator() @ 0x18006B48C (_lambda_c8a2fb21ce249544899dca467e4f9e40_--operator().c)
 *     _lambda_fa0a17b5823100ead362db86d99d2363_::operator() @ 0x18029E950 (_lambda_fa0a17b5823100ead362db86d99d2363_--operator().c)
 *     _lambda_5053f9d2b5f05b91476ca909f4f2555a_::operator() @ 0x1804EA988 (_lambda_5053f9d2b5f05b91476ca909f4f2555a_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rdx
  _DWORD *v9; // rax
  unsigned int v11; // ecx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v13 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v11 = *a3;
    do
    {
      *(_QWORD *)&v13 = v7;
      if ( *((_DWORD *)v7 + 8) >= v11 )
      {
        DWORD2(v13) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v13) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 8) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v12 = (unsigned __int64)a1;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    v9[8] = *a3;
    *((_QWORD *)v9 + 5) = 0LL;
    *(_QWORD *)v9 = v6;
    *((_QWORD *)v9 + 1) = v6;
    *((_QWORD *)v9 + 2) = v6;
    *((_WORD *)v9 + 12) = 0;
    v12 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      &v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
