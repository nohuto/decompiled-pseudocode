/*
 * XREFs of CcCopyWrite @ 0x14049CD90
 * Callers:
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x14049CDC0 (CcCopyWriteEx.c)
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
