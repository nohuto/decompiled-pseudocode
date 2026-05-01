/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___ @ 0x18048D3F4
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___ @ 0x18048D5F0 (CreationThreadDispatcher--RunAsync__lambda_fa553258777e9fe890f937adf5270d38___.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e_____lambda_ddcef2f81a2bd508ea885ce0e8373a3e___ @ 0x18048CC90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e_____lambda_ddcef2f81a2bd508ea885ce0e8373a3e___(
           (__int64)v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  v8 = SHTaskPoolQueueTask(3LL, a2, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
