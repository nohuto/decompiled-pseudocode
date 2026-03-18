/*
 * XREFs of MiHandleInPageError @ 0x1404541D4
 * Callers:
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
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
