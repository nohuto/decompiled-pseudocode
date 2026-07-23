/*
 * XREFs of MiUserPdeOrAbove @ 0x1402127C8
 * Callers:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiMakeTransitionPteValid @ 0x140248450 (MiMakeTransitionPteValid.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPteFromCopyList @ 0x140252D60 (MiGetPteFromCopyList.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiMapBackgroundPagesToZero @ 0x140331C80 (MiMapBackgroundPagesToZero.c)
 *     MiAssignNonPagedPoolPte @ 0x14034CC00 (MiAssignNonPagedPoolPte.c)
 *     MiMapFrame @ 0x14034D110 (MiMapFrame.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
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
