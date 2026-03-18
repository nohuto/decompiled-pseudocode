/*
 * XREFs of CcCopyWrite @ 0x1404A1E00
 * Callers:
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x1404A1E30 (CcCopyWriteEx.c)
 */

BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx(FileObject, (_DWORD)Buffer, 0LL);
}
