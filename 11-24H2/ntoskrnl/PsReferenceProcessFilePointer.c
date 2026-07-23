/*
 * XREFs of PsReferenceProcessFilePointer @ 0x140922040
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1404EC31C (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1404EC6F0 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407763D0 (PsCheckProcessFileSigningLevel.c)
 *     CmpCheckExeOwnerForPca @ 0x1408AE8F4 (CmpCheckExeOwnerForPca.c)
 *     PspCallProcessNotifyRoutines @ 0x1408F2F68 (PspCallProcessNotifyRoutines.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MmGetFileObjectForSection @ 0x1409220B0 (MmGetFileObjectForSection.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, __int64 *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 Count; // rcx
  __int64 FileObjectForSection; // rbx
  __int64 result; // rax

  v2 = a1 + 61;
  if ( ExAcquireRundownProtection_0(a1 + 61) )
  {
    Count = a1[85].Count;
    if ( Count )
    {
      FileObjectForSection = MmGetFileObjectForSection(Count);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = FileObjectForSection;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
