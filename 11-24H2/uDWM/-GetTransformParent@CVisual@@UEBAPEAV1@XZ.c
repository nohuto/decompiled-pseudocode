/*
 * XREFs of ?GetTransformParent@CVisual@@UEBAPEAV1@XZ @ 0x18006C300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CVisual::GetTransformParent(CVisual *this)
{
  return (struct CVisual *)*((_QWORD *)this + 3);
}
