/*
 * XREFs of ?RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z @ 0x18019BE40
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003DF60 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@2@_K@Z @ 0x18005BF40 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18005CEDC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x180099F4C (-_Unchecked_erase@-$list@U-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$allocat.c)
 */

void __fastcall ContextualProcessorBuffer::RemoveContactFromBuffer(ContextualProcessorBuffer *this, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  __int64 *v6; // rdx
  char *v7; // rdx
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *((_QWORD *)this + 4);
  v3 = *((_QWORD *)this + 3);
  if ( v3 != v2 )
  {
    v4 = (_QWORD *)(v3 + 8);
    do
    {
      v5 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
             (__int64)this,
             (__int64)&v9);
      v6 = std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
             v4,
             &v8,
             &v9,
             v5)[1];
      if ( v6 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Erase_bucket(
          (__int64)v4,
          v6,
          v5 & v4[6]);
        std::list<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Unchecked_erase(
          (__int64)(v4 + 1),
          v7);
      }
      std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Erase<unsigned long>(
        v4 + 17,
        &v9);
      v3 += 224LL;
      v4 += 28;
    }
    while ( v3 != v2 );
  }
}
