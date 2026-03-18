/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x1801D58A4
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1801D5764 (-Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180042640 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1801D5AA4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ??$reset@PEAE$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z @ 0x1801D5AF8 (--$reset@PEAE$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(CSecondarySysmemBitmap *this)
{
  int v2; // eax
  unsigned int *v3; // r8
  unsigned int v4; // edi
  unsigned __int64 v6; // rdx
  size_t v7; // rcx
  void *v8; // rax

  v2 = HrCalcDWordAlignedScanlineStride(
         *((_DWORD *)this + 28),
         *((enum DXGI_FORMAT *)this + 31),
         (unsigned int *)this + 30);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v6 = *v3 * (unsigned __int64)*((unsigned int *)this + 29);
    v7 = 0xFFFFFFFFLL;
    if ( v6 <= 0xFFFFFFFF )
      v7 = (unsigned int)v6;
    *((_DWORD *)this + 36) = v7;
    v8 = MIDL_user_allocate(v7);
    std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>((char *)this + 136, v8);
    if ( *((_QWORD *)this + 17) )
    {
      CRegion::SetRectangle(
        (CSecondarySysmemBitmap *)((char *)this + 40),
        (CSecondarySysmemBitmap *)((char *)this + 24));
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Fu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x29u, 0LL);
  }
  return v4;
}
