/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1801958FC
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800238F4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180195800 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVIWarpPalLockSubresourceExtension@@@Z @ 0x1801959D0 (--0CWarpLockSubresource@@IEAA@PEAVIWarpPalLockSubresourceExtension@@@Z.c)
 *     ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x180195A20 (-Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(
        struct IWarpPalLockSubresourceExtension *a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        struct CWarpLockSubresource **a4)
{
  CWarpLockSubresource *v8; // rax
  CWarpLockSubresource *v9; // rax
  CWarpLockSubresource *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  *a4 = 0LL;
  v8 = (CWarpLockSubresource *)MIDL_user_allocate(0x38uLL);
  if ( v8 && (v9 = CWarpLockSubresource::CWarpLockSubresource(v8, a1), (v10 = v9) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CWarpLockSubresource *)((char *)v9 + 8));
    v11 = CWarpLockSubresource::Initialize(v10, a2, a3);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x19u, 0LL);
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v10);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v12;
}
