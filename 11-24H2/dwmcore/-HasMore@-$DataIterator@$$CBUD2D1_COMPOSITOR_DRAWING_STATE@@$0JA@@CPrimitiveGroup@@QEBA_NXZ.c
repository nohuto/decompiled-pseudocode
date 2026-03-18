/*
 * XREFs of ?HasMore@?$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEBA_NXZ @ 0x1802A1D70
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014E034 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::HasMore(_DWORD *a1)
{
  return (unsigned int)(*a1 + 144) <= a1[4];
}
