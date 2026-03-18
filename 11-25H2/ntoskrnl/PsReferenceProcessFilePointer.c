/*
 * XREFs of PsReferenceProcessFilePointer @ 0x14090B800
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140291D1C (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x14047E350 (SepMandatorySubProcessToken.c)
 *     PsCheckProcessFileSigningLevel @ 0x1407667E0 (PsCheckProcessFileSigningLevel.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     PspCallProcessNotifyRoutines @ 0x14091F098 (PspCallProcessNotifyRoutines.c)
 *     CmpCheckExeOwnerForPca @ 0x14099CEAC (CmpCheckExeOwnerForPca.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MmGetFileObjectForSection @ 0x14090B870 (MmGetFileObjectForSection.c)
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
