/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5af8d5de97e6639990840c940ce8594c___ @ 0x18006AE24
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___ @ 0x18006AD4C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c_____lambda_5af8d5de97e6639990840c940ce8594c___ @ 0x18006AFBC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5af8d5de97e6639990840c940ce8594c___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c_____lambda_5af8d5de97e6639990840c940ce8594c___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
