/*
 * XREFs of VfFastIoCheckState @ 0x140BA9450
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
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfFastIoCheckState(unsigned int *Entry, ULONG_PTR BugCheckParameter2)
{
  __int64 v4; // rdx

  if ( (MmVerifierData & 0x10) != 0 && !KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(196, 195LL, BugCheckParameter2, 0LL, 0LL, 4u, BugCheckParameter2);
  if ( (MmVerifierData & 0x10) != 0 && *(_BYTE *)Entry != KeGetCurrentIrql() )
    CarReportRuleViolationFromNt(
      201,
      17LL,
      BugCheckParameter2,
      *(unsigned __int8 *)Entry,
      KeGetCurrentIrql(),
      4u,
      BugCheckParameter2);
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4 = Entry[1];
    if ( (_DWORD)v4 != KeGetCurrentThread()->WaitBlock[3].SpareLong )
      CarReportRuleViolationFromNt(
        196,
        198LL,
        BugCheckParameter2,
        KeGetCurrentThread()->CombinedApcDisable,
        v4,
        4u,
        BugCheckParameter2);
  }
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
