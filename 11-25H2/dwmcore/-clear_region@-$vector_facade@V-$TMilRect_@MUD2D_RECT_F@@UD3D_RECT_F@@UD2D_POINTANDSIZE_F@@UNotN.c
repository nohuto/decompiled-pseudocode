/*
 * XREFs of ?clear_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180075020
 * Callers:
 *     ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180074CD4 (-resize@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r9
  __int64 *v9; // rcx
  const void *v10; // rdx
  signed __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 result; // rax

  v3 = *a1;
  v4 = a2;
  v5 = a3 + a2;
  v7 = (a1[1] - *a1) >> 4;
  if ( v5 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v9 = a1 + 1;
  if ( v5 != v7 )
  {
    if ( !v4 || v3 && v4 >= 0 && v7 >= v4 )
    {
      v10 = (const void *)(v3 + 16 * v5);
      v11 = v3 + 16 * v7 - (_QWORD)v10;
      v12 = v11 >> 4;
      if ( v11 >> 4 < 0 )
      {
        if ( v4 >= (unsigned __int64)-(__int64)v12 )
        {
LABEL_11:
          memmove_0((void *)(v3 + 16 * v4), v10, v11);
          v9 = a1 + 1;
          goto LABEL_12;
        }
      }
      else if ( v11 >> 4 <= 0 || v7 - v4 >= v12 )
      {
        goto LABEL_11;
      }
    }
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_12:
  result = a1[1] - 16 * a3;
  *v9 = result;
  return result;
}
