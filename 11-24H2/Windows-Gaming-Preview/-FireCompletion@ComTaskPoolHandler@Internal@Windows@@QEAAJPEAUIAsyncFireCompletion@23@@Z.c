/*
 * XREFs of ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x18001D604
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001D5C0 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPoolHandler::FireCompletion(
        Windows::Internal::ComTaskPoolHandler *this,
        struct Windows::Internal::IAsyncFireCompletion *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  struct Windows::Internal::IAsyncFireCompletion *v5; // r14
  _BYTE *v6; // rax
  _BYTE *v7; // rsi
  DWORD CurrentThreadId; // eax
  int v9; // ebp
  bool v10; // bp
  char v12; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( *(int *)(v4 + 8) <= 4 )
    goto LABEL_20;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v7 + 2) = 0LL;
    if ( v7 + 16 != &v12 )
    {
      *((_QWORD *)v7 + 2) = a2;
      v5 = 0LL;
    }
    *(_QWORD *)v7 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 16LL))(v7);
  v10 = v9 >= 0;
  if ( v5 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( !v10 )
  {
LABEL_20:
    ++*(_DWORD *)(v4 + 8);
    v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 24LL))(a2);
    --*(_DWORD *)(v4 + 8);
  }
  return v3;
}
