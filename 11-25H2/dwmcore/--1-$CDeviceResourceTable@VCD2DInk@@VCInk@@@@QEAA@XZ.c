/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ @ 0x18025AB90
 * Callers:
 *     ??1CInk@@UEAA@XZ @ 0x18027F99C (--1CInk@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@AEAAXXZ @ 0x180239BC4 (-ReleaseResources@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@AEAAXXZ.c)
 */

int __fastcall CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>(__int64 a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DInk,CInk>::`vftable';
  CDeviceResourceTable<CD2DInk,CInk>::ReleaseResources(a1);
  return detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>((void **)(a1 + 16));
}
