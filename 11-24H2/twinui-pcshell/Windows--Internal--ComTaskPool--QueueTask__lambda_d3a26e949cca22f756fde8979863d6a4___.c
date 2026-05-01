/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_d3a26e949cca22f756fde8979863d6a4___ @ 0x1803AF434
 * Callers:
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C0FF8 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4_____lambda_d3a26e949cca22f756fde8979863d6a4___ @ 0x1803AE62C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_d3a26e949cca22f756fde8979863d6a4___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  v4 = 0LL;
  if ( v3 )
  {
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4_____lambda_d3a26e949cca22f756fde8979863d6a4___(
           (__int64)v3,
           a2);
    v8 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v8);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
