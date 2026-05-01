/*
 * XREFs of Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const_&_ @ 0x18049A28C
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___ @ 0x18049A3C4 (MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1801813DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_____lambda_e4bce3ba4ff679026706ec329dbd106a__const___(
        _QWORD *a1,
        void *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  *a1 = 0LL;
  v3 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v6 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>((__int64)v3);
    *v4 = off_1807443F8;
    v4[4] = off_180744448;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
    v6 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v6);
  return a1;
}
