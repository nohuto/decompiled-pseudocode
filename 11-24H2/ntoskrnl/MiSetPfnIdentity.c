/*
 * XREFs of MiSetPfnIdentity @ 0x1403A00D0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearFileOnlyPfn @ 0x1402246D8 (MiClearFileOnlyPfn.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140264F54 (MiUpdateSlabPagePlaceholderState.c)
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiSwapHardFaultPage @ 0x140394570 (MiSwapHardFaultPage.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiMarkKernelStack @ 0x1403A0010 (MiMarkKernelStack.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MiFreeSecureKernelPage @ 0x140410B08 (MiFreeSecureKernelPage.c)
 *     MiInitializeMdlPfn @ 0x140413588 (MiInitializeMdlPfn.c)
 *     MiSwapStackPageNoDpc @ 0x1404307F4 (MiSwapStackPageNoDpc.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 *     MiInitializeAwePfn @ 0x1404F5F48 (MiInitializeAwePfn.c)
 *     MiFreeLargeInitializationCodePages @ 0x14066ADD0 (MiFreeLargeInitializationCodePages.c)
 *     MiCreatePfnTemplate @ 0x14066C510 (MiCreatePfnTemplate.c)
 *     MiCopyKstack @ 0x140675158 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140675564 (MiSwitchKstackPages.c)
 *     MiAddExpansionNonPagedPool @ 0x14067C9FC (MiAddExpansionNonPagedPool.c)
 *     MiClearAweLargePageMetadata @ 0x1406818A0 (MiClearAweLargePageMetadata.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140692CE0 (MiPrepareLargePageSubPageForFree.c)
 *     MxInsertEnclaveBootPages @ 0x140C581C4 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnIdentity(__int64 a1, unsigned int a2)
{
  signed __int64 v2; // r9
  unsigned __int64 v3; // rdx
  signed __int64 result; // rax
  signed __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned __int64)a2 << 60;
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             v3 ^ (v2 ^ v3) & 0x8FFFFFFFFFFFFFFFuLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v3 ^ (result ^ v3) & 0x8FFFFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
