/*
 * XREFs of MmGetFileObjectForSection @ 0x1409220B0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140443420 (FsRtlCreateSectionForDataScan.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     PsReferenceProcessFilePointer @ 0x140922040 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x140A286FC (PspInitializeFullProcessImageName.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFileWithTag(v1, 0x746C6644u, 0);
}
