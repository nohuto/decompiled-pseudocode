/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a61a72d02543b99baa10fb55a6e7a2f5___ @ 0x180024CF8
 * Callers:
 *     _lambda_4283d24cd011cefa10f50035df6139a0_::operator() @ 0x18002504C (_lambda_4283d24cd011cefa10f50035df6139a0_--operator().c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5_____lambda_a61a72d02543b99baa10fb55a6e7a2f5___ @ 0x180024C94 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_a61a72d02543b99baa10fb55a6e7a2f5___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5_____lambda_a61a72d02543b99baa10fb55a6e7a2f5___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
