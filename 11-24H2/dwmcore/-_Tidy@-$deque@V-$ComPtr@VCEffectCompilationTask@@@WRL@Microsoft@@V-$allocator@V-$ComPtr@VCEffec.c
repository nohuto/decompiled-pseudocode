/*
 * XREFs of ?_Tidy@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18025F438
 * Callers:
 *     ??1?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18025F188 (--1-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffectCom.c)
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x18025F1B4 (--1CEffectCompilationService@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18021CE08 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Tidy(_QWORD *a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // r14
  __int64 v4; // rsi
  _QWORD *v5; // rcx

  while ( a1[4] )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back((__int64)a1);
  v2 = (_QWORD **)(a1 + 1);
  v3 = a1 + 1;
  if ( a1[1] )
  {
    v4 = a1[2];
    if ( v4 )
    {
      do
      {
        v5 = (_QWORD *)(*v2)[--v4];
        if ( v5 )
          std::_Deallocate<16,0>(v5, 0x10uLL);
      }
      while ( v4 );
      v3 = a1 + 1;
    }
    std::_Deallocate<16,0>(*v2, 8LL * a1[2]);
  }
  a1[2] = 0LL;
  *v3 = 0LL;
}
