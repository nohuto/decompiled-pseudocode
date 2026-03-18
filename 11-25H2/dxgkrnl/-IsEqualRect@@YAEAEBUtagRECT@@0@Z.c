/*
 * XREFs of ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x140064708
 * Callers:
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x14031ABE0 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsEqualRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  return a1->left == a2->left && a1->top == a2->top && a1->right == a2->right && a1->bottom == a2->bottom;
}
