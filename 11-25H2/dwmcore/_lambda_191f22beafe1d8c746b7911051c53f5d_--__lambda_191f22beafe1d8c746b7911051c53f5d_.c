/*
 * XREFs of _lambda_191f22beafe1d8c746b7911051c53f5d_::__lambda_191f22beafe1d8c746b7911051c53f5d_ @ 0x1802C2204
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18021D450 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_191f22beafe1d8c746b7911051c53f5d__long_CD3DDevice::D3D12Resources___::_Delete_this @ 0x1802C46E0 (std--_Func_impl_no_alloc__lambda_191f22beafe1d8c746b7911051c53f5d__long_CD3DDevice-_ea_1802C46E0.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_191f22beafe1d8c746b7911051c53f5d_::__lambda_191f22beafe1d8c746b7911051c53f5d_(__int64 *a1)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1 + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a1);
}
