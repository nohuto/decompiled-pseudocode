/*
 * XREFs of CcSetFileSizes @ 0x1404A10B0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
