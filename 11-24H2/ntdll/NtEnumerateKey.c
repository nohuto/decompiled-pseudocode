/*
 * XREFs of NtEnumerateKey @ 0x1801622D0
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C00 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18008A254 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x1800F5610 (RtlpNtEnumerateSubKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180138078 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x18014A4F4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014B394 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
