/*
 * XREFs of ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1801F8848
 * Callers:
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1801F87B0 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CanRenderFromSourceToTarget@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x1801BC850 (-CanRenderFromSourceToTarget@@YA_NAEBVRenderTargetInfo@@0@Z.c)
 *     ?IsScreenReadBackCompatible@@YA_N_NPEAVIDeviceTextureTarget@@@Z @ 0x1801C8700 (-IsScreenReadBackCompatible@@YA_N_NPEAVIDeviceTextureTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CBlurredBackdropCache::IsUsableOnTargetWithHDRBoost(
        const struct CDrawListBitmap *a1,
        const struct RenderTargetInfo *a2,
        __int64 a3)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, CGlobalDrawingContext **); // rdi
  bool v4; // si
  char v5; // r14
  __int64 (__fastcall *v7)(_QWORD, GUID *, CGlobalDrawingContext **); // rbx
  int v8; // eax
  struct IDeviceTextureTarget *v9; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  float v12; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  CGlobalDrawingContext *v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, CGlobalDrawingContext **))*((_QWORD *)a1 + 1);
  v4 = 0;
  v14 = 0LL;
  v5 = a3;
  v7 = **v3;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v14, (__int64)a2, a3);
  v8 = v7(v3, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v14);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(v8, retaddr);
  (*(void (__fastcall **)(CGlobalDrawingContext *, _BYTE *))(*(_QWORD *)v14 + 88LL))(v14, v11);
  if ( CanRenderFromSourceToTarget((const struct RenderTargetInfo *)v11, a2) )
  {
    v9 = (struct IDeviceTextureTarget *)(*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v14 + 144LL))(v14);
    if ( IsScreenReadBackCompatible(v5, v9) )
      v4 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 4) - v12) & _xmm) <= 0.0000011920929;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v4;
}
