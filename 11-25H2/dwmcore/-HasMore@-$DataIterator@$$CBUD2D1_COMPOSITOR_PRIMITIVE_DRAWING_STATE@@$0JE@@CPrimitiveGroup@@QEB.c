/*
 * XREFs of ?HasMore@?$DataIterator@$$CBUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@$0JE@@CPrimitiveGroup@@QEBA_NXZ @ 0x1802AB8A8
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180079314 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE const,148>::HasMore(_DWORD *a1)
{
  return (unsigned int)(*a1 + 148) <= a1[4];
}
