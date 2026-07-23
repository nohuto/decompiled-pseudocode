/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x140AB6FB0
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpInitializeKeyNodeStack @ 0x14090A470 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset_0((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
