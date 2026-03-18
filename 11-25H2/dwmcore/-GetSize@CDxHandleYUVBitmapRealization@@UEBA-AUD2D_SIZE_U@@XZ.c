/*
 * XREFs of ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801FB200
 * Callers:
 *     ?GetSize@CDxHandleYUVBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2500 (-GetSize@CDxHandleYUVBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18002C31C (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 */

struct D2D_SIZE_U __fastcall CDxHandleYUVBitmapRealization::GetSize(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  bool v3; // zf
  __int64 v5; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+28h] [rbp-58h]
  _BYTE v7[64]; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+70h] [rbp-10h]
  __int64 v9; // [rsp+90h] [rbp+10h]

  v3 = (*((_DWORD *)this + 40) & 0x4000) == 0;
  *a2 = 0LL;
  if ( v3 )
  {
    *a2 = *((_QWORD *)this + 17);
  }
  else
  {
    v8 = 0;
    v5 = 0LL;
    v6 = 0LL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CDxHandleYUVBitmapRealization *)((char *)this - 80),
      (struct CMILMatrix *)v7,
      (__int64)&v5,
      0LL);
    LODWORD(v9) = v6 - v5;
    HIDWORD(v9) = HIDWORD(v6) - HIDWORD(v5);
    *a2 = v9;
  }
  return (struct D2D_SIZE_U)a2;
}
