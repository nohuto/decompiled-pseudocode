/*
 * XREFs of ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802DB71C
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18006C5CC (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800BA160 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 */

__int64 __fastcall CShadowMaskProducer::CreateDrawListBrush(CShadowMaskProducer *this, struct CDrawListBrush **a2)
{
  unsigned int v3; // xmm0_4
  unsigned int v4; // xmm1_4
  __int128 v5; // xmm0
  CDrawListBitmap *v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  struct CDrawListBrush *v9; // rax
  __int16 v11; // [rsp+20h] [rbp-60h] BYREF
  char v12; // [rsp+22h] [rbp-5Eh]
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int128 *v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  char v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *(float *)&v3 = *((float *)this + 22) + 1.0;
  *(float *)&v4 = *((float *)this + 23) + 1.0;
  v15 = 0LL;
  *(_QWORD *)&v13 = 0x3F8000003F800000LL;
  *((_QWORD *)&v13 + 1) = __PAIR64__(v4, v3);
  v5 = v13;
  *(_QWORD *)&v13 = 0LL;
  v14 = &v13;
  v17 = v5;
  v16 = 1;
  v6 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v18, this);
  v11 = SamplerMode::k_ClampClampLinear;
  v12 = 1;
  v7 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v6, &v11, (float *)&v17, (__int64)&v15);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v18);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v14);
  if ( v7 >= 0 )
  {
    v8 = v13;
    *(_OWORD *)(v13 + 8) = _xmm;
    *(_QWORD *)(v8 + 24) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_N1_0), (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
    v9 = (struct CDrawListBrush *)v13;
    *(_QWORD *)&v13 = 0LL;
    v7 = 0;
    *a2 = v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v7);
  }
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>((CSurfaceDrawListBrush **)&v13);
  return (unsigned int)v7;
}
