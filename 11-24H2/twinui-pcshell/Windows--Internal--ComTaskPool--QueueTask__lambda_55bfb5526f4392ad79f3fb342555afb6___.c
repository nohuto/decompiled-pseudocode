/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_55bfb5526f4392ad79f3fb342555afb6___ @ 0x1803087C8
 * Callers:
 *     _lambda_67b2f18edae7de11733e212eb4a2dec4_::operator() @ 0x180309AEC (_lambda_67b2f18edae7de11733e212eb4a2dec4_--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55bfb5526f4392ad79f3fb342555afb6___::CTaskWrapper__lambda_55bfb5526f4392ad79f3fb342555afb6_____lambda_55bfb5526f4392ad79f3fb342555afb6___ @ 0x180307E9C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_55bfb5526f4392ad79f3fb342555afb6___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_55bfb5526f4392ad79f3fb342555afb6___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55bfb5526f4392ad79f3fb342555afb6___::CTaskWrapper__lambda_55bfb5526f4392ad79f3fb342555afb6_____lambda_55bfb5526f4392ad79f3fb342555afb6___(
           v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
