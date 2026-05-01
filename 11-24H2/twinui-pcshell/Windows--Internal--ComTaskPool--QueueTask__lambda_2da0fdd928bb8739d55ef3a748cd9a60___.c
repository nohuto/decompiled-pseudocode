/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2da0fdd928bb8739d55ef3a748cd9a60___ @ 0x1804F6444
 * Callers:
 *     _lambda_2ab4781663b1c98e73026fa5a544de84_::operator() @ 0x1804F97F4 (_lambda_2ab4781663b1c98e73026fa5a544de84_--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2da0fdd928bb8739d55ef3a748cd9a60___::CTaskWrapper__lambda_2da0fdd928bb8739d55ef3a748cd9a60_____lambda_2da0fdd928bb8739d55ef3a748cd9a60___ @ 0x1804F39B4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2da0fdd928bb8739d55ef3a748cd9a60___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2da0fdd928bb8739d55ef3a748cd9a60___(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2da0fdd928bb8739d55ef3a748cd9a60___::CTaskWrapper__lambda_2da0fdd928bb8739d55ef3a748cd9a60_____lambda_2da0fdd928bb8739d55ef3a748cd9a60___(
           v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  v8 = SHTaskPoolQueueTask(3LL, a2, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
