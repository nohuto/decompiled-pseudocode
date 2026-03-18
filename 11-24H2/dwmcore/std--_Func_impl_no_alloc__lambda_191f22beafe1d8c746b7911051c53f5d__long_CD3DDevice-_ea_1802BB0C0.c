/*
 * XREFs of std::_Func_impl_no_alloc__lambda_191f22beafe1d8c746b7911051c53f5d__long_CD3DDevice::D3D12Resources___::_Do_call @ 0x1802BB0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180192EEC (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1802B937C (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_191f22beafe1d8c746b7911051c53f5d__long_CD3DDevice::D3D12Resources___::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = (__int64 *)(a1 + 8);
  v4 = wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
         &v7,
         (__int64 *)(a1 + 16));
  v5 = wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
         &v8,
         v3);
  return anonymous_namespace_::CreateD3D12ResourcesInternal((IUnknown **)v5, v4, v2);
}
