/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1402FBDB0
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402FBB90 (MiGetPageChainSmallPageProcess.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiGetPageTablePages @ 0x14039E9BC (MiGetPageTablePages.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CA9A4 (MiDeleteSubsectionLargePages.c)
 *     MiPerformFinalZeroing @ 0x1404F8564 (MiPerformFinalZeroing.c)
 *     MiCreatePfnTemplate @ 0x14066C510 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x140673088 (MiUpdateLargePageSectionPfns.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnTbFlushStamp(__int64 a1, __int64 a2, int a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r11
  signed __int64 v6; // r10
  signed __int64 v7; // rax
  signed __int64 v8; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2 << 59;
  v6 = v3 ^ (a2 << 59);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 24) = v4 ^ v6 & 0xC7FFFFFFFFFFFFFFuLL;
  }
  else
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 ^ v6 & 0xC7FFFFFFFFFFFFFFuLL, v3);
    if ( v3 != v7 )
    {
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               v4 ^ (v7 ^ v4) & 0xC7FFFFFFFFFFFFFFuLL,
               v7);
      }
      while ( v8 != v7 );
    }
  }
}
