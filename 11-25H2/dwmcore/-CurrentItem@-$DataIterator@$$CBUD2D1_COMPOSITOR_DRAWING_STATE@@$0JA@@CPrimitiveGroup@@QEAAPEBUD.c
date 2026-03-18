/*
 * XREFs of ?CurrentItem@?$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAAPEBUD2D1_COMPOSITOR_DRAWING_STATE@@XZ @ 0x1802AB6B0
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180079314 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::CurrentItem(
        unsigned int *a1)
{
  return *((_QWORD *)a1 + 1) + *a1;
}
