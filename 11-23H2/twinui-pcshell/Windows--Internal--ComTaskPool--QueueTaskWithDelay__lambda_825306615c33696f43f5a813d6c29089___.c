/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_825306615c33696f43f5a813d6c29089___ @ 0x180205B70
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1805154A0 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089_____lambda_825306615c33696f43f5a813d6c29089___ @ 0x180203C5C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___--CTaskW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_825306615c33696f43f5a813d6c29089___(
        __int64 a1,
        __int64 a2,
        void *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v5 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  v6 = 0LL;
  if ( v5 )
  {
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089_____lambda_825306615c33696f43f5a813d6c29089___(
           v5,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v10);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
