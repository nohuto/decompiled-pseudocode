/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18013C830
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18013C13C (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18013C938 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 **__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        __int64 **a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  unsigned __int64 v5; // r12
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 **result; // rax

  v5 = (unsigned __int64)a2[2];
  if ( *a2 )
    v7 = **a2;
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 16);
  v9 = (unsigned __int64)a4[2];
  if ( *a4 )
    v10 = **a4;
  else
    v10 = 0LL;
  while ( v5 != v8 )
  {
    v11 = (*(_QWORD *)(v10 + 16) - 1LL) & (v9 >> 1);
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * v11) + 8 * (v9 & 1),
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((*(_QWORD *)(v7 + 16) - 1LL) & (v5 >> 1))) + 8 * (v5 & 1),
      v11,
      v9);
    ++v9;
    ++v5;
  }
  v12 = *a4;
  a1[1] = 0LL;
  *a1 = v12;
  result = a1;
  a4[2] = (__int64 *)v9;
  a1[2] = (__int64 *)v9;
  return result;
}
