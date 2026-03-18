/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ @ 0x18024B074
 * Callers:
 *     ??1CGenericInk@@EEAA@XZ @ 0x18022DCCC (--1CGenericInk@@EEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ @ 0x18024B0A0 (-ReleaseResources@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ.c)
 */

int __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>(
        _QWORD *a1)
{
  *a1 = &CDeviceResourceTable<CD2DGenericInk,CGenericInk>::`vftable';
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::ReleaseResources();
  return detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>((__int64)(a1 + 2));
}
