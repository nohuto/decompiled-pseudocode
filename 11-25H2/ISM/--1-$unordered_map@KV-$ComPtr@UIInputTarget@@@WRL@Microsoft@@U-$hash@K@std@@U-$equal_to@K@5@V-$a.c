/*
 * XREFs of ??1?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18002BC5C
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x18002BB7C (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x18002CCC4 (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     _ContextualProcessorBuffer::ResetBuffer_::_1_::dtor$4 @ 0x1801C8FA0 (_ContextualProcessorBuffer--ResetBuffer_--_1_--dtor$4.c)
 *     _ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision_::_1_::dtor$4 @ 0x1801C9410 (_ContextualProcessorBuffer--EventStreamEndedAndProcessFinalDecision_--_1_--dtor$4.c)
 *     _InputContext::Create_::_1_::dtor$3 @ 0x1801C9D40 (_InputContext--Create_--_1_--dtor$3.c)
 *     _std::_Default_allocator_traits_std::allocator_ContextualProcessorBuffer::InputSample___::construct_ContextualProcessorBuffer::InputSample_ContextualProcessorBuffer::InputSample__::_1_::dtor$1 @ 0x1801C9E48 (_std--_Default_allocator_traits_std--allocator_ContextualProcessorBuffer--InputSamp_ea_1801C9E48.c)
 *     _std::_Default_allocator_traits_std::allocator_ContextualProcessorBuffer::InputSample___::construct_ContextualProcessorBuffer::InputSample_ContextualProcessorBuffer::InputSample__::_1_::dtor$2 @ 0x1801C9E5E (_std--_Default_allocator_traits_std--allocator_ContextualProcessorBuffer--InputSamp_ea_1801C9E5E.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$10 @ 0x1801CAA60 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$10.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  _QWORD **v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  char *v8; // r8
  char *v9; // rcx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v2) >> 3));
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v8 = (char *)*((_QWORD *)v2 - 1);
      v9 = (char *)(v2 - v8);
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v9, v3);
        __debugbreak();
        JUMPOUT(0x18002BD37LL);
      }
      v2 = v8;
    }
    operator delete(v2, v3);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v4 = *(_QWORD ***)(a1 + 8);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( *v4 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      v7 = v5[3];
      if ( v7 )
      {
        v5[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      operator delete(v5, (const struct std::nothrow_t *)0x20);
      v5 = v6;
    }
    while ( v6 );
  }
  operator delete(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
