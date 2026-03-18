/*
 * XREFs of TransformIvSpatialInputPoint @ 0x1402905B0
 * Callers:
 *     TransformIvSpatialInputRect @ 0x140290608 (TransformIvSpatialInputRect.c)
 *     EditionTransformIvTouchInput @ 0x140290660 (EditionTransformIvTouchInput.c)
 *     EditionTransformPointForIvSpatialInput @ 0x140290740 (EditionTransformPointForIvSpatialInput.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRect @ 0x1401CE7C8 (LogicalToPhysicalInPlaceRect.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall TransformIvSpatialInputPoint(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a2;
  *(_QWORD *)a4 = a3;
  v7 = v4;
  LogicalToPhysicalInPlaceRect(a1, (__int64)&v7);
  *(_DWORD *)a4 += v7;
  result = DWORD1(v7);
  *(_DWORD *)(a4 + 4) += DWORD1(v7);
  return result;
}
