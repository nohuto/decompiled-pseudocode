/*
 * XREFs of ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180056918
 * Callers:
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001D424 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x180021000 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148950 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x18014E4CC (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180151684 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x18006A788 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
        float *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v6; // rbx
  unsigned __int64 i; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // r14
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rdx
  __int64 v21; // rax
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  v8 = *((_QWORD *)a1 + 3);
  v9 = *(__int64 **)(v8 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8);
  v10 = (__int64 *)*((_QWORD *)a1 + 1);
  if ( v9 == v10 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *a3 == *((_DWORD *)v9 + 4) )
    {
      v10 = (__int64 *)*v9;
      goto LABEL_8;
    }
    if ( v9 == *(__int64 **)(v8 + 16 * (v6 & *((_QWORD *)a1 + 6))) )
      break;
    v9 = (__int64 *)v9[1];
  }
  v10 = v9;
  v9 = 0LL;
LABEL_8:
  if ( !v9 )
  {
LABEL_10:
    if ( *((_QWORD *)a1 + 2) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v22[0] = a1 + 2;
    v11 = operator new(0x18uLL);
    v22[1] = v11;
    v11[4] = *a3;
    v12 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v12 < 0 )
      v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
          + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = *((_QWORD *)a1 + 7);
    if ( v14 < 0 )
    {
      v21 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v14 >> 1);
      v15 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(v13 / v15) > *a1 )
    {
      std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Rehash_for_1(a1);
      v10 = (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                          a1,
                          v22,
                          v11 + 4,
                          v6);
    }
    v16 = (_QWORD *)v10[1];
    ++*((_QWORD *)a1 + 2);
    *(_QWORD *)v11 = v10;
    *((_QWORD *)v11 + 1) = v16;
    *v16 = v11;
    v10[1] = (__int64)v11;
    v17 = *((_QWORD *)a1 + 3);
    v18 = 2 * (*((_QWORD *)a1 + 6) & v6);
    v19 = *(__int64 **)(v17 + 8 * v18);
    if ( v19 == *((__int64 **)a1 + 1) )
    {
      *(_QWORD *)(v17 + 8 * v18) = v11;
    }
    else
    {
      if ( v19 == v10 )
      {
        *(_QWORD *)(v17 + 8 * v18) = v11;
        goto LABEL_21;
      }
      if ( *(_QWORD **)(v17 + 8 * v18 + 8) != v16 )
        goto LABEL_21;
    }
    *(_QWORD *)(v17 + 8 * v18 + 8) = v11;
LABEL_21:
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
