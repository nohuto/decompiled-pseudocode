/*
 * XREFs of ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z @ 0x1802130F0
 * Callers:
 *     CreateCompressedSourceBitmap @ 0x18022F200 (CreateCompressedSourceBitmap.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?Release@CBitmapLock@@UEAAKXZ @ 0x18004AF70 (-Release@CBitmapLock@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXI@Z @ 0x1802131D4 (-HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXI@Z.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@@Z @ 0x180213254 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180219F80 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Create(
        struct IWICImagingFactory *a1,
        const void *a2,
        unsigned int a3,
        double a4,
        double a5,
        struct IWICBitmap **a6)
{
  CCompressedSourceBitmap *v9; // rax
  CCompressedSourceBitmap *v10; // rax
  CCompressedSourceBitmap *v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a6 = 0LL;
  v9 = (CCompressedSourceBitmap *)operator new(0xA8uLL);
  if ( v9 )
  {
    v10 = CCompressedSourceBitmap::CCompressedSourceBitmap(v9, a1);
    v11 = v10;
    if ( v10 )
      CMILRefCountImpl::AddReference((CCompressedSourceBitmap *)((char *)v10 + 8));
  }
  else
  {
    v11 = 0LL;
  }
  v12 = CCompressedSourceBitmap::HrInitFromCompressedBytes(v11, a2, a3);
  if ( v12 >= 0 )
  {
    v12 = CBitmap::SetResolution((CCompressedSourceBitmap *)((char *)v11 + 32), a4, a5);
    if ( v12 >= 0 )
    {
      *a6 = (struct IWICBitmap *)(((unsigned __int64)v11 + 32) & -(__int64)(v11 != 0LL));
      return 0LL;
    }
    v13 = 26LL;
  }
  else
  {
    v13 = 25LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
    (const char *)(unsigned int)v12);
  if ( v11 )
    CBitmapLock::Release(v11);
  return (unsigned int)v12;
}
