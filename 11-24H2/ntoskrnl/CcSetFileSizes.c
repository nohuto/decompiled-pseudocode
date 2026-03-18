/*
 * XREFs of CcSetFileSizes @ 0x1404A67E0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
