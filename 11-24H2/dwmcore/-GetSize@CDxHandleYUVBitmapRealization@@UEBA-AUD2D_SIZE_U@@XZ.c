/*
 * XREFs of ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18005DAB0
 * Callers:
 *     ?GetSize@CDxHandleYUVBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D9260 (-GetSize@CDxHandleYUVBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005E5AC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 */

struct D2D_SIZE_U __fastcall CDxHandleYUVBitmapRealization::GetSize(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  bool v3; // zf
  _BYTE v5[64]; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+70h] [rbp-10h]

  v3 = (*((_DWORD *)this + 40) & 0x4000) == 0;
  *a2 = 0LL;
  if ( v3 )
  {
    *a2 = *((_QWORD *)this + 17);
  }
  else
  {
    v6 = 0;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CDxHandleYUVBitmapRealization *)((char *)this - 80),
      (struct CMILMatrix *)v5);
    *a2 = 0LL;
  }
  return (struct D2D_SIZE_U)a2;
}
