/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1802C9920
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802C99D8 (--1CLegacySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802C9224 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::~_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>(
        __int64 *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned int const,CFlipAwayFence>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,CFlipAwayFence>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16,0>((_QWORD *)a1[1], 0x30uLL);
}
