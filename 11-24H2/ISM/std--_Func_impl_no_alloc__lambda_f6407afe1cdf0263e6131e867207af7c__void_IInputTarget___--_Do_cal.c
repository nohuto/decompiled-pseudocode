/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Do_call @ 0x1800F27A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800227B0 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??1?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800228D4 (--1-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180030B0C (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdi
  _BYTE v4[72]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a2;
  if ( *(_DWORD *)(**(_QWORD **)(a1 + 8) + 352LL) )
  {
    PointerInputMediator::OnForwardedToGestureTargeting(**(const struct _MIT_INPUT_INTEROP_MESSAGE ***)(a1 + 16));
    ((void (__fastcall *)(_QWORD, _QWORD))Win32kInterop::s_pfnMTCallback)(**(_QWORD **)(a1 + 16), 0LL);
  }
  else
  {
    std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v4);
    (*(void (__fastcall **)(__int64, _QWORD, _BYTE *, __int64, _DWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 24) + 8LL,
      **(_QWORD **)(a1 + 32),
      v4,
      v3,
      0);
    std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v4);
  }
}
