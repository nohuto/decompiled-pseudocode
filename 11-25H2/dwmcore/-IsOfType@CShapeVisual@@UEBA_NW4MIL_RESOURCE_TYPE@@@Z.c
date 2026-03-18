/*
 * XREFs of ?IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E77F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CShapeVisual::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 113);
  result = (unsigned int)v2 <= 0x2A && (v3 = 0x40000000201LL, _bittest64(&v3, v2)) || a2 == 182;
  return result;
}
