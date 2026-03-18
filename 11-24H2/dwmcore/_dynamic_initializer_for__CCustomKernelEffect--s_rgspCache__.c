/*
 * XREFs of _dynamic_initializer_for__CCustomKernelEffect::s_rgspCache__ @ 0x1800067A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

int dynamic_initializer_for__CCustomKernelEffect::s_rgspCache__()
{
  CDirtyRegionAnnotation *v0; // rbx
  __int64 v1; // rdi

  v0 = (CDirtyRegionAnnotation *)&CCustomKernelEffect::s_rgspCache;
  v1 = 9LL;
  do
  {
    --v1;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v0);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v0);
    v0 = (CDirtyRegionAnnotation *)((char *)v0 + 8);
  }
  while ( v1 );
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__);
}
