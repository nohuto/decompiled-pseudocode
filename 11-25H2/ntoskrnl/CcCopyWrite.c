/*
 * XREFs of CcCopyWrite @ 0x1404A2400
 * Callers:
 *     FsRtlCopyWrite @ 0x140A34DE0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x1404A2430 (CcCopyWriteEx.c)
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
