/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140245FB0
 * Callers:
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiDirtyPte @ 0x1402092D4 (MiDirtyPte.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiProcessWsInSwapFault @ 0x140215CA4 (MiProcessWsInSwapFault.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiUpdateWsleAge @ 0x140303924 (MiUpdateWsleAge.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiMakeCombineCandidateClean @ 0x140346988 (MiMakeCombineCandidateClean.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiRevokeExecutePte @ 0x14044DEC0 (MiRevokeExecutePte.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14046E030 (MiWriteEnclavePte.c)
 *     MiPerformSafePdeWrite @ 0x140483594 (MiPerformSafePdeWrite.c)
 *     MI_SET_PTE_SHADOW_STACK @ 0x140483C1C (MI_SET_PTE_SHADOW_STACK.c)
 *     MiWritePteHighLevelIsr @ 0x1404B2C80 (MiWritePteHighLevelIsr.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     MiWriteAweClusterPte @ 0x1404D0434 (MiWriteAweClusterPte.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 *     MxCreatePfnsForPtes @ 0x140C549C0 (MxCreatePfnsForPtes.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 */

char __fastcall MiWriteValidPteNewProtection(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  ULONG_PTR v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // esi
  unsigned __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // r10
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)BugCheckParameter2;
  v4 = BugCheckParameter2;
  v5 = 0xFFFFF6FB7DBED7F8uLL;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v6 = *(_QWORD *)BugCheckParameter2;
    if ( (v3 & 1) != 0 )
    {
      LOBYTE(a3) = (v3 & 0x42) != 0;
      LOBYTE(BugCheckParameter2) = (v3 & 0x20) != 0;
      if ( ((unsigned __int8)a3 & (unsigned __int8)BugCheckParameter2) == 0 && (MiFlags & 0x600000) != 0 )
      {
        BugCheckParameter2 = (ULONG_PTR)KeGetCurrentThread();
        a3 = *(_QWORD *)(BugCheckParameter2 + 184);
        if ( *(_BYTE *)(a3 + 352) != 1 )
        {
          v10 = *(_QWORD *)(a3 + 1288);
          if ( v10 )
          {
            BugCheckParameter2 = *(_QWORD *)(v10 + 8 * ((v4 >> 3) & 0x1FF));
            if ( (BugCheckParameter2 & 0x20) != 0 )
              v6 = v3 | 0x20;
            v3 = v6 | 0x42;
            if ( (BugCheckParameter2 & 0x42) == 0 )
              v3 = v6;
          }
        }
      }
    }
  }
  v7 = 0;
  v8 = a2 & 0x80FFFFFFFFFFFFFFuLL | v3 & 0x7F00000000000000LL;
  v12 = v8;
  LOBYTE(v9) = 0;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(v9) = -8;
    if ( v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v9 = MiSanitizeShadowPxe(BugCheckParameter2, (__int64)&v12, a3);
      v8 = v12;
      v7 = v9;
    }
  }
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (v8 & 0x20) == 0 )
    {
      LOBYTE(v9) = 0;
      if ( v4 >= 0xFFFFF6C000000000uLL )
        LOBYTE(v9) = MiCheckLinearProtectedPteAccessedBit(v4, v8, 128LL);
    }
  }
  *(_QWORD *)v4 = v8;
  if ( v7 )
    LOBYTE(v9) = MiWritePteShadow(v4, v8, a3, v5);
  return v9;
}
