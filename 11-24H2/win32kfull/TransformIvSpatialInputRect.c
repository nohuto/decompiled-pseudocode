/*
 * XREFs of TransformIvSpatialInputRect @ 0x140290608
 * Callers:
 *     EditionTransformIvTouchInput @ 0x140290660 (EditionTransformIvTouchInput.c)
 * Callees:
 *     TransformIvSpatialInputPoint @ 0x1402905B0 (TransformIvSpatialInputPoint.c)
 */

__int64 __fastcall TransformIvSpatialInputRect(__int64 a1, __int128 *a2, _OWORD *a3, __int64 *a4)
{
  __int64 *v4; // rbx

  v4 = a4 + 1;
  *(_OWORD *)a4 = *a3;
  TransformIvSpatialInputPoint(a1, a2, *a4, (__int64)a4);
  return TransformIvSpatialInputPoint(a1, a2, *v4, (__int64)v4);
}
