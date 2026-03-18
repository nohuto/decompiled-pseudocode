/*
 * XREFs of ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x180025A28
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180022DF0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180024010 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802DAF00 (-CopyPixels@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802DB130 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rect.c)
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180025458 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CBitmap::CopyPixelsHelper(
        __int32 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9)
{
  unsigned __int64 v10; // rbp
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v16; // ecx
  int v17; // r9d
  unsigned __int64 v19; // r12
  size_t v20; // r14
  __int64 v21; // rbp
  unsigned __int8 *v22; // rsi
  unsigned __int8 *v23; // rdi
  unsigned int v24; // [rsp+20h] [rbp-38h]

  v10 = a4;
  v12 = a3;
  v13 = HrCheckBufferSize((enum DXGI_FORMAT)a1, a4, a2, a3, a5);
  v14 = v13;
  if ( v13 < 0 )
  {
    v24 = 62;
    goto LABEL_11;
  }
  v13 = HrCheckBufferSize((enum DXGI_FORMAT)a1, a7, a2, v12, a8);
  v14 = v13;
  if ( v13 < 0 )
  {
    v24 = 69;
LABEL_11:
    v17 = v13;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v24, 0LL);
    return v14;
  }
  PixelFormatSize = GetPixelFormatSize(a1);
  if ( !PixelFormatSize || a2 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x47u, 0LL);
    return v14;
  }
  v14 = 0;
  v16 = (a2 * PixelFormatSize + 7) >> 3;
  if ( v16 > a7 )
  {
    v14 = -2147024809;
    v24 = 76;
LABEL_19:
    v17 = v14;
    goto LABEL_12;
  }
  if ( (_DWORD)v10 == a7 && a7 - v16 < PixelFormatSize >> 3 )
  {
    if ( is_mul_ok(v10, (unsigned int)v12) )
    {
      memcpy_0(a9, Src, v10 * (unsigned int)v12);
      return v14;
    }
    v14 = -2147024362;
    v24 = 89;
    goto LABEL_19;
  }
  if ( (_DWORD)v12 )
  {
    v19 = v10;
    v20 = v16;
    v21 = v12;
    v22 = Src;
    v23 = a9;
    do
    {
      memcpy_0(v23, v22, v20);
      v23 += a7;
      v22 += v19;
      --v21;
    }
    while ( v21 );
  }
  return v14;
}
