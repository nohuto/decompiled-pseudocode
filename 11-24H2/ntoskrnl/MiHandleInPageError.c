/*
 * XREFs of MiHandleInPageError @ 0x1404802C4
 * Callers:
 *     MiHardFaultPageRelease @ 0x1402F303C (MiHardFaultPageRelease.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
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
