/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_14b36391e39e184c5a3f1194e32070c1___ @ 0x1801467D0
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x1800883E0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1_____lambda_14b36391e39e184c5a3f1194e32070c1___ @ 0x180146408 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___--CTaskW.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____ @ 0x180146FA0 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7ee6.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_14b36391e39e184c5a3f1194e32070c1___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1___::CTaskWrapper__lambda_14b36391e39e184c5a3f1194e32070c1_____lambda_14b36391e39e184c5a3f1194e32070c1___(
           v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____(&v10);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
