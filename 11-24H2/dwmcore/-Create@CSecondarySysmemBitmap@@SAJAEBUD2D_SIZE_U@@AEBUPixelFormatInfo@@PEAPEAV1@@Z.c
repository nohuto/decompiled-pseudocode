/*
 * XREFs of ?Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18018C74C
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18018C690 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18018B8F0 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x18018C810 (--0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18018CAC0 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
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
