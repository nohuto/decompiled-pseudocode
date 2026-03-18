/*
 * XREFs of ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@_N@Z @ 0x18003FC5C
 * Callers:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x18003F7FC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18003FF40 (-clear_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlu.c)
 *     ?IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x180040058 (-IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1900 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPE.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x1800B2630 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBlurredBackdropCache::InvalidateCachedBlur(
        const struct CBackdropVisualImage ***this,
        const struct CBackdropVisualImage *a2,
        const struct RenderTargetInfo *a3,
        bool a4)
{
  const struct CBackdropVisualImage **v4; // rbx
  char v8; // r14
  char v10; // r15
  CGDISectionBitmapRealization *v11; // rdi
  __int64 (__fastcall *v12)(CGDISectionBitmapRealization *); // rbp
  int Interface; // eax
  __int64 (*v14)(void); // rax
  int IsValid; // eax
  __int64 v16; // rbx
  const struct CBackdropVisualImage **v17; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  CRenderTargetBitmap *v19; // [rsp+60h] [rbp+8h] BYREF
  struct RenderTargetInfo *v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v4 = *this;
  v8 = 1;
  while ( v4 != this[1] )
  {
    v10 = 0;
    if ( *v4 == a2 )
    {
      v19 = 0LL;
      v11 = v4[3];
      v12 = **(__int64 (__fastcall ***)(CGDISectionBitmapRealization *))v11;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v19);
      if ( v12 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface )
        Interface = CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(v11);
      else
        Interface = ((__int64 (__fastcall *)(CGDISectionBitmapRealization *, GUID *, CRenderTargetBitmap **))v12)(
                      v11,
                      &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                      &v19);
      if ( Interface < 0 )
        ModuleFailFastForHRESULT(Interface, retaddr);
      v14 = *(__int64 (**)(void))(*(_QWORD *)v19 + 24LL);
      if ( (char *)v14 == (char *)CRenderTargetBitmap::IsValid )
        IsValid = CRenderTargetBitmap::IsValid(v19);
      else
        IsValid = v14();
      if ( IsValid < 0 || CBlurredBackdropCache::IsUsableOnTargetWorker(v19, v20, a4) )
      {
        v16 = ((char *)v4 - (char *)*this) >> 7;
        v10 = 1;
        detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
          this,
          v16,
          1LL);
        v4 = &(*this)[16 * v16];
      }
      else
      {
        v8 = 0;
      }
      if ( v19 )
        (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v17 = v4 + 16;
    if ( v10 )
      v17 = v4;
    v4 = v17;
  }
  return v8;
}
