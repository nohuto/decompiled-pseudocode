/*
 * XREFs of ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E25A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CComponentTransform3D::IsOfType(__int64 a1, int a2)
{
  bool result; // al
  unsigned __int64 v3; // rax
  __int64 v4; // rcx

  result = a2 == 30
        || (v3 = (unsigned int)(a2 - 114), (unsigned int)v3 <= 0x3D) && (v4 = 0x2000000000000201LL, _bittest64(&v4, v3))
        || a2 == 56;
  return result;
}
