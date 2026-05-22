/*
 * XREFs of ??$_Try_emplace@W4TestCommandMessageType@@$$V@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@std@@_N@1@$$QEAW4TestCommandMessageType@@@Z @ 0x18003A86C
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x18003A76C (--0TestCommandHost@@AEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x180022148 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800279C0 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_compare@W4Inp.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003A9F0 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEBAXXZ @ 0x18009B2A0 (-_Check_max_size@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18009B364 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Try_emplace<enum TestCommandMessageType,>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 *v8; // r15
  _DWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  _QWORD *v15; // [rsp+30h] [rbp-28h]
  _DWORD *v16; // [rsp+38h] [rbp-20h]

  v6 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         (__int64)a1,
         (__int64)a3);
  ((void (__fastcall *)(_QWORD *, __int64 *, __int64, __int64))std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>)(
    a1,
    &v13,
    v7,
    v6);
  if ( v14 )
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::_Check_max_size(a1);
    v8 = a1 + 1;
    v15 = a1 + 1;
    v16 = 0LL;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    v16 = v9;
    v9[4] = *a3;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(a1);
      v10 = a1[3];
      v11 = *(_QWORD *)(v10 + 16 * (v6 & a1[6]) + 8);
      if ( v11 == *v8 )
      {
        v13 = *v8;
LABEL_6:
        v14 = 0LL;
      }
      else
      {
        while ( v9[4] != *(_DWORD *)(v11 + 16) )
        {
          if ( v11 == *(_QWORD *)(v10 + 16 * (v6 & a1[6])) )
          {
            v13 = v11;
            goto LABEL_6;
          }
          v11 = *(_QWORD *)(v11 + 8);
        }
        v13 = *(_QWORD *)v11;
        v14 = v11;
      }
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      v13,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
