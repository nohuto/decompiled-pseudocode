/*
 * XREFs of ??A?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@$$QEAK@Z @ 0x180021C88
 * Callers:
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001D424 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 * Callees:
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x180021B78 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x180021E4C (-_Check_max_size@-$_Hash@V-$_Umap_traits@KUPointerState@InputInfoValidator@@V-$_Uhash_compare@KU.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x18009B218 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compa.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::operator[](
        _QWORD *a1,
        _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  _QWORD *v9; // rbp
  _DWORD *v10; // rdi
  _QWORD *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r8
  _QWORD *v19; // [rsp+20h] [rbp-38h]

  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + v4++) ^ (unsigned __int64)v5);
  while ( v4 < 4 );
  v6 = a1[3];
  v7 = *(_QWORD **)(v6 + 16 * (v5 & a1[6]) + 8);
  v8 = (_QWORD *)a1[1];
  if ( v7 == v8 )
  {
    v7 = (_QWORD *)a1[1];
    v9 = v7;
  }
  else
  {
    while ( 1 )
    {
      if ( *a2 == *((_DWORD *)v7 + 4) )
      {
        v8 = (_QWORD *)*v7;
        v9 = (_QWORD *)*v7;
        v10 = v7;
        v7 = (_QWORD *)*v7;
        goto LABEL_6;
      }
      if ( v7 == *(_QWORD **)(v6 + 16 * (v5 & a1[6])) )
        break;
      v7 = (_QWORD *)v7[1];
    }
    v8 = v7;
    v10 = 0LL;
    v9 = v7;
LABEL_6:
    if ( v10 )
      return (char *)(v10 + 6);
  }
  v12 = a1 + 1;
  std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::_Check_max_size(a1);
  v10 = operator new(0x20uLL);
  v10[4] = *a2;
  *((_QWORD *)v10 + 3) = 0LL;
  if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1((__int64)a1) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Rehash_for_1(a1);
    v13 = a1[3];
    v14 = *(_QWORD *)(v13 + 16 * (v5 & a1[6]) + 8);
    v7 = (_QWORD *)*v12;
    if ( v14 == *v12 )
    {
LABEL_15:
      v19 = v7;
    }
    else
    {
      while ( 1 )
      {
        v7 = (_QWORD *)v14;
        if ( v10[4] == *(_DWORD *)(v14 + 16) )
        {
          v7 = *(_QWORD **)v14;
          goto LABEL_15;
        }
        if ( v14 == *(_QWORD *)(v13 + 16 * (v5 & a1[6])) )
          break;
        v14 = *(_QWORD *)(v14 + 8);
      }
      v19 = (_QWORD *)v14;
    }
    v9 = v7;
    v12 = a1 + 1;
    v8 = v19;
  }
  v15 = (_QWORD *)v7[1];
  ++a1[2];
  *(_QWORD *)v10 = v8;
  *((_QWORD *)v10 + 1) = v15;
  *v15 = v10;
  v7[1] = v10;
  v16 = a1[3];
  v17 = 2 * (v5 & a1[6]);
  v18 = *(_QWORD **)(v16 + 16 * (v5 & a1[6]));
  if ( v18 == (_QWORD *)*v12 )
  {
    *(_QWORD *)(v16 + 16 * (v5 & a1[6])) = v10;
  }
  else
  {
    if ( v18 == v9 )
    {
      *(_QWORD *)(v16 + 16 * (v5 & a1[6])) = v10;
      return (char *)(v10 + 6);
    }
    if ( *(_QWORD **)(v16 + 16 * (v5 & a1[6]) + 8) != v15 )
      return (char *)(v10 + 6);
  }
  *(_QWORD *)(v16 + 8 * v17 + 8) = v10;
  return (char *)(v10 + 6);
}
