/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_279b59b1da187398d137b7ca9bd87eac___ @ 0x180296E28
 * Callers:
 *     wistd::__invoke_void_return_wrapper_void_::__call__lambda_9b3391374d276f0391e9ed84fc8af55c__&_unsigned_char_const_&_ @ 0x180296DA0 (wistd--__invoke_void_return_wrapper_void_--__call__lambda_9b3391374d276f0391e9ed84fc8af55c__-_un.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac_____lambda_279b59b1da187398d137b7ca9bd87eac___ @ 0x18042A9F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_279b59b1da187398d137b7ca9bd87eac___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac_____lambda_279b59b1da187398d137b7ca9bd87eac___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
