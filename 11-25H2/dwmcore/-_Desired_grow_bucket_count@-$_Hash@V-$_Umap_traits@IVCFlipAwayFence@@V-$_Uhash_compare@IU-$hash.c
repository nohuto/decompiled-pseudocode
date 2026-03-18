/*
 * XREFs of ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800C152C
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x1800C12F0 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@Z @ 0x1802C74C0 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEAI@2@V-$tuple@$$QEAV-$com_ptr_t@UID3D11Fenc.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@1@@Z @ 0x1802D2504 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEAI@2@V-$tuple@$$QEAV-$com_ptr__ea_1802D2504.c)
 * Callees:
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Desired_grow_bucket_count(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbx
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  if ( a2 < 0 )
    v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v3 = (float)(int)a2;
  v4 = ceilf_0(v3 / *(float *)a1);
  v5 = 0LL;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v5 = 0x8000000000000000uLL;
  }
  v6 = 8LL;
  if ( v5 + (unsigned int)(int)v4 > 8 )
    v6 = v5 + (unsigned int)(int)v4;
  if ( v2 >= v6 )
    return v2;
  if ( v2 < 0x200 && 8 * v2 >= v6 )
    return 8 * v2;
  return v6;
}
