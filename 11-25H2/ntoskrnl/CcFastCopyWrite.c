/*
 * XREFs of CcFastCopyWrite @ 0x140578020
 * Callers:
 *     DifCcFastCopyWriteWrapper @ 0x14060E620 (DifCcFastCopyWriteWrapper.c)
 * Callees:
 *     CcCopyWriteEx @ 0x1404A2430 (CcCopyWriteEx.c)
 */

void __stdcall CcFastCopyWrite(PFILE_OBJECT FileObject, ULONG FileOffset, ULONG Length, PVOID Buffer)
{
  __int64 v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = FileOffset;
  CcCopyWriteEx(FileObject, v4, Length, 1, (int)Buffer, 0LL);
}
