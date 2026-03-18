/*
 * XREFs of ??0?$DataIterator@$$CBUD2D1_COMPOSITOR_DRAWING_STATE@@$0JA@@CPrimitiveGroup@@QEAA@PEBX_K@Z @ 0x1802AB2CC
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180079314 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1802AB3CC (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>::DataIterator<D2D1_COMPOSITOR_DRAWING_STATE const,144>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  result = a1;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  return result;
}
