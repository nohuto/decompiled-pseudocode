/*
 * XREFs of ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800227B0
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001BC80 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001D9F4 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F920 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x1800215D0 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x1800224D0 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_5ecf3aa9caf045e94cfcbdcfca6eff54__void_IInputTarget___::_Do_call @ 0x1800F2660 (std--_Func_impl_no_alloc__lambda_5ecf3aa9caf045e94cfcbdcfca6eff54__void_IInputTarget___--_Do_cal.c)
 *     std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Do_call @ 0x1800F27A0 (std--_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___--_Do_cal.c)
 *     ??0DragNDropProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@23@@Z @ 0x18014A424 (--0DragNDropProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV-$ComPt.c)
 *     ??0ResizeProcessor@@QEAA@XZ @ 0x18015027C (--0ResizeProcessor@@QEAA@XZ.c)
 *     ??0EdgyProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x1801531DC (--0EdgyProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     ??$_Try_emplace@PEAUIInputTarget@@$$V@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAUIInputTarget@@@Z @ 0x1801A2A1C (--$_Try_emplace@PEAUIInputTarget@@$$V@-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_set<unsigned long>::unordered_set<unsigned long>(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rax
  const struct std::nothrow_t *v7; // rdx
  _QWORD *v8; // rax
  unsigned __int64 v10; // rcx
  char *v11; // r8
  char *v12; // rcx

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = operator new(0x18uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  v3 = v2;
  if ( (unsigned __int64)(*(__int64 *)(a1 + 32) >> 3) >= 0x10 )
  {
    v10 = (unsigned __int64)(*(_QWORD *)(a1 + 32) + 7LL) >> 3;
    if ( v10 )
      memset64(0LL, (unsigned __int64)v2, v10);
  }
  else
  {
    v4 = operator new(0x80uLL);
    v5 = *(char **)(a1 + 24);
    v6 = (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v5) >> 3;
    if ( v6 )
    {
      v7 = (const struct std::nothrow_t *)(8 * v6);
      if ( (unsigned __int64)(8 * v6) >= 0x1000 )
      {
        v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
        v11 = (char *)*((_QWORD *)v5 - 1);
        v12 = (char *)(v5 - v11);
        if ( (unsigned __int64)(v12 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v12, v7);
          __debugbreak();
          JUMPOUT(0x1800228CCLL);
        }
        v5 = v11;
      }
      operator delete(v5, v7);
    }
    *(_QWORD *)(a1 + 24) = v4;
    v8 = v4 + 16;
    *(_QWORD *)(a1 + 32) = v4 + 16;
    *(_QWORD *)(a1 + 40) = v4 + 16;
    while ( v4 != v8 )
      *v4++ = v3;
  }
  return a1;
}
