/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__&_ @ 0x180036CDC
 * Callers:
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x180036990 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&_::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&___lambda_1b237cfa226cb7a358646b393456f6b8__&_ @ 0x180036D70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__-_--CTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8____(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8____::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8______lambda_1b237cfa226cb7a358646b393456f6b8____(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(1LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
