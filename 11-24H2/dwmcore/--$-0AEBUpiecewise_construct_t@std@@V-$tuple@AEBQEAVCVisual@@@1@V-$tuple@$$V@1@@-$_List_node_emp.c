/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCVisual@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCVisual@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180227F4C
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x18014EC30 (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  char *v8; // rbx
  _QWORD *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v6 = operator new(0x60uLL);
  a1[1] = v6;
  v7 = *a4;
  v8 = (char *)(v6 + 3);
  v6[2] = *v7;
  memset_0(v6 + 3, 0, 0x48uLL);
  *((_QWORD *)v8 + 1) = 0LL;
  result = a1;
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  *((_DWORD *)v8 + 16) = 1065353216;
  return result;
}
