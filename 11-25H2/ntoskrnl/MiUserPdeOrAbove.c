/*
 * XREFs of MiUserPdeOrAbove @ 0x14020F170
 * Callers:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiMapFrame @ 0x140223140 (MiMapFrame.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiMakeTransitionPteValid @ 0x140234420 (MiMakeTransitionPteValid.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAssignNonPagedPoolPte @ 0x1402C3250 (MiAssignNonPagedPoolPte.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     MiGetPteFromCopyList @ 0x1402C7490 (MiGetPteFromCopyList.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUserPdeOrAbove(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned int i; // r9d

  v1 = 0xFFFFF6FB40000000uLL;
  v2 = 0xFFFFF6FB5FFFFFF8uLL;
  for ( i = 1; i < 4; ++i )
  {
    if ( a1 <= v2 && a1 >= v1 )
      return 1LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  return 0LL;
}
