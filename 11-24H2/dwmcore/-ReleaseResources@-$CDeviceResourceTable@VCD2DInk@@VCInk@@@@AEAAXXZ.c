/*
 * XREFs of ?ReleaseResources@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@AEAAXXZ @ 0x18022DE24
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ @ 0x18024F660 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk>::ReleaseResources(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rbp

  v1 = *(_QWORD **)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 24);
  while ( v1 != v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 80LL))(*v1, a1);
    ++v1;
  }
  return detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)(a1 + 16));
}
