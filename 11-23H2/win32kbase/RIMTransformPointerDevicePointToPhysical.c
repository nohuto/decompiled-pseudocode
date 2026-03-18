/*
 * XREFs of RIMTransformPointerDevicePointToPhysical @ 0x1C00E1218
 * Callers:
 *     RIMApplyTransforms @ 0x1C018F3F0 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C018FD40 (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0190500 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C01905F0 (RIMTransformDimensionFromDigitizer.c)
 *     rimComputeHimetricGeometry @ 0x1C01A7C74 (rimComputeHimetricGeometry.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C018F598 (RIMConvertPointCoordinates.c)
 */

__int64 __fastcall RIMTransformPointerDevicePointToPhysical(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = RIMConvertPointCoordinates(a2);
  if ( !(_DWORD)result )
  {
    *a3 = 0;
    a3[1] = 0;
  }
  return result;
}
