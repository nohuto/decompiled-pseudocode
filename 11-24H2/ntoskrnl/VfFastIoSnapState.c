/*
 * XREFs of VfFastIoSnapState @ 0x140BA97CC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopWriteFile @ 0x1408C1630 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     IopGetBasicInformationFile @ 0x14096DFD0 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140972480 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 *     IopQueryInformation @ 0x1409D4F90 (IopQueryInformation.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 *     ViIoCallbackSnapState @ 0x140BA7EF4 (ViIoCallbackSnapState.c)
 */

_DWORD *__fastcall VfFastIoSnapState(__int64 a1)
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(201, 194LL, 0LL, 0LL, 0LL, 4u, *(_QWORD *)(a1 + 24));
  return ViIoCallbackSnapState();
}
