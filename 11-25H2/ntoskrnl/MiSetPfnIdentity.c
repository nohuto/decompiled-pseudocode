/*
 * XREFs of MiSetPfnIdentity @ 0x1402293B0
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiMarkKernelStack @ 0x140228934 (MiMarkKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     MiSwapHardFaultPage @ 0x1402D11D4 (MiSwapHardFaultPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403B79B4 (MiUpdateSlabPagePlaceholderState.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403DBFD8 (MiSwapStackPageNoDpc.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiFreeSecureKernelPage @ 0x140413C84 (MiFreeSecureKernelPage.c)
 *     MiInitializeMdlPfn @ 0x140416AE0 (MiInitializeMdlPfn.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 *     MiDecommitPrivatePageTail @ 0x1404EE270 (MiDecommitPrivatePageTail.c)
 *     MiInitializeAwePfn @ 0x1404F76C0 (MiInitializeAwePfn.c)
 *     MiFreeLargeInitializationCodePages @ 0x14065F290 (MiFreeLargeInitializationCodePages.c)
 *     MiCreatePfnTemplate @ 0x1406609D0 (MiCreatePfnTemplate.c)
 *     MiCopyKstack @ 0x1406696F8 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140669B04 (MiSwitchKstackPages.c)
 *     MiClearFileOnlyPfn @ 0x14066EDA0 (MiClearFileOnlyPfn.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 *     MiClearAweLargePageMetadata @ 0x140676080 (MiClearAweLargePageMetadata.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140687880 (MiPrepareLargePageSubPageForFree.c)
 *     MxInsertEnclaveBootPages @ 0x140C46EE4 (MxInsertEnclaveBootPages.c)
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
