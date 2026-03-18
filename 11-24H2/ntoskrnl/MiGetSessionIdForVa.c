/*
 * XREFs of MiGetSessionIdForVa @ 0x1402ED220
 * Callers:
 *     MiCompleteRestrictedImageFault @ 0x140238F64 (MiCompleteRestrictedImageFault.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiFaultGetFileExtents @ 0x14036F4C8 (MiFaultGetFileExtents.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
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
