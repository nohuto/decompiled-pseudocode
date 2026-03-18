/*
 * XREFs of MmAllocateIsrStack @ 0x1407E6CD8
 * Callers:
 *     KiAllocateProcessorStacks @ 0x1405B1E34 (KiAllocateProcessorStacks.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B26F4 (KiCompleteBootProcessorContextInitialization.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KasanTrackAddress @ 0x140414470 (KasanTrackAddress.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, __int64 a2)
{
  int v2; // esi
  unsigned __int64 v3; // rdi
  int v4; // ebp
  __int64 IndependentPages; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 PteAddress; // rax

  v2 = 0;
  v3 = (unsigned int)(KeIsrStackSize + 4096);
  v4 = a2;
  if ( !*a1 )
  {
    IndependentPages = MmAllocateIndependentPagesEx((unsigned int)v3, a2, 0LL, 0LL);
    v7 = IndependentPages;
    if ( IndependentPages )
    {
      MiSetPageProtection(IndependentPages + 4096, (unsigned int)KeIsrStackSize, 31);
      v2 = 1;
      *a1 = v3 + v7;
      goto LABEL_6;
    }
    return 0;
  }
  v7 = *a1 - v3;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0;
  MiSetPageProtection(v7 + 4096, (unsigned int)KeIsrStackSize, 31);
LABEL_6:
  if ( (int)KasanTrackAddress(v7 + 4096, (unsigned int)KeIsrStackSize, v4 + 1) < 0 )
  {
    if ( v2 )
      MmFreeIndependentPages(v7, v3);
    return 0;
  }
  PteAddress = MiGetPteAddress(v7);
  MiMarkBootGuardPage(PteAddress);
  return 1;
}
