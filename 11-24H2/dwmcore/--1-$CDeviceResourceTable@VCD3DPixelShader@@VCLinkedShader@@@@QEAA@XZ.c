/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ @ 0x180068EE4
 * Callers:
 *     ??1CLinkedShader@@UEAA@XZ @ 0x180068EBC (--1CLinkedShader@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXXZ @ 0x180068F10 (-ReleaseResources@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@AEAAXXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>(
        struct IDeviceResourceNotify *a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResources(a1);
  return detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>((char *)a1 + 16);
}
