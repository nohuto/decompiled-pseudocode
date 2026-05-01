/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_9d957daca4bf82a19faac8188fc39455___ @ 0x18057F264
 * Callers:
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___ @ 0x18057F5DC (AsyncFrameEvents--_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455___::CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455_____lambda_9d957daca4bf82a19faac8188fc39455___ @ 0x18057F088 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_9d957daca4bf82a19faac8188fc39455___(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455___::CTaskWrapper__lambda_9d957daca4bf82a19faac8188fc39455_____lambda_9d957daca4bf82a19faac8188fc39455___(
           v4,
           a2);
  else
    v5 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
