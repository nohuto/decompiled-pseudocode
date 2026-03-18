/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802D24D8
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802D24A4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@std@.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1802D32B0 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash.c)
 * Callees:
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x1802C13CC (--1CFlipAwayFence@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,CFlipAwayFence>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,CFlipAwayFence>,void *>>>(
        __int64 a1,
        _QWORD *a2)
{
  CFlipAwayFence::~CFlipAwayFence((CFlipAwayFence *)(a2 + 3));
  std::_Deallocate<16,0>(a2, 0x30uLL);
}
