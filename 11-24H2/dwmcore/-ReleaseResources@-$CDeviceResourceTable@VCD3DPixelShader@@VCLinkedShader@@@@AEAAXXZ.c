/*
 * XREFs of ?ReleaseResources@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXXZ @ 0x180068F10
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ @ 0x180068EE4 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180068F70 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResources(
        struct IDeviceResourceNotify *a1)
{
  CD3DResource **v1; // rbx
  CD3DResource **v3; // rbp

  v1 = (CD3DResource **)*((_QWORD *)a1 + 2);
  v3 = (CD3DResource **)*((_QWORD *)a1 + 3);
  while ( v1 != v3 )
    CD3DResource::RemoveResourceNotifier(*v1++, a1);
  return detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear((char *)a1 + 16);
}
