/*
 * XREFs of VfFastIoSnapState @ 0x140BAB7CC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopWriteFile @ 0x1408BEFF0 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     IopGetBasicInformationFile @ 0x1409567DC (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     IopQueryInformation @ 0x1409C4DC0 (IopQueryInformation.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViIoCallbackSnapState @ 0x140BA9EF4 (ViIoCallbackSnapState.c)
 */

_DWORD *__fastcall VfFastIoSnapState(__int64 a1)
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(201, 194LL, 0LL, 0LL, 0LL, 4u, *(_QWORD *)(a1 + 24));
  return ViIoCallbackSnapState();
}
