/*
 * XREFs of ??1?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1802690C8
 * Callers:
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x1802690F4 (--1CEffectCompilationService@@EEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180269378 (-_Tidy@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::~deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
        _QWORD **a1)
{
  _QWORD *v2; // rcx

  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
