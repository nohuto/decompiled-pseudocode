/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4df33f58deefb1a102d6f826bdf590f4___ @ 0x1804F658C
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_5997640efe376a9387473cba5853814f___ @ 0x1804F7234 (CreationThreadDispatcher--RunAsync__lambda_5997640efe376a9387473cba5853814f___.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4___::CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4_____lambda_4df33f58deefb1a102d6f826bdf590f4___ @ 0x1804F3AF4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4df33f58deefb1a102d6f826bdf590f4___(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4)
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4___::CTaskWrapper__lambda_4df33f58deefb1a102d6f826bdf590f4_____lambda_4df33f58deefb1a102d6f826bdf590f4___(
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
