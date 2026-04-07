/*
 * XREFs of ?Initialize@CSolidRectangleVisual@@MEAAJXZ @ 0x1800D88F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSolidRectangleVisual::Initialize(CSolidRectangleVisual *this)
{
  *((_OWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  return CVisual::Initialize(this);
}
