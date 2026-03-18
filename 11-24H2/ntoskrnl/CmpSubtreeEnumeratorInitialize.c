/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x140ABBF90
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpInitializeKeyNodeStack @ 0x140916A00 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset_0((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
