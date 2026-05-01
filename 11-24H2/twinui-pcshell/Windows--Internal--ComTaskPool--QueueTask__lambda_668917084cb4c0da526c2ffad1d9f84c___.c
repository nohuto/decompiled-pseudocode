/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___ @ 0x1803A8304
 * Callers:
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1803A8F58 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c_____lambda_668917084cb4c0da526c2ffad1d9f84c___ @ 0x1803A7EBC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  v4 = 0LL;
  if ( v3 )
  {
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c_____lambda_668917084cb4c0da526c2ffad1d9f84c___(
           (__int64)v3,
           a2);
    v8 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v8);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
