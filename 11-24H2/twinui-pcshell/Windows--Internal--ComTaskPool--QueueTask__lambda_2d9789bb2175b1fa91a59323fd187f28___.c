/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2d9789bb2175b1fa91a59323fd187f28___ @ 0x180058510
 * Callers:
 *     ?ApplicationChanged@BroadcastDVRComponent@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1800585A0 (-ApplicationChanged@BroadcastDVRComponent@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PE.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28_____lambda_2d9789bb2175b1fa91a59323fd187f28___ @ 0x180057E48 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2d9789bb2175b1fa91a59323fd187f28___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28_____lambda_2d9789bb2175b1fa91a59323fd187f28___(
           (__int64)v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
