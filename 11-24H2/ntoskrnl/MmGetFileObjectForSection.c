/*
 * XREFs of MmGetFileObjectForSection @ 0x1408FF7D0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14044C520 (FsRtlCreateSectionForDataScan.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     PsReferenceProcessFilePointer @ 0x1408FF760 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x140A346EC (PspInitializeFullProcessImageName.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFileWithTag(v1, 0x746C6644u, 0);
}
