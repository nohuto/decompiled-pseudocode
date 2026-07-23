/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x140253C90
 * Callers:
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiGetPageChainSmallPageProcess @ 0x140253A70 (MiGetPageChainSmallPageProcess.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
 *     MiPerformFinalZeroing @ 0x1404F5E44 (MiPerformFinalZeroing.c)
 *     MiCreatePfnTemplate @ 0x14066D6E0 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x140674258 (MiUpdateLargePageSectionPfns.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 *     MiAllocateDummyPage @ 0x140C50D68 (MiAllocateDummyPage.c)
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
