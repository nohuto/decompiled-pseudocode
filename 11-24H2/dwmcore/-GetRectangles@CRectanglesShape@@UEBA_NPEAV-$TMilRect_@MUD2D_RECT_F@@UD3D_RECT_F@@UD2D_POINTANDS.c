/*
 * XREFs of ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BA4A0
 * Callers:
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800BB170 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CRectanglesShape::GetRectangles(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r10
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int128 v9; // xmm0

  if ( !a3 )
    return 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = (*(_QWORD *)(a1 + 24) - v5) >> 4;
  if ( a3 != (_DWORD)v6 )
    return 0;
  v7 = 0LL;
  if ( v6 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(_OWORD *)(v8 + v5);
      ++v7;
      v8 += 16LL;
      *(_OWORD *)(v8 + a2 - 16) = v9;
      v5 = *(_QWORD *)(a1 + 16);
    }
    while ( v7 < (*(_QWORD *)(a1 + 24) - v5) >> 4 );
  }
  return 1;
}
