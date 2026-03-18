/*
 * XREFs of _lambda_191f22beafe1d8c746b7911051c53f5d_::__lambda_191f22beafe1d8c746b7911051c53f5d_ @ 0x1802B8BC4
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x180211C70 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_191f22beafe1d8c746b7911051c53f5d__long_CD3DDevice::D3D12Resources___::_Delete_this @ 0x1802BB080 (std--_Func_impl_no_alloc__lambda_191f22beafe1d8c746b7911051c53f5d__long_CD3DDevice-_ea_1802BB080.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_191f22beafe1d8c746b7911051c53f5d_::__lambda_191f22beafe1d8c746b7911051c53f5d_(__int64 *a1)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1 + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1);
}
