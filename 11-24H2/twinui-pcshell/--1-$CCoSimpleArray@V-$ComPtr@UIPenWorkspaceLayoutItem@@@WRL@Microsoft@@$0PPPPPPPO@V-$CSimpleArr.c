/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1802D0E68
 * Callers:
 *     _PWSLayoutPolicyManager::GetPenWorkspaceLayout_::_1_::dtor$0 @ 0x1806E776C (_PWSLayoutPolicyManager--GetPenWorkspaceLayout_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::Populate_::_1_::dtor$1 @ 0x1806E777E (_PWSLayoutPolicyManager--Populate_--_1_--dtor$1.c)
 *     _std::_Default_allocator_traits_std::allocator_ParsedPenWorkspaceLayout___::construct_ParsedPenWorkspaceLayout_ParsedPenWorkspaceLayout__::_1_::dtor$0 @ 0x1806E78AC (_std--_Default_allocator_traits_std--allocator_ParsedPenWorkspaceLayout___--construct_ParsedPenW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>(
        __int64 a1)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(a1);
}
