/*
 * XREFs of MiGetSessionIdForVa @ 0x14034E860
 * Callers:
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  _KPROCESS *Process; // rcx
  unsigned __int64 CycleTime; // rax

  if ( a1 >= 0xFFFF800000000000uLL )
    return 0xFFFFFFFFLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(CycleTime + 8);
}
