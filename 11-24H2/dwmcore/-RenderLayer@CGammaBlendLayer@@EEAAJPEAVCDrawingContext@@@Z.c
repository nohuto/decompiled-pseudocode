/*
 * XREFs of ?RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18027C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTANDSIZE_L@@2W4SurfaceShaderType@@@Z @ 0x18027BCE4 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGammaBlendLayer::RenderLayer(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, __int64, __int64 **); // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  int v13[6]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v14; // [rsp+50h] [rbp+8h] BYREF

  v13[0] = 0;
  v13[1] = 0;
  v4 = *((_QWORD *)this + 1);
  v13[2] = *((_DWORD *)this + 6);
  v13[3] = *((_DWORD *)this + 7);
  v5 = *(_QWORD *)(v4 + 8);
  v14 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64 **))(v5 + 104);
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v8 = v6(v4 + 8, v7, &v14);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x61u, 0LL);
  }
  else
  {
    v11 = CGammaBlendLayer::CopyAndTransform(v9, a2, v14, v13, (__int64)this + 16, 3u);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x69u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v10;
}
