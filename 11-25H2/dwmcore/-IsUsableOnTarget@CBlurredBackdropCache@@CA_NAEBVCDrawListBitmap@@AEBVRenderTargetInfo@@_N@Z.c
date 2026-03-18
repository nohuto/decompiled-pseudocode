/*
 * XREFs of ?IsUsableOnTarget@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1802358EC
 * Callers:
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x18003FB58 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 * Callees:
 *     ?IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x180040058 (-IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBlurredBackdropCache::IsUsableOnTarget(
        const struct CDrawListBitmap *a1,
        const struct RenderTargetInfo *a2,
        char a3)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IRenderTargetBitmap **); // rdi
  __int64 (__fastcall *v6)(_QWORD, GUID *, struct IRenderTargetBitmap **); // rbx
  int v7; // eax
  char IsUsableOnTargetWorker; // bl
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct IRenderTargetBitmap *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IRenderTargetBitmap **))*((_QWORD *)a1 + 1);
  v11 = 0LL;
  v6 = **v3;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v11);
  v7 = v6(v3, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v11);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT(v7, retaddr);
  IsUsableOnTargetWorker = CBlurredBackdropCache::IsUsableOnTargetWorker(v11, a2, a3);
  if ( v11 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
  return IsUsableOnTargetWorker;
}
