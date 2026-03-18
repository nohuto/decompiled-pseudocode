/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x140AB7E50
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpInitializeKeyNodeStack @ 0x140975708 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset_0((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
