/*
 * XREFs of PsReferenceProcessFilePointer @ 0x1408FF760
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140356A00 (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x1404EF064 (SepMandatorySubProcessToken.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407761B0 (PsCheckProcessFileSigningLevel.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     PspCallProcessNotifyRoutines @ 0x140938898 (PspCallProcessNotifyRoutines.c)
 *     CmpCheckExeOwnerForPca @ 0x1409A1D9C (CmpCheckExeOwnerForPca.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     MmGetFileObjectForSection @ 0x1408FF7D0 (MmGetFileObjectForSection.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, __int64 *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 Count; // rcx
  __int64 FileObjectForSection; // rbx
  __int64 result; // rax

  v2 = a1 + 61;
  if ( ExAcquireRundownProtection(a1 + 61) )
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
