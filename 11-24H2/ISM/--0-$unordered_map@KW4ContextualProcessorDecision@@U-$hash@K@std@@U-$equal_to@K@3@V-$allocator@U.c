/*
 * XREFs of ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800226C0
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001BC80 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F920 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x1800224D0 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>(
        __int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = operator new(0x18uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = operator new(0x80uLL);
  v5 = *(char **)(a1 + 24);
  v6 = (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v5) >> 3;
  if ( v6 )
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(8 * v6));
  *(_QWORD *)(a1 + 24) = v4;
  v7 = v4 + 16;
  *(_QWORD *)(a1 + 32) = v4 + 16;
  *(_QWORD *)(a1 + 40) = v4 + 16;
  do
    *v4++ = v3;
  while ( v4 != v7 );
  return a1;
}
