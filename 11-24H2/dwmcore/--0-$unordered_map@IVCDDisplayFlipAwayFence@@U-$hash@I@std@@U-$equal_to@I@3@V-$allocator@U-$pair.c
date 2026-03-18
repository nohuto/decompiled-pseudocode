/*
 * XREFs of ??0?$unordered_map@IVCDDisplayFlipAwayFence@@U?$hash@I@std@@U?$equal_to@I@3@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@@std@@QEAA@XZ @ 0x1802C1108
 * Callers:
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IUD2D_SIZE_U@@@Z @ 0x1802C117C (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUD.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@2@@Z @ 0x1802BFA94 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1802BFA94.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,CDDisplayFlipAwayFence>::unordered_map<unsigned int,CDDisplayFlipAwayFence>(
        __int64 a1)
{
  _QWORD *v2; // rax

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,CDDisplayFlipAwayFence>>>>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    0x10uLL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
