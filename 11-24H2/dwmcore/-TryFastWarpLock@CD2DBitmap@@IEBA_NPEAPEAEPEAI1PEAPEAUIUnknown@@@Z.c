/*
 * XREFs of ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180195800
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180022DF0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x18005A390 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180195500 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1801958FC (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CD2DBitmap::TryFastWarpLock(
        CD2DBitmap *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // rbp
  char *v6; // rax
  char *v11; // rdi
  __int64 v12; // rax
  struct IWarpPalLockSubresourceExtension *v13; // rcx
  unsigned int v15; // r8d
  struct ID3D11Texture2D *v16; // rdx
  struct IUnknown **v17; // rdx
  unsigned int v18; // eax
  __int128 v19; // xmm0
  int v20; // eax
  CGlobalDrawingContext *v21; // rcx

  v5 = a5;
  v6 = (char *)this + 238;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  *v5 = 0LL;
  if ( !*((_BYTE *)this + 239) || *v6 )
  {
    v11 = (char *)this + 238;
    *v6 = 0;
    v12 = *(_QWORD *)this;
    *((_BYTE *)this + 239) = 1;
    v13 = *(struct IWarpPalLockSubresourceExtension **)((*(__int64 (**)(void))(v12 + 40))() + 600);
    v6 = v11;
    if ( v13 )
    {
      v15 = *((_DWORD *)this + 58);
      v16 = (struct ID3D11Texture2D *)*((_QWORD *)this + 13);
      a5 = 0LL;
      if ( (int)CWarpLockSubresource::Create(v13, v16, v15, (struct CWarpLockSubresource **)&a5) < 0 )
      {
        v21 = (CGlobalDrawingContext *)a5;
      }
      else
      {
        v17 = a5;
        v18 = *((_DWORD *)a5 + 12);
        v19 = *(_OWORD *)(a5 + 5);
        *a3 = v18;
        v20 = *((_DWORD *)this + 37) * v18;
        *v5 = (struct IUnknown *)v17;
        v21 = 0LL;
        *a2 = (unsigned __int8 *)v19;
        *v11 = 1;
        *a4 = v20;
      }
      v6 = v11;
      if ( v21 )
      {
        CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v21);
        v6 = v11;
      }
    }
  }
  return *v6;
}
