/*
 * XREFs of ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDevice@@PEAVCCompositingShaderCache@@@Z @ 0x18018DFF0
 * Callers:
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18018E178 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::CSurfaceShaderComposer(
        CSurfaceShaderComposer *this,
        struct ID3D11VertexShader *a2,
        struct ID3D11InputLayout *a3,
        struct ID3D11Buffer *a4,
        struct ID3DDeviceContextState *a5,
        struct CD3DDevice *a6,
        struct CCompositingShaderCache *a7)
{
  CDirtyRegionAnnotation *v11; // rdi
  __int64 v12; // rbp

  v11 = this;
  v12 = 6LL;
  do
  {
    --v12;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v11);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v11);
    v11 = (CDirtyRegionAnnotation *)((char *)v11 + 8);
  }
  while ( v12 );
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct ID3D11VertexShader *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D11InputLayout *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 8) = a4;
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 8);
  *((_QWORD *)this + 9) = a5;
  if ( a5 )
    ((void (__fastcall *)(struct ID3DDeviceContextState *))a5->lpVtbl->AddRef)(a5);
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = a6;
  *((_QWORD *)this + 13) = a7;
  return this;
}
