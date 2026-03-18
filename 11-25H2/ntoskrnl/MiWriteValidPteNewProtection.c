/*
 * XREFs of MiWriteValidPteNewProtection @ 0x1402B83C0
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiMakeCombineCandidateClean @ 0x140239E58 (MiMakeCombineCandidateClean.c)
 *     MiUpdateWsleAge @ 0x140248264 (MiUpdateWsleAge.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402FBBD4 (MiUnlockNestedPageTableWritePte.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiRevokeExecutePte @ 0x14037CEC0 (MiRevokeExecutePte.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     MiProcessWsInSwapFault @ 0x140388C2C (MiProcessWsInSwapFault.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1403FD570 (MiWriteEnclavePte.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MiDirtyPte @ 0x1404516E0 (MiDirtyPte.c)
 *     MiPerformSafePdeWrite @ 0x1404885D8 (MiPerformSafePdeWrite.c)
 *     MI_SET_PTE_SHADOW_STACK @ 0x140489418 (MI_SET_PTE_SHADOW_STACK.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8D10 (MiWritePteHighLevelIsr.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x1404D8144 (MiWriteAweClusterPte.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiDbgCopyMemoryTarget @ 0x1406730E0 (MiDbgCopyMemoryTarget.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     MxCreatePfnsForPtes @ 0x140C41600 (MxCreatePfnsForPtes.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewProtection(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // rdi
  int v4; // esi
  ULONG_PTR v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  ULONG_PTR v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)BugCheckParameter2;
  v3 = BugCheckParameter2;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v7 = *(_QWORD *)BugCheckParameter2;
    if ( (v2 & 1) != 0 )
    {
      LOBYTE(BugCheckParameter2) = (v2 & 0x20) != 0;
      if ( (((v2 & 0x42) != 0) & (unsigned __int8)BugCheckParameter2) == 0 && (MiFlags & 0x600000) != 0 )
      {
        BugCheckParameter2 = (ULONG_PTR)KeGetCurrentThread();
        v8 = *(_QWORD *)(BugCheckParameter2 + 184);
        if ( *(_BYTE *)(v8 + 352) != 1 )
        {
          v9 = *(_QWORD *)(v8 + 1288);
          if ( v9 )
          {
            BugCheckParameter2 = *(_QWORD *)(v9 + 8 * ((v3 >> 3) & 0x1FF));
            if ( (BugCheckParameter2 & 0x20) != 0 )
              v7 = v2 | 0x20;
            v2 = v7 | 0x42;
            if ( (BugCheckParameter2 & 0x42) == 0 )
              v2 = v7;
          }
        }
      }
    }
  }
  v4 = 0;
  v5 = a2 & 0x80FFFFFFFFFFFFFFuLL | v2 & 0x7F00000000000000LL;
  v10 = v5;
  result = 0xFFFFF6FB7DBED000uLL;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL )
  {
    result = 0xFFFFF6FB7DBED7F8uLL;
    if ( v3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      result = MiSanitizeShadowPxe(BugCheckParameter2, &v10);
      v5 = v10;
      v4 = result;
    }
  }
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (v5 & 0x20) == 0 )
    {
      result = 0x4000000000LL;
      if ( v3 >= 0xFFFFF6C000000000uLL )
        result = MiCheckLinearProtectedPteAccessedBit(v3, v5);
    }
  }
  *(_QWORD *)v3 = v5;
  if ( v4 )
    return MiWritePteShadow(v3, v5);
  return result;
}
