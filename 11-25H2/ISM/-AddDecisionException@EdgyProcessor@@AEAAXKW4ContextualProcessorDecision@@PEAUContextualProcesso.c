/*
 * XREFs of ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x1801515F0
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180152A0C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x1801533B4 (-OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProce.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18005CCC8 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compar.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18005FD10 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha.c)
 *     ?GetDecisionPriority@EdgyProcessor@@CAIW4ContextualProcessorDecision@@@Z @ 0x18015222C (-GetDecisionPriority@EdgyProcessor@@CAIW4ContextualProcessorDecision@@@Z.c)
 */

__int64 __fastcall EdgyProcessor::AddDecisionException(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // edx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v6 = (_QWORD *)(a4 + 16);
  v7 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         a1,
         (__int64)&v12);
  v8 = std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Find_last<unsigned long>(
         v6,
         v11,
         &v12,
         v7)[1];
  if ( !v8 )
    v8 = v6[1];
  if ( v8 == *(_QWORD *)(a4 + 24)
    || (EdgyProcessor::GetDecisionPriority(*(unsigned int *)(v8 + 20)),
        result = EdgyProcessor::GetDecisionPriority(a3),
        (unsigned int)result < v10) )
  {
    result = std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Try_emplace<unsigned long const &,>(
               v6,
               (__int64)v11,
               &v12);
    *(_DWORD *)(*(_QWORD *)result + 20LL) = a3;
  }
  return result;
}
