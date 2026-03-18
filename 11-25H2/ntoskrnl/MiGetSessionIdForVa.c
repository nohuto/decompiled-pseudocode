/*
 * XREFs of MiGetSessionIdForVa @ 0x140208E10
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     MiFaultGetFileExtents @ 0x14046FAA0 (MiFaultGetFileExtents.c)
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
