/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180227FD0
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18015666C (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180158304 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 **__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        __int64 **a1,
        __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 *v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  __int64 *v10; // r14
  __int64 *v11; // rax
  __int64 **result; // rax

  v5 = *(__int64 **)(a2 + 16);
  v6 = (unsigned __int64)a3[2];
  if ( *a3 )
    v7 = **a3;
  else
    v7 = 0LL;
  v8 = (unsigned __int64)a4[2];
  if ( *a4 )
    v9 = **a4;
  else
    v9 = 0LL;
  v10 = a3[2];
  while ( v5 != v10 )
  {
    --v6;
    --v8;
    v10 = (__int64 *)v6;
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      (__int64 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((*(_QWORD *)(v9 + 16) - 1LL) & (v8 >> 1))) + 8 * (v8 & 1)),
      (char *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((*(_QWORD *)(v7 + 16) - 1LL) & (v6 >> 1))) + 8 * (v6 & 1)));
  }
  v11 = *a4;
  a4[2] = (__int64 *)v8;
  a1[1] = 0LL;
  *a1 = v11;
  result = a1;
  a1[2] = (__int64 *)v8;
  return result;
}
