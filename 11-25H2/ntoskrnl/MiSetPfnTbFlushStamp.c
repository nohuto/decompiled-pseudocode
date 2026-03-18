/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1402C7C70
 * Callers:
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402C7A50 (MiGetPageChainSmallPageProcess.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CAC68 (MiDeleteSubsectionLargePages.c)
 *     MiPerformFinalZeroing @ 0x1404F5DB0 (MiPerformFinalZeroing.c)
 *     MiCreatePfnTemplate @ 0x1406609D0 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406675D8 (MiUpdateLargePageSectionPfns.c)
 *     MiPurgeBadFileOnlyPages @ 0x1406701CC (MiPurgeBadFileOnlyPages.c)
 *     MiAllocateDummyPage @ 0x140C3D9A8 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnTbFlushStamp(__int64 a1, __int64 a2, int a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r11
  signed __int64 v6; // r10
  signed __int64 v7; // rcx
  signed __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2 << 59;
  v6 = v3 ^ (a2 << 59);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 24) = v4 ^ v6 & 0xC7FFFFFFFFFFFFFFuLL;
  }
  else
  {
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 ^ v6 & 0xC7FFFFFFFFFFFFFFuLL, v3);
    if ( v3 != v8 )
    {
      do
      {
        v7 = v8;
        v8 = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               v4 ^ (v8 ^ v4) & 0xC7FFFFFFFFFFFFFFuLL,
               v8);
      }
      while ( v7 != v8 );
    }
  }
}
