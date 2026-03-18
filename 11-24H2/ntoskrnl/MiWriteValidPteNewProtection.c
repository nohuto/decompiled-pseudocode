/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140219260
 * Callers:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiUpdateWsleAge @ 0x14022F78C (MiUpdateWsleAge.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiDirtyPte @ 0x140241184 (MiDirtyPte.c)
 *     MiMakeSystemCacheRangeValid @ 0x140243570 (MiMakeSystemCacheRangeValid.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140285DE4 (MiUnlockNestedPageTableWritePte.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiMakeCombineCandidateClean @ 0x1402FA1D0 (MiMakeCombineCandidateClean.c)
 *     MiReplacePageTablePage @ 0x140311CD4 (MiReplacePageTablePage.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiRevokeExecutePte @ 0x140458A10 (MiRevokeExecutePte.c)
 *     MiProcessWsInSwapFault @ 0x14046DEB4 (MiProcessWsInSwapFault.c)
 *     MiWriteEnclavePte @ 0x1404743C4 (MiWriteEnclavePte.c)
 *     MiPerformSafePdeWrite @ 0x140488444 (MiPerformSafePdeWrite.c)
 *     MI_SET_PTE_SHADOW_STACK @ 0x140488B2C (MI_SET_PTE_SHADOW_STACK.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8330 (MiWritePteHighLevelIsr.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiWriteAweClusterPte @ 0x1404D6FE4 (MiWriteAweClusterPte.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiDbgCopyMemoryTarget @ 0x14067E900 (MiDbgCopyMemoryTarget.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 *     MxCreatePfnsForPtes @ 0x140C52830 (MxCreatePfnsForPtes.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewProtection(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // rdi
  __int64 v4; // rax
  int v5; // esi
  ULONG_PTR v6; // rbx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  ULONG_PTR v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)BugCheckParameter2;
  v3 = BugCheckParameter2;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v4 = *(_QWORD *)BugCheckParameter2;
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
              v4 = v2 | 0x20;
            v2 = v4 | 0x42;
            if ( (BugCheckParameter2 & 0x42) == 0 )
              v2 = v4;
          }
        }
      }
    }
  }
  v5 = 0;
  v6 = a2 & 0x80FFFFFFFFFFFFFFuLL | v2 & 0x7F00000000000000LL;
  v10 = v6;
  result = 0xFFFFF6FB7DBED000uLL;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL )
  {
    result = 0xFFFFF6FB7DBED7F8uLL;
    if ( v3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      result = MiSanitizeShadowPxe(BugCheckParameter2, &v10);
      v6 = v10;
      v5 = result;
    }
  }
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (v6 & 0x20) == 0 )
    {
      result = 0x4000000000LL;
      if ( v3 >= 0xFFFFF6C000000000uLL )
        result = MiCheckLinearProtectedPteAccessedBit(v3, v6);
    }
  }
  *(_QWORD *)v3 = v6;
  if ( v5 )
    return MiWritePteShadow(v3, v6);
  return result;
}
