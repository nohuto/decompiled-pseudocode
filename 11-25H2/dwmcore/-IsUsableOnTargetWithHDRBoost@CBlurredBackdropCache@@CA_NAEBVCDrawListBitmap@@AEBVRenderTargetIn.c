/*
 * XREFs of ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1802032F8
 * Callers:
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x180203260 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 * Callees:
 *     ?IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x180040058 (-IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CBlurredBackdropCache::IsUsableOnTargetWithHDRBoost(
        const struct CDrawListBitmap *a1,
        const struct RenderTargetInfo *a2,
        char a3)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IRenderTargetBitmap **); // rdi
  __int64 (__fastcall *v6)(_QWORD, GUID *, struct IRenderTargetBitmap **); // rbx
  int v7; // eax
  bool v8; // bl
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct IRenderTargetBitmap *v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IRenderTargetBitmap **))*((_QWORD *)a1 + 1);
  v12 = 0LL;
  v6 = **v3;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v12);
  v7 = v6(v3, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v12);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT(v7, retaddr);
  v8 = CBlurredBackdropCache::IsUsableOnTargetWorker(v12, a2, a3)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      *((float *)a2 + 4)
                    - *(float *)((*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, _BYTE *))(*(_QWORD *)v12 + 88LL))(
                                   v12,
                                   v10)
                               + 16)) & _xmm) <= 0.0000011920929;
  if ( v12 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v12 + 16LL))(v12);
  return v8;
}
