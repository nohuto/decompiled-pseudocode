/*
 * XREFs of MmGetFileObjectForSection @ 0x14090B870
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140205500 (FsRtlCreateSectionForDataScan.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     PsReferenceProcessFilePointer @ 0x14090B800 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x140A2F378 (PspInitializeFullProcessImageName.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 */

void *__fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFileWithTag(v1, 0x746C6644u, 0);
}
