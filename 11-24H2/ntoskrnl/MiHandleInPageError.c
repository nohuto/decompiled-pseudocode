/*
 * XREFs of MiHandleInPageError @ 0x14047AF04
 * Callers:
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 */

unsigned __int64 __fastcall MiHandleInPageError(ULONG_PTR a1)
{
  unsigned __int64 result; // rax

  MiRestoreTransitionPte(a1, 1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x400) == 0 )
  {
    *(_QWORD *)(a1 + 16) &= ~4uLL;
    result = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
