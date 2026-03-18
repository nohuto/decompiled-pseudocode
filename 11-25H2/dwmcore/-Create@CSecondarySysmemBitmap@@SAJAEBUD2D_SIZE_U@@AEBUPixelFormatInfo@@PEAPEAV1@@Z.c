/*
 * XREFs of ?Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1801D5764
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1801D56A8 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800435E0 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x1801D5828 (--0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x1801D58A4 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Create(
        const struct D2D_SIZE_U *a1,
        const struct PixelFormatInfo *a2,
        struct CSecondarySysmemBitmap **a3)
{
  CSecondarySysmemBitmap *v6; // rax
  CSecondarySysmemBitmap *v7; // rax
  CSecondarySysmemBitmap *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CSecondarySysmemBitmap *)MIDL_user_allocate(0x98uLL);
  if ( v6 && (v7 = CSecondarySysmemBitmap::CSecondarySysmemBitmap(v6, a1, a2), (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CSecondarySysmemBitmap *)((char *)v7 + 8));
    v9 = CSecondarySysmemBitmap::Initialize(v8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v8;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1Au, 0LL);
      CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v8);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x18u, 0LL);
  }
  return v10;
}
