/*
 * XREFs of ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1400C3BAC
 * Callers:
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1400C3B7C (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1401FB800 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimary(CPointerInfoNode *this)
{
  int IsValid; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsValid = CPointerInfoNode::IsValid(this);
  v3 = 0;
  if ( IsValid )
    return (*(_DWORD *)(v2 + 180) & 0x2000) != 0;
  return v3;
}
