/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___ @ 0x1802B63A8
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___ @ 0x1802C7984 (CIAMGlobals--QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f_____lambda_efcd6f7655c646e4b7d2db7830a7991f___ @ 0x1802E1718 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_efcd6f7655c646e4b7d2db7830a7991f___(
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
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f_____lambda_efcd6f7655c646e4b7d2db7830a7991f___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
