/*
 * XREFs of ?GetBoundingRect@CRegion@@UEAAXPEAUtagRECT@@@Z @ 0x140135CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRegion::GetBoundingRect(CRegion *this, struct tagRECT *a2)
{
  *a2 = *(struct tagRECT *)(*((_QWORD *)this + 2) + 28LL);
}
