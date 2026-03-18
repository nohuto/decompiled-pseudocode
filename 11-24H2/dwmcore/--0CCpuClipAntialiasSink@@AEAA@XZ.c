/*
 * XREFs of ??0CCpuClipAntialiasSink@@AEAA@XZ @ 0x180205004
 * Callers:
 *     ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180204F00 (-Create@CCpuClipAntialiasSink@@SAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialia.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

CCpuClipAntialiasSink *__fastcall CCpuClipAntialiasSink::CCpuClipAntialiasSink(CCpuClipAntialiasSink *this)
{
  _QWORD *v2; // rax
  CDirtyRegionAnnotation *v3; // rdi
  __int64 v4; // rsi

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CCpuClipAntialiasSink::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = operator new(0x30uLL);
  v3 = (CCpuClipAntialiasSink *)((char *)this + 40);
  v4 = 2LL;
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 2) = v2;
  *((_QWORD *)this + 4) = 0LL;
  do
  {
    --v4;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v3);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v3);
    v3 = (CDirtyRegionAnnotation *)((char *)v3 + 8);
  }
  while ( v4 );
  *((_BYTE *)this + 56) = 0;
  return this;
}
