/*
 * XREFs of CcFastCopyWrite @ 0x1405787C0
 * Callers:
 *     DifCcFastCopyWriteWrapper @ 0x140618BA0 (DifCcFastCopyWriteWrapper.c)
 * Callees:
 *     CcCopyWriteEx @ 0x14049CDC0 (CcCopyWriteEx.c)
 */

void __stdcall CcFastCopyWrite(PFILE_OBJECT FileObject, ULONG FileOffset, ULONG Length, PVOID Buffer)
{
  __int64 v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = FileOffset;
  CcCopyWriteEx(FileObject, v4, Length, 1, (int)Buffer, 0LL);
}
