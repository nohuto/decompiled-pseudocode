/*
 * XREFs of ?GetPosition@CMultitaskingViewElementBase@@UEAA?AUCRect@Geometry@@XZ @ 0x1804C40F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CMultitaskingViewElementBase::GetPosition(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 56);
  return result;
}
